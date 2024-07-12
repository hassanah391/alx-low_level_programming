### Static Libraries
In this directory I made three important files to learn the concept of static libraries using    
c programming and bash shell        
the three files are:
- main.h: contains the prototypes of the functions included in the static library "libmy.a"
- libmy.a: the static library we want to create.
- create_static_lib.sh: its a script file creates a static library called "liball.a"
  from all the .c files that are in the current directory.      
       
       
### Learning Objectives
- What is a static library, how does it work, how to create one, and how to use it
- asic usage of ar, ranlib, nm
         
       
### Requirements:
#### C
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
    
     
#### Bash
- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line (why?)
- The first line of all your files should be exactly #!/bin/bash
- A README.md file, at the root of the folder of the project, describing what each script is doing
- All your files must be executable