Each variable name is stored in a symbol table, and that symbol table stores the address of the memory location to which the variable name is referring to. And whenever we declare that variable compiler looks up in the symbol table which stores variable name and everything associated with it, and tells the value that is stored in the memory location that num refers. 

- Memory address have hexadecimal format. 

- It's a **BAD PRACTISE** to just delcare a pointer without initialising it because it will contain garbage value(i.e pointing to garbage address) and if you try to access by accident then unknown problems may occurs because you might by trying to access a memory that doesn't even exist, thus, you should always initialize it with some value. 

- **Dereference Operator**

- sizeof(ptr) - This will always give 8 bytes because any type of pointer stores only address, so doesn't matter what data type you used for declaring the pointer, the size of pointer will always be 8 bytes. 

```
int *p = 0; // or *p = NULL
cout<<*p<<endl;
```
This will give segmentation fault coz you're trying to access a memory address that doesn't exist. 
Also, *p = 0 or *p = NULL is same thing.

- **Imp** -> Never call '&' operator "AND OPERATOR" call it address of operator. 

- **imp do this later** - Why the size of each pointer is 8 bytes? Why are hexadecimal numbers only stored in 8bytes

- **Another bad Practise** is to return a pointer because that pointer will be local and will be terminated as the function returns the pointer. This is the same with reference variable. 

- **You need to play with pointers for learning** 

## Pointer Arithmetic
- If you do ptr++, then the memory addresss stored inside the pointer will not increase by 1 instead it will point the next memory address, and lets the say the data type of pointer was int, then next pointer will be after 4 bytes, so the memory address will increment by 4. 

## Array Pointers (V. imp)
- arr,&arr,&arr[0] all are same and contain address of first memory block of array
- sizeof(arr) = size of full array (n*4 bytes)
- sizeof(&arr) = size of address of first memory block, i.e. 8 bytes
- sizeof(*arr) = size of element(int) the first memory block contains
- arr[i] = *(arr+i); // this is the internal working of array 
- **Notice this** : i[arr]=*(i+arr), YES THIS WILL WORK IT WILL NOT GIVE ERROR

## Symbol Table content cannot be changed
- arr = arr + 1 or *ptr = arr++; THIS IS WRONG, YOU ARE TRYING TO CHANGE THE SYMBOL TABLE
- p = p + 1; This is right

## Character arrays 
- cout implementation is different for char arrays.
- if you print char array name then you'll the entire array unline for integer arrays. 

## Functions and Arrays

## Why int*
- Why can't we directly write 'pointer *ptr = &val', why we have to declare datatype?
- Answer :
- Doing this tells us which type of data the pointer is pointing to.
- It also tells the compiler/user how much bytes to consider for other operations. 

## Doube pointers 
```
    int i = 5;
    int* p = &i;
    int** p1 = &p;
    int*** p2 = &p1;
    int**** p3 = &p2;
    We can go on like this
```

