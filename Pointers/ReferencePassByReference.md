# Refernce and Pass by Reference 

Usually  (&) symbol is known as a reference operator, which means ‘Address of operator.’

This operator is used to copy the values of any variable and guarantee that the reflected changes will also be visible in the copied variable.
```
#include<iostream>
using namespace std;
int main() {
    int a = 5;
    int & b = a;
    a++;
    cout << "b = " << b << endl;
    return 0;
}
Output:
b = 6
```
Here, (&b=a) means that now variables b and a are pointing to the same address and making changes in any of them reflected in both of the variables.

This concept of referencing the variables is useful when we want to update the value passed to the function.
The syntax for pass by reference:
```
#include <iostream>
using namespace std;
void fun(int & a) {
    a++;
}
int main() {
    int a = 5;
    fun(a);
    cout << "a = " << a << endl;
}
Output:
a = 6
```