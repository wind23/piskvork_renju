Piskvork for Renju
==================

* Copyright (C) 2000-2015 Petr Lastovicka
* Copyright (C) 2012-2016 Tianyi Hao

Piskvork is a gomoku interface which could load a lot of gomoku AI engines, 
which has been used in the gomuku AI tournament [Gomocup](http://gomocup.org).

The original Piskvork by Petr Lastovicka could been downloaded from:  
(http://sourceforge.net/projects/piskvork/files/piskvork.zip/download).  
The original C++ source code could been download from:  
(http://petr.lastovicka.sweb.cz/src/piskvork.zip).  
The protocol between a brain and Piskvork is at:  
(http://petr.lastovicka.sweb.cz/protocl2en.htm).

Since the original Piskvork could not support the renju rule, a modification 
has been implied to it to support it.
The command that Piskvork sends to the brain for renju rule is:

	INFO rule 4

Usage: Just copy the files in the directory [Release](https://raw.github.com/wind23/piskvork_renju/master/Release/)
in Piskvork for Renju to the original [Piskvork package](http://sourceforge.net/projects/piskvork/files/piskvork.zip/download)
to replace the original files.

This program is free software; you can redistribute it and/or
modify it under the terms of the
[GNU General Public License](http://www.gnu.org/licenses/gpl.html).
If you use any part of it in your program, then you must publish 
all your source code too.
