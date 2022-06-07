#include<bits/stdc++.h>
using namespace std;

// cin treats space,tab,enter as terminator. So if you enter "somanshu Sharma", then
// cin will only take "somanshu".

// null character is : '\0'
int main() {
    char name[10];
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    name[2] = '\0';
    cout<<"Size is "<<sizeof(name)<<endl;
    for(int i=0;i<sizeof(name);i++) {
        cout<<name[i]<<endl;
    }
    return 0;
}