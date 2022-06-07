# Address TypeCasting
We cannot do this : 
```
int a = 5;
pointer p = &a;
```
and instead, we have to do
```
int a = 5;
int* p = &a;
```
It’s generally because we need to specify that when we invoke a particular pointer, how will the compiler know what type of value a pointer has stored, and while invoking/transferring data, how much space needs to be allotted to it.

**Typecasting** means assigning one type of data to another type, like storing an integer value to a char data type. 

An example of **implicit typecasting** where compiler itself interprets the conversion of integer value to ASCII character value : 
```
int x= 65;
char c = x;
```
**Explicit Typecasting** is required for pointers. 
```
int i = 65; 
int *p = &i;
char *pc = (char*) p;
```
This is wrong : 
```
char *pc = p;
```