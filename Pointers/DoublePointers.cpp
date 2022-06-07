#include<bits/stdc++.h>
using namespace std;

void update(int **p) {
    // p = p+1;
    // kuch change hoga? - NO
    // *p = *p+1;
    // kuch change hoga? - YES 
    **p = **p+1;
    // kuch change hoga? - YES  
}
int main() {

    // Double pointers 
    int i = 5;
    int* p = &i;
    int** p1 = &p;
    int*** p2 = &p1;
    int**** p3 = &p2;
    // // We can go on like this

    // cout<<"printing p "<<p<<endl;
    // cout<<"printing *p1 "<<*p1<<endl; // both will be same
    // // p will contain address of i, and *p1 will refer to content of p which is address of i

    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p1<<endl;

    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p1<<endl;

    // cout<<&p<<endl;
    // cout<<p1<<endl;
    // cout<<*p2<<endl;

    cout<<"before i = "<<i<<endl;
    cout<<"before p = "<<p<<endl;
    cout<<"Before p1 = "<<p1<<endl;
    update(p1);
    cout<<"After i = "<<i<<endl;
    cout<<"After p = "<<p<<endl;
    cout<<"After p1 = "<<p1<<endl;


    return 0;
}