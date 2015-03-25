<table border='0' cellspacing='10'><tr><td valign='top'>

<h1>SageThumbs 2.0.0.22</h1>

SageThumbs is a powerful shell extension allowing to preview enormous amount of image formats directly in Windows Explorer by using Pierre-e Gougelet's GFL library (<a href='http://xnview.com/'>XnView</a>'s author).<br>
<br>
<h2>Downloads</h2>

<b><a href='https://sourceforge.net/projects/sagethumbs/files/latest/download'>SageThumbs 2.0.0.22</a></b> (2 Mb)<br>
<br>
<h2>Changelog</h2>

<ul><li>Added Dutch translation (by Gaston Loos)<br>
</li><li>Updated Italian translation (by Marcello)</li></ul>

Full changelog available <a href='http://www.cherubicsoft.com/projects/sagethumbs/versions'>here</a>.<br>
<br>
<h2>Features</h2>

<ul><li>Extended thumbnail image view of Explorer folder<br>
</li><li>Thumbnail image in explorer context menu (right-click menu)<br>
</li><li>Extended info tips<br>
</li><li>Support 162 image formats (224 extensions) via <a href='http://www.xnview.com/en/GFL/'>GFL Library</a>
</li><li>Support additional 26 image formats via XnView plugins (if installed)<br>
</li><li>Send by mail support<br>
</li><li>One-click conversion to popular image formats support<br>
</li><li>Wallpaper selection support<br>
</li><li>Copy to clipboard support</li></ul>

<h3>Please read carefully the following information:</h3>

As SageThumbs is a Windows Explorer context menu extension, there is no an executable file that you should launch to bring it up. To use it, just open any folder with image files in Windows Explorer, and then right-click a file you want to preview. You'll see the thumbnail immediately in the context menu.<br>
<br>
<h2>AI, PS, EPS, PDF Support</h2>

To enable thumbnails for Adobe Illustrator (ai), Postscript (ps, eps) and Adobe Acrobat (pdf) files you need installed old Ghostscript library:<br>
<br>
<ul><li><a href='http://sourceforge.net/projects/ghostscript/files/AFPL%20Ghostscript/8.54/gs854w32.exe/download'>AFPL Ghostscript 8.54 32-bit (gs854w32.exe)</a>
</li><li><a href='http://sourceforge.net/projects/ghostscript/files/AFPL%20Ghostscript/8.54/gs854w64.exe/download'>AFPL Ghostscript 8.54 64-bit (gs854w64.exe)</a></li></ul>

<h2>Troubleshooting</h2>

To fix unwanted SageThumbs extension:<br>
<ol><li>Uncheck problem extension in SageThumbs options and press OK;<br>
</li><li>Restore extension association in original application or using Windows Control Panel;<br>
</li><li>Clear Windows thumbnail cache using Windows Clean Manager (cleanmgr.exe);<br>
</li><li>Reboot.<br>
Note: It may be sufficient to make not all those steps.</li></ol>

<h2>External plugins</h2>

SageThumbs can use external XnView plugins, it tries to automatically detect XnView installation folder or if failed it will use predefined 	folder. Typically this folder is "C:\Program files\XnView\PlugIns\" for 32-bit SageThumbs on 32-bit Windows or 64-bit SageThumbs on 64-bit Windows and "C:\Program Files (x86)\XnView\PlugIns\" for 32-bit SageThumbs on 64-bit Windows. So if you have no XnView installed you can create this folder manually and unpack plugins to it. Just don't  forget that you need same "bit capacity" for plugins and SageThumbs.<br>
<br>
<h2>System Requirements</h2>

<ul><li>Windows XP/2003/Vista/2008/7/2012/8/8.1 32/64-bit<br>
</li><li>About 5 Mb of disk space + additional space for cache</li></ul>

<h2>Translation</h2>

SageThumbs can be easily translated to other languages. This is possible through the use of "<a href='https://code.google.com/p/po-localization/'>PO-Localization</a>" software library.<br>
<br>
<h3>New translation</h3>

