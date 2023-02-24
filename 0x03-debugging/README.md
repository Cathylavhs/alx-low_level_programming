## DEBUGGIN IN C LANGUAGE

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.

## TYPES OF DEBUGGING IN C

Usually debugging consists of 3 stages or steps:
1. Understand in what scenario the bug in a program is happening.
2. Inspect the value of variables at different stages of a program.
3. Figure out if a part of the is executed or not.

## WAYS TO DEBUG IN C

PRINT STATEMENTS
This involves the use of print statements eg.printf; to figure out the value of the variables. Its a risky option as we  may forget to remove the print statements, leading them to be printed to an application's console.
INTERACTIVE DEBUGGER
C supports an interactive way of debugging. This means we can pause a program execution and spectate variables. Breakpoints are the lines where the program will pause during execution. This way, we need not add too many print statements t debug and remove them after debugging.
