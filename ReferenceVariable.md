## Refernce Variable
- Same memory different names. 
- Reference variable refers a different variable name that refers to the same memory address.

```
Syntax : 
int i = 5;
int &j = i;
// i and j both refer to same memory address which contains 5
```

- **IMP** : As we can input refernce variable in function paramters, we can return it too. *However, it's a bad practise to do so, because the scope of the variable that you'll create inside a function will only be limited to that function, and as the function will return the reference variable the scope of the variable would be finished, and thus it won't be accessible. So, this is a bad practise and you should always it.* 
- The same goes for pointers. 
```
int& update(int n) {
    int &ans = n;
    return ans;
}
```