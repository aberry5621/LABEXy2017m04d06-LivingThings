//
//  main.cpp
//  LABEXy2017m04d06
//
//  Created by ax on 4/9/17.
//  Copyright © 2017 COMP235. All rights reserved.
//
/*
 polymorphic class Living Thing
 attribute legs
 inherited by two derived classes
 one virtual function "move"
 
 LivingThing
   |
   |- Tiger
   |
   |- Human
 
 Derived class constructors call base class constructor to set value of legs (humans 2, tigers 4)
 use initializer for base class constructor
 
 Override move function because tigers and humans move differently
 
 Show difference in static and dynamic bindings by fully implementing all classes
 
 */

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class LivingThing
{
public:
    LivingThing() {}
    LivingThing(int p) { legs = p; }
    int legs;
    virtual void move() { cout << "Some living thing is moving!\n"; };
};

class Monkey : public LivingThing
{
public:
    //TO DO: declare a no-arg constructor, it should call the base class
    //	constructor using the initializer 2 for number of legs
    Monkey() : LivingThing(2) {}
    //TO DO: Override the 'move' function to display "Monkey is scampering!"
    
};

class Human : public LivingThing
{
public:
    //TO DO: declare a no-arg constructor, it should call the base class
    //	constructor using the initializer 2 for number of legs
    Human() : LivingThing(2) {}
    
    //TO DO: Override the 'move' function to display "Human is walking!"
    
};

class Tiger : public LivingThing
{
public:
    //TO DO: declare a no-arg constructor, it should call the base class
    //	constructor using the initializer 4 for number of legs
    Tiger() : LivingThing(4) {}
    
    //TO DO: Override the 'move' function to display "Tiger is prowling!"
    
};

class Centipede : public LivingThing
{
public:
    //TO DO: declare a no-arg constructor, it should call the base class
    //	constructor using the initializer 4 for number of legs
    Centipede() : LivingThing(100) {}
    
    //TO DO: Override the 'move' function to display "The centipede is crawling!"
    
};

int main() {
    // insert code here...
    std::cout << "Living Things!\n";
    
    srand(static_cast<int>(time(0))); // randome seed
    
    cout << "Part I. Static Bindings\n";
    cout << "=======================\n";
    //Declare an array of LivingThing base type, of size 4
    int const ARR_SIZE = 4;
    
    LivingThing creatures [ARR_SIZE];
    //Randomly populate the array with a mix of humans and tigers,
    //simply use 4 assignment statements
    
    creatures[0] = Monkey();
    creatures[1] = Tiger();
    creatures[2] = Human();
    creatures[3] = Centipede();
    
    //Use a loop, call the "move" virtual function from the base class
    for (int i = 0; i < ARR_SIZE; i++) {
        cout << "Creature number "
        << i + 1 << " has "
        << creatures[i].legs << " legs!" << endl;
    }
    
    cout << "Part II. Dynamic Bindings\n";
    cout << "=========================\n";
    //Declare an array of pointers of LivingThing base type, of size 4
    
    //Randomly populate the array with a mix of pointers to humans and tigers
    
    //Use a loop, call the "move" function with each LivingThing object in the
    
    //	array
    
    return 0;
}

