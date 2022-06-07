#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;cin>>n>>m; // n->rows,m->columns

    // Memory allocation for 2d array
    int** arr = new int*[n]; // array of pointers int*
    for(int i=0;i<n;i++) { // 
        arr[i] = new int[m];
    }
    // taking input
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cin>>arr[i][j];
    }

    // output
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    // releasing memory 
    for(int i=0;i<n;i++) {
        delete [] arr[i];
    }
    delete [] arr; // syntax for deleting array
    return 0;
}