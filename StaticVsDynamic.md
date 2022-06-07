# Static Memory Allocation
- When you use stack memory, you call that static memory allocation.
# Dynamic Memory Allocation 
- Heap memory allocation is called dynamic memory allocation 
- use 'new' keyword for dynamic memory allocation which allocates memory in heap.
```
Syntax : 
char *c = new char;
```
- **Imp** new keyword returns address of memory allocated and name cannot be given to it like we do in static memory allocation(char x = 'a'), you can only use a pointer to use that memory. 
- Also, the pointer that we'll use to store that address will be in stack memory. 
- So, in the above example of declaring a pointer we have allocated 9 bytes of memory, 8 bytes for pointer and 1 byte for char. 

- **IMP** delete keyword is used for freeing heap memory and should always be used whenver done with the variable. 
```
Syntax for delete keyword :
// for arrays 
delete [] arr
// for other data types read documentation online
```

# Static Vs Dynamic Memory Allocation
- In static allocation memory is freed automatically, however, in dynamic we have to manually free memroy. 


# HOMEWORK : Create jaggered array dynamically