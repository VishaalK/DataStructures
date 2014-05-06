Rope
----

An efficient way to represent strings. I once got asked in an interview to code up a text editor and I had no idea how to represent the text besides a 2D array of characters and this (as well as a gap buffer, which Emacs uses) was one of the things that came up when I googled it. There is a tradeoff between this and an underlying C-string String class. I think it might also be possible to represent the text as strings, and a group of strings is a "paragraph", and a group of paragraphs is a "paper", but that maps more to essays than a text editor for code.  

