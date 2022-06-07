- Object is an instance of class.
- Class is a blueprint and object is a real life entity.

- For an empty class, size of 1 byte of memory is given. 

- If you don't initialize data members with any value then they will have garbage value.

## Dot operator 
- For accessing data members.

## Access modifiers 
1. Public
   - By writing "public:" above any data members will declare them public.
2. Private 
   - By default, every data member has private access modifier.
   - Private members can only be accessed inside class.
3. Protected

## Getters/Setters
- Private members should be accessed and manipulated through getters and setters.
- Through setters we can also give conditions to who can access a data member.

## Padding
## Greedy Alignment 

# Home work
- Why the memory is 12 bytes of Hero ram object, when the data members are of int(4)X2 + char(1) = 9 ? Padding and Greedy Alignment.
- What is const keyword and what is its role in object creation. How it can be used in data members. How you can make functions const.
- what is initalisation list

## Static vs Dynmaic Allocation
- In dynamic allocation, a memory is acquired for object in heap memory.

## this keyword
- This is a pointer to the current object and thus stores the address of curent object i.e. the address of object you've just created.

## Constructor(parametrized,default)
- Constructor is called only once, when the object is created.
- Whenver you write custom implementation of any constructor, then the default one no longer exits, and it's your duty to create one default constructor.

## Copy Constructor
- When a class is made, an inbuilt copy constructor is also generated, which does shallow copy.
- When you implement your own copy constructor then **Pass by reference** is very imp, if you pass by value, then copy constructor will be called again, and this will create a infinite loop situation. Also, after implementing your own copy constructor, the inbuilt one will no longer exist. If you want to the functioning of inbuilt copy constructor, then either declar your own which works exactly like inbuild copy constructor or delete your implement copy constructor which might not be working like inbuilt one i.e. it might be using deep copy unlike shallow copy in inbuilt case.

## Shallow and Deep copy


## Copy assignment operator

## Destructor
- For memory deallocation.
- Same as class name.
- no return type
- no i/p parameters
- **For objects statically created, destructor is automatically called, and for dynamically allocated objects, we have to manually call destructor** 
- Called only once, when object is destructed/deleted.
- When you implement your own destructor, then the inbuilt one will no longer exist.

## static keyword 
- a static data member belongs to class only **and does not belong to object** that's why it's recommended to not use/call static member with the use of object, use class instead. In order to access such member you don't need to create object.
- Static data member must be initialised outside class. 
    > ```Datatype className::fieldname = value;```
- **Static Functions** : 
  - Can be called through class without objects.
  - 'this' keyword in not present for such functions, because this is a pointer to current object. 
  - Can access only static members, and other members are inaccessible because they requires access to be done my objects. 

## Scope resolution operator