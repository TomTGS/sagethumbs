/*
SageThumbs - Thumbnail image shell extension.

Copyright (C) Nikolay Raspopov, 2004-2010.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#include "stdafx.h"
#include <InitGuid.h>

DEFINE_GUID(CLSID_WindowsThumbnailer,0x889900c3,0x59f3,0x4c2f,0xae,0x21,0xa4,0x09,0xea,0x01,0xe6,0x05);
DEFINE_GUID(CLSID_Thumb,0x4A34B3E3,0xF50E,0x4FF6,0x89,0x79,0x7E,0x41,0x76,0x46,0x6F,0xF2);
DEFINE_GUID(IID_IDirectDrawSurface,0x6C14DB81,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60);

DWORD GetRegValue(LPCTSTR szName, DWORD dwDefault, LPCTSTR szKey, HKEY hRoot)
{
	DWORD dwValue, dwType = REG_DWORD, dwSize = sizeof( DWORD );
	return ( SHGetValue( hRoot, szKey, szName, &dwType,
		&dwValue, &dwSize ) == ERROR_SUCCESS &&
		dwType == REG_DWORD && dwSize == sizeof( DWORD ) ) ? dwValue : dwDefault;
}

CString GetRegValue(LPCTSTR szName, LPCTSTR szDefault, LPCTSTR szKey, HKEY hRoot)
{
	CString sValue;
	DWORD dwType = REG_SZ, dwSize = ( MAX_LONG_PATH - 1 )* sizeof( TCHAR );
	LPTSTR buf = sValue.GetBuffer( MAX_LONG_PATH );
	bool ret = SHGetValue( hRoot, szKey, szName, &dwType, buf, &dwSize ) == ERROR_SUCCESS &&
		dwType == REG_SZ;
	buf [ dwSize / sizeof( TCHAR ) ] = _T('\0');
	sValue.ReleaseBuffer();
	return ret ? sValue : szDefault;
}

void SetRegValue(LPCTSTR szName, DWORD dwValue, LPCTSTR szKey, HKEY hRoot)
{
	SHSetValue( hRoot, szKey, szName, REG_DWORD, &dwValue, sizeof( DWORD ) );
}

void SetRegValue(LPCTSTR szName, LPCTSTR szValue, LPCTSTR szKey, HKEY hRoot)
{
	SHSetValue( hRoot, szKey, szName, REG_SZ, szValue, (DWORD)lengthof( szValue ) );
}

void SetRegValue(LPCTSTR szName, const CString& sValue, LPCTSTR szKey, HKEY hRoot)
{
	SHSetValue( hRoot, szKey, szName, REG_SZ, (LPCTSTR)sValue, (DWORD)lengthof( sValue ) );
}

void MakeDirectory(LPCTSTR dir)
{
	TCHAR path [MAX_PATH];
	LPCTSTR src = dir;
	LPTSTR  dst = path;
	while (*src) {
		*dst++ = *src;
		if (*src++ == _T('\\')) {
			*dst = _T('\0');
			CreateDirectory (path, NULL);
		}
	}
	if (*(dst - 1) != _T('\\')) {
		*dst = _T('\0');
		CreateDirectory (path, NULL);
	}
}

CString GetSpecialFolderPath(int csidl)
{
	CString buf;

	// Avoid SHGetSpecialFolderPath()
	PIDLIST_ABSOLUTE pidl = NULL;
	if ( SUCCEEDED( SHGetSpecialFolderLocation( GetDesktopWindow (), csidl, &pidl ) ) )
	{
		SHGetPathFromIDList( pidl, buf.GetBuffer( MAX_LONG_PATH ) );
		buf.ReleaseBuffer();

		CoTaskMemFree( pidl );
	}
	
	return buf;
}

BOOL IsProcessElevated()
{
	HANDLE hToken = NULL;
	if ( ! OpenProcessToken( GetCurrentProcess(), TOKEN_QUERY, &hToken ) )
	{
		ATLTRACE( "OpenProcessToken error: %d\n", GetLastError() );
		return FALSE;
	}

	TOKEN_ELEVATION elevation = {};
	DWORD dwSize = 0;
	if ( ! GetTokenInformation( hToken, TokenElevation, &elevation, 
		sizeof( elevation ), &dwSize ) )
	{
		ATLTRACE( "GetTokenInformation error: %d\n", GetLastError() );
		CloseHandle( hToken );
		return FALSE;
	}

	CloseHandle( hToken );
	return ( elevation.TokenIsElevated != FALSE );
}

// CRC 32

static DWORD crc32_table[ 256 ];

class CCRC32
{
public:
	inline CCRC32()
	{
		const DWORD CRC32_POLY = 0x04c11db7;	// AUTODIN II, Ethernet, & FDDI
		for (int i = 0; i < 256; ++i) {
			DWORD c = i << 24;
			for (int j = 8; j > 0; --j)
				c = c & 0x80000000 ? (c << 1) ^ CRC32_POLY : (c << 1);
			crc32_table[i] = c;
		}
	}

};

static CCRC32 _CRC32;

DWORD CRC32(const char *buf, int len)
{
	DWORD crc = 0xffffffff;
	for (const BYTE *p = (const BYTE *) buf; len > 0; ++p, --len)
		crc = (crc << 8) ^ crc32_table[(crc >> 24) ^ *p];
	return ~crc;
}
