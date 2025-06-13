// class are user-defined datatype, which has the data and the memeber function.
// The classes acts as the BLUEPRINT for the group of objects.
// Example:

#include<iostream>
using namespace std;

class Animal{
    public: // public is the access specifier

        Animal(){
            cout<<"constructor called"<<endl;
        };
        Animal(string n){
            cout<<"constructor called"<<endl;
        };

        ~Animal(){
            cout<<"destructor called"<<endl;
        }

        static int val;

        static void printHello(){
            cout<<"hello"<<endl;
        }
        

        string name;
        int age;
        string species;

        void eat();

        void sound();

};

int Animal::val = 15;

// Objects: Objects are instace of the Class. Objects is the real entity where class is just a concept.

void Animal::eat(){
        cout<<"Nothing"<<endl;
    }       

int main(){
    // std:: cout<<"object oriented programming" <<endl;
    Animal dog;
    dog.name = "Jacky";
    dog.age = 1;
    dog.species = "pit bull";
    dog.eat();

    cout<<dog.val<<endl;
    dog.printHello();
    

    cout<<dog.age<<endl;
}

// No memory is allocated when the classes are created. 
// Memory is allocated only when the objects of the class are instantiated.
// Objects take up memory and have references to the memory address.


