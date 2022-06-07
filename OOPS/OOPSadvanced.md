### 4 pillas of OOPS : 
    1. Encapsulation


# Encapsulation : 
- **Information Hiding/Data Hiding**
- Wrapping up data members and functions. The single entity formed is what we call as encapsulation being achieved. 
- A fully encapsulated class consists of all private data members, thus all the mebers will only be accessible inside the class and not outside. 
- ###  Why ? 
  -  For data hiding, which will increase security.  
  -  Through this, If want we can mark our class as READ ONLY(without setters ). 
  -  Code reusability (*This point will be used for every OOPS pillar*)
  -  Helps in Unit Testing i.e. makes it more manageable. 

# Inheritance : 
- https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382199
- The Table down the page is really imp.
- Parent Class/ Super Class/ Base Class
- Child Class/ Sub Class
- **Private data members of any class can never be inherited** 
- any protected data member can be accessed within class and only by it's derived/child class. 
- **Modes of Inheritance:** *I don't understand the table part, various combinations of public, private, protected, so please understand this again later,i'm skiping for now.*
  - Public
  - private
  - protected
- ## Types of Inheritance: 
    1. Single 
    2. Multiple
    3. MultiLevel
    4. Heirarchical
        - One class serves as parent class for more than one class. Image a Tree, that's heirarchical inheritance.
    5. Hybrid 
        - Combination of more than one type of inheritance.
- ## Inheritance ambiguity
  - Resolved using scope resolution operator.
  - **Love Babbar talked about OOPS in industry here in the video while covering this topic, He will teach it, but do check whatever he was saying on google**
  


# Polymorphism:
  - allows you to perform a single action in different ways.
  - Poly means many, morph means form. So polymorphism means many forms.
  - Real-life example:  A person at the same time can have different characteristics. Like a man at the same time is a father, a husband, and an employee. So the same person possesses different behavior in different situations. This is called polymorphism.
  1. ## Compile Time/ Static Polymorphism:
    - Achieved through function overloading or operator overloading.
    - 
    1. **Function Overloading** 
        - Function with same name but with different return type cannot be overloaded. 
        - Increases readability of the program
        - Same name but different parameters, either different number of parameters or different data types of paramters, or both..
        - **Default Arguments**: A default argument is a value provided in a function declaration automatically assigned by the compiler if the function’s caller doesn’t provide a value for the argument with a default value. However, if arguments are passed while calling the function, the default arguments are ignored.
    2. **Operator Overloading**
    - It can be used only for user-defined operators(objects, structures) but cannot be used for in-built operators(int, char, float, etc.). At least one of the operand must be user-defined.
    - Operators = and & are already overloaded in C++, so we can avoid overloading them
    - Precedence and associativity of operators remain intact.
    - 
  2. ## Run Time/ Dynamic Polymorphism:
    - **Function Overriding**
   


