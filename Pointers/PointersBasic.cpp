#include<bits/stdc++.h>
using namespace std;

int main() {
    // int *p = 0;
    // // cout<<*p<<endl;

    // int i = 5;
    // int *q = &i;
    // p = q;
    // cout<<p<<endl;
    // cout<<q<<endl;
    // cout<<sizeof(p)<<endl;

    // // Pointer arithmetic 
    // p++;
    // cout<<p<<endl;

    // // Address of Array
    // int arr[3] = {2,3,4};
    // cout<<"Address of first memory block is "<<arr<<endl;
    // cout<<"Address of first memory block is "<<&arr<<endl; // both are same 

    // cout<<*(arr+1)<<endl; // prints the second element in array
    // cout<<*(arr+2)<<endl; // prints the third element in array 

    // arr[i] = *(arr+i)
    // int i = 1;
    // cout<<i[arr]<<endl;

    // int arr[5] = {1,2,3,4,5};
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(*arr)<<endl;
    // cout<<sizeof(&arr)<<endl;

    // int *p = arr;
    // // cout<<(*p)<<endl;

    // p = &arr[0];
    // cout<<sizeof(*p)<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(&p)<<endl;

    // int b[5];
    // // b = b+1; // ERROR
    // int *p = &b[0];
    // cout<<p<<endl;
    // p = p+1;// this will work because pointer doesn't belong to symbol talbe
    // cout<<p<<endl; 

    // CHAR ARRAYS 
    // int a[5];
    // // char ch[3] = "abc"; // not allowed
    // char ch[3] = "ab";
    // cout<<a<<endl;
    // cout<<ch<<endl; 

    // char *c = &ch[0];
    // // prints entire string not address of first block
    // cout<<c<<endl;

    // char str[]="babbar";
    // char *p = str;
    // cout<<str[0]<<" "<<p[0]<<endl; // both will print 'b'

    // char temp = 'z';
    // char *p = &temp; // prints weird characters
    // cout<<p<<endl;

    // char ch[6]="abcde";
    // char *c = "abcde"; // ISO C++ forbids this, eventho this will work. This is bad practise and
    // // very risky. 
    // cout<<ch<<endl; 
    // cout<<c<<endl;

    return 0;
}