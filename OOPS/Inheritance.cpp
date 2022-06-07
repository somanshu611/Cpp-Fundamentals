#include<bits/stdc++.h>
using namespace std;

class Human {
    public : 
    int height;
    int weight;
    public:
    int age;

    public:
    int getAge() {
        return this->age;
    }
    void setWeight(int w) {
        this->weight = w;
    }
};

class Male: public Human {
    public:
    string color;

    this->age = 25;

    void sleep() {
        cout<<"Male sleeping"<<endl;
    }
};

class boy: public Male {
    public: 
    string tshrit;

    // this->age;
};

int main() {
    Male obj1;

    // cout<<obj1.age<<endl;
}