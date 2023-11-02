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


# NameSpaces

* Why { std:: } and not just "cout"?

* What is a naming conflict?

* Names given to parts of code to help reduce naming conflicts.

* std is naming for the C++ "standards" namespace.
  
* third-party frameworks will have their own namespaces.

* Scope resolution operator::

* How can we use these namespaces?



C++ name spaces can be a little confusing when you first see them. As our c++ programs become more and more complex,

our programs become a combination of our own code,the c++ standard libraries and their code

and libraries from third-party developers and their code.So as you can imagine, sooner or later we're going to run into the situation where company x names something

the same as company y. When we use that name in our program, the c++ compiler

doesn't know which one to use. So we have something called the naming conflict.

For example, suppose another library that we're using has defined a name called cout.

Well, that's a big problem, right. Because now c++ doesn't know which cout to use.

C++ allows developers to use namespaces as containers to group their code entities into a namespace scope.

That means that i could create a namespace called Frank, and I could define cout within that namespace.

Now if a programmer wanted to use my version of cout, all they had to do is say Frank::cout.

That's it. If they wanted to use the one in the standard library, they would just say standard::cout. It's as simple as that.

Namespaces are used to reduce the possibility of naming conflicts.

The double colon operator is called the scope resolution operator. It's used to resolve which name we want to use.

However, many programmers find it tedious to type std:: all the time when using cin, cout,

endline and so forth. So c++ provides a few mechanisms to help in that regard.

-Example 



    using namespace std;     // use the entire std namespace

    int main()

      {

      int fav_number;
  
       cout << "Enter fave number" << endl;
  
     return 0;
  
    }

