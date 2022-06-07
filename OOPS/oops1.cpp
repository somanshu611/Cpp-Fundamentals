#include<iostream>
#include "Hero.cpp"
using namespace std;

int main() {
    /*
    // creation of object, static allocation
    Hero ram;

    ram.setHealth(70); // using setter
    cout<<ram.getHealth()<<endl; // dot operator for accessing data members
    // cout<<ram.level<<endl; // will print garbage value if values not initialised
    // cout<<rom.getLevel()<<endl;
    cout<<sizeof(ram)<<endl;

    // dynamic allocation 
    Hero *h = new Hero();
    cout<<h->getHealth()<<endl;
    cout<<(*h).getLevel()<<endl;// dereference operator or use pointer
    */

    /*
    Hero ramesh; // object created statically
    Hero *h = new Hero;
    Hero *n = new Hero(); // bracket or without bracket, it's the same thing

    // understand this keyword 
    Hero suresh(10);
    // cout<<"Address of suresh = "<<&suresh<<endl;

    Hero temp(70,'B'); 
    temp.print();
    */

    // Copy constructor : 
    // Hero S(70,'D');
    // S.print();
    // Hero R(S); // Default copy constructor called
    // R.print();

    // Shallow and Deep copy : 
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[9]="Somanshu";
    hero1.setName(name);
    // hero1.print();

    
    // Understaing shallow copy using default copy constructor
    // comment the copy constructor implement to understand the below code.
    Hero hero2(hero1);
    // Hero hero2 = hero1; // You can do this too, here too copy constructor will be called.
    // hero2.print();

    hero1.name[0]='D'; 
    hero1.print();
    hero2.print();
    
    // copy assignment operator
    hero1 = hero2;
    hero1.print();
    hero2.print();

    // manually calling destructor for dynamically allocated object
    Hero *hero3 = new Hero();
    delete(hero3);


    // accessing static member using scope resolution operator
    // cout<< Hero::timeToComplete<<endl;

    // static functions
    cout<<Hero::random()<<endl;


    return 0;
}