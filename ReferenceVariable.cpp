#include<bits/stdc++.h>
using namespace std;



int* fun(int n) {
    int* ptr = &n;
    return ptr;
}
int& update2(int n) {
    // BAD PRACTISE 
    int num = n;
    int &ans = num;
    return ans;
}
void update(int &n) {
    n++;
}
int main() {
    int i = 5;
    int &j = i; // reference variable

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;

    cout<<"Before "<<i<<endl;
    update2(i);
    cout<<"After "<<i<<endl;

    return 0;
}