# C_Language_P2
 Structure of a C++ Program

 * Basic Components

 * Preprocessor Directives

 * The main functions

 * Namespaces

 * Comments

 * Basic I/O
# Preprocessor Directives

 * What is a Preprocessor?
   
The C++ preprocessor is a program that processes your source code before the compiler sees it.

 * What does it do?

The C++ pre-processor first strips all the comments from the source file
and replaces each comment with a single space.
Then it looks for pre-processor directives and executes them.

 * Diretives Start with a " # "
   
Pre-processor directors are lines in the source code that begin with a pound or hashtag symbol.

 * Commands to preprocessors.

_ Examples.
* #include <iostream>

* #include "myfile.h"

* if

* elif

* else

* endif

# Comments

 Comments are programmer readable explanations in the source code.

Explanations, notes, annotations,

anything that adds meaning to what the program is doing.

One thing that's very important to understand is that

the comments never make it to the compiler.

In c++, the preprocessor strips out the comments so that the

compiler never sees them.

It may sound kind of weird right we're writing something that the compiler is never going to see.

That's the whole point. This is human readable.

This is for the next programmer that's coming down the pipe or

for yourself when you have to go back and modify code.

You can leave comments in the code explaining what you did and

why you did. 

# The main() function

* Every C++ program must have exactly 1 main () function

* Start point of program execution

* return 0 indicates successful program execution

* 2 versions that are both valid
  

Every c++ program must have exactly one main function somewhere.

A c++ program can consist of hundreds of files,

but one of those files must contain the main function.

Note that the name main must be written in lowercase letters.

When a c++ program executes,

the main function is called by the operating system,

and the code between the curly braces executes.

When execution hits the return statement,

the program returns the integer value to the operating system.

If the return value is zero, then the program terminated successfully.

If the return value is not zero,

then the operating system can check the value returned and determine what went wrong.