<ul><li>Download and install PoEdit: <a href='http://www.poedit.net/download.php'>http://www.poedit.net/download.php</a>
</li><li>Copy "<a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.pot?format=raw'>SageThumbs.dll.pot</a>" file (can be found in SageThumbs installation folder) under new name "SageThumbs.dll.XX.po" near "SageThumbs.dll" file. Where "XX" is a 2-digit (or 4-digit) hexadecimal code of language, see "<a href='http://msdn.microsoft.com/en-us/library/windows/desktop/dd318693.aspx'>Language Codes Table</a>". For example Russian has code 0x19 so its a "<a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.19.po?format=raw'>SageThumbs.dll.19.po</a>".<br>
</li><li>Open new file in <a href='http://www.poedit.net/'>PoEdit</a>, translate and save as UTF-8 (it's by default)<br>
</li><li>Open <a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/sagethumbs-options.png?format=raw'>SageThumbs options</a> and check a new language in it<br>
</li><li>E-mail PO-file to me: <a href='mailto:raspopov@cherubicsoft.com'>raspopov@cherubicsoft.com</a>. File will be definitely included in the next version</li></ul>

<h3>Update existing translation</h3>

<ul><li>Download fresh "<a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.pot?format=raw'>SageThumbs.dll.pot</a>" file<br>
</li><li>Open your .PO-translation file by <a href='http://www.poedit.net/'>PoEdit</a>
</li><li>Select menu item "Catalogue" -> "Update from POT file..." and open "SageThumbs.dll.pot", you'll see what was added to and what was removed from new translation</li></ul>

<h3>Complete translations</h3>

<ul><li>English (built-in)<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.05.po?format=raw'>Czech</a> by jerry<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.04.po?format=raw'>Chinese (Simplified)</a> by Semidio<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.7c04.po?format=raw'>Chinese (Traditional)</a> by You-Cheng Hsieh<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.13.po?format=raw'>Dutch</a> by Gaston Loos<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.0c.po?format=raw'>French</a> by DenB, Joël Boyer, Damien Bigot<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.07.po?format=raw'>German</a> by Murasame, Kai Evers<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.08.po?format=raw'>Greek</a> by Chris Tsekouras<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.0d.po?format=raw'>Hebrew</a> by Nitsan Rozenberg<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.0e.po?format=raw'>Hungarian</a> by Morva Kristóf<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.10.po?format=raw'>Italian</a> by Marcello Gianola, Marco Reni<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.11.po?format=raw'>Japanese</a> by Shoichi Ito<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.12.po?format=raw'>Korean</a> by JunHyung Lee<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.15.po?format=raw'>Polish</a> by Ireneusz Chorosz, Krzysztof Cisło<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.16.po?format=raw'>Portuguese (Brazilian)</a> by Fabiano Reis, Paulo Teixeira, Ricardo de Souza Pereira<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.29.po?format=raw'>Persian</a> by IRIman<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.19.po?format=raw'>Russian</a> by Nikolay Raspopov<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.1d.po?format=raw'>Swedish</a> by Åke Engelbrektson<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.1e.po?format=raw'>Thai</a> by Adisorn Aeksatean<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.1f.po?format=raw'>Turkish</a> by Emrah Güzeltaş</li></ul>

<h3>Incomplete translations</h3>

<ul><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.21.po?format=raw'>Indonesian</a> by William Chai<br>
</li><li><a href='https://sourceforge.net/p/sagethumbs/code/HEAD/tree/trunk/SageThumbs/SageThumbs.dll.0a.po?format=raw'>Spanish</a> by Baco Baco</li></ul>


<h2>Copyrights</h2>

Copyright (C) Nikolay Raspopov, 2004-2015.<br>
<br>
GFL Library, GFL SDK and XnView Copyright (C) Pierre-E Gougelet, 1991-2014.<br>
<br>
</td><td width='360' valign='top'>

<h2>Video review</h2>

<a href='http://www.youtube.com/watch?feature=player_embedded&v=akvRrxlP7wQ' target='_blank'><img src='http://img.youtube.com/vi/akvRrxlP7wQ/0.jpg' width='330' height=248 /></a><br>
<br>
<h2>Screenshots</h2>

<h3>Thumbnail View</h3>

<a href='http://sagethumbs.sourceforge.net/img/sagethumbs-after.png'><img src='http://sagethumbs.sourceforge.net/img/sagethumbs-after.png' alt='SageThumbs Thumbnail View' width='330' /></a>

<h3>Icon View</h3>

<a href='http://sagethumbs.sourceforge.net/img/sagethumbs-icon-view.png'><img src='http://sagethumbs.sourceforge.net/img/sagethumbs-icon-view.png' alt='SageThumbs Icon View' width='330' /></a>

<h3>Context Menu</h3>

<a href='http://sagethumbs.sourceforge.net/img/sagethumbs-context-menu.png'><img src='http://sagethumbs.sourceforge.net/img/sagethumbs-context-menu.png' alt='SageThumbs Context Menu' width='330' /></a>

<h3>Info Tips</h3>

<a href='http://sagethumbs.sourceforge.net/img/sagethumbs-infotip.png'><img src='http://sagethumbs.sourceforge.net/img/sagethumbs-infotip.png' alt='SageThumbs Info Tips' width='330' /></a>

<h3>Options</h3>

<a href='http://sagethumbs.sourceforge.net/img/sagethumbs-options.png'><img src='http://sagethumbs.sourceforge.net/img/sagethumbs-options.png' alt='SageThumbs Options' width='330' /></a>

<h2>Project Information</h2>

<wiki:gadget url="http://www.ohloh.net/p/585396/widgets/project_basic_stats.xml" width="350" height="239" border="0"/><br>
<wiki:gadget url="http://www.ohloh.net/p/585396/widgets/project_users_logo.xml" height="70" border="0"/><br>
<br>
</td></tr></table>