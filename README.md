# codeblocks4arduino
use the codeblocks editor for *.ino files

If you dislike the editor of the Arduino IDE, you can use the Code::Blocks editor instead.

The best way is to establish a softlink of *.ino onto *.c by

ln -s YOURFILE.ino YOURFILE.c

I recommend a softlink instead of a hardlink, because git pull could break the link otherwise.

Unfortunatly, Code::Blocks will replace the link by a new file when saving. So we need to create a version of C::B that overwrites.
Just get the source code of C::B and replace the function Save() in src/sdk/filemanager.cpp by the version provided in hack.cpp here.

I know, it's a crude hack ... but it works.
