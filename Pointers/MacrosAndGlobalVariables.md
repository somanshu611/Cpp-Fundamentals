# Macros 
- Macro is a piece of code which once declared can be used anywhere in the code. 
- Macro is defined by #define directive.
- Macros cannot be changed once declared. 
- Whenever a macro name is encountered by the compiler, it replaces the name with the definition of the macro. 
- Macro definitions need not be terminated by a semi-colon(;).
- We can definitely use global variable instead of macros but There is one issue in using global variables, and that is if someone accidently changes the value of pi in our code at any point of time in any of the functions, we could lose that original value.
- Also global variable used memory and macros don't. 
- Macros are replaced with their values even before compliation or duing compile time. 


## Types of Macros 
1. Object Like Macros
2. Chain Macros
3. Mutli-line Macros :
   - to create a multi-line macro you have to use backslash-newline. 
4. Function-like Macros : 
   - *If we put a space between the macro name and the parentheses in the macro definition then the macro will not work.*
   - A function-like macro is only lengthened if an only if its name appears with a pair of parentheses after it. If we don’t do this, the function pointer will get the address of the real function and lead to a syntax error. 


# Global Variables : 
- It's preferable to use reference variables because global variables can be changed by functions. 