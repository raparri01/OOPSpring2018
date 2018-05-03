#include "person.h"

Person::Person(){
  name = "";
  age = 0;
}
Person::Person(string initName, int initAge){
  name = initName;
  age = initAge;
}

void Person::printName(){
  cout << "This is " << name << endl;
}
string Person::getName(){
    return (name);
}

void Person::printAge(){
  cout << age << endl;
}
