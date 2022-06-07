#include<bits/stdc++.h>
using namespace std;

void print(int *p) {
    cout<<p<<endl;
    cout<<*p<<endl;
}
void update(int *p) {
    // p = p+1;
    // cout<<"Inside update "<<p<<endl;

    *p = *p+1;
}
int getSum(int *arr,int n) {
    // 'int arr[]' is same as 'int *arr', that is pointer to array,however you will get warning 
    // when you'll use 'int arr[]'.
    cout<<endl;
    cout<<"Size of arr is"<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    return sum;

    // But what's the benefit of sending array as a pointer?
    // This will allow us to send a portion of array 
}
int main() {
    // CODE-1;
    // int val = 5;
    // int *p = &val;
    // cout<<"Before "<<p<<endl;
    // // print(p); // pass by value
    // update(p);
    // cout<<"After "<<p<<endl;

    // cout<<*p<<endl;
    // update(p);
    // cout<<*p<<endl;

    // CODE-2, Functions and arrays
    int arr[6] = {1,2,3,4,5,8};
    // cout<<"Sum = "<<getSum(arr,5)<<endl;
    cout<<"Sum = "<<getSum(arr+3,3)<<endl;
    


    


    return 0;
}