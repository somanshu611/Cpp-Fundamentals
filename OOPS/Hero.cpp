#include<bits/stdc++.h>
using namespace std;
class Hero {
    // Properties/Data members
    public: 
    // char name[100];
    int health;
    char level; // these are all private members if public not mentioned.
    char* name;
    static int timeToComplete;

    public: 
    int age;

    Hero() { // default constructor( maybe we've overriden it) 
        cout<<"Simple Constructor called"<<endl;
        name = new char[100];
    }
    Hero(int health) {
        cout<<this<<endl;
        this->health = health;// 
    }
    Hero(int health,char level) {
        this->level = level;
        this->health = health;
    }
    // copy constructor
    Hero(Hero& temp) { // pass by reference is v.imp here
        cout<<"Copy constructor called"<<endl;
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;         
        this->health = temp.health;
        this->level = temp.level;
    }

    void print() {
        cout<<"[ Health="<<this->health;
        cout<<", Level="<<this->level; // private variables can be accessed inside class.
        cout<<", Name="<<this->name<<" ]"<<endl;
    }
    // Getters/Setters methods
    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }
    void setHealth(int h) {
        health = h;
    }
    void setLevel(char l) {
        level = l;
    }
    void setName(char* name) {
        strcpy(this->name,name);
    }

    static int random() {
        return timeToComplete;
    }

    ~Hero() {
        cout<<"Destructor bhai called"<<endl;
    }
};

// initialization of static member
int Hero::timeToComplete=5;