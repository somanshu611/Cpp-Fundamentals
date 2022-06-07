```
syntax:
int n;cin>>n;
int arr[n];
```
Here, the size of the array is decided at runtime. The size should be know at compile time for **static memory allocation**, like this : int arr[10000]. 


- As a program starts, both stack and heap memory are activated. If at compile time, the size of the array is known, then enough stack memory could be alloted to the program, but if not, then at the time of program execution the program(at runtime) might crash because of less stack memory for array i.e. 'n' might be too large for stack memory. 

- One solution to this problem is to declare memory in heap using 'new' operator. However, if you don't want to use heap memory and want to declare array in that fashion then it is advisable to not give variable size to the array. 