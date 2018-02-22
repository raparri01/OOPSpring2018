#include "person.h"

using namespace std;
Person::Person():name("No Name"),age(0){
}
Person::Person(string initName, int initAge){
  name = initName;
  age = initAge;
}

void Person::printName(){
  cout << "This is " << name << endl;
}

void Person::printAge(){
  coutt << age << endl;
}
