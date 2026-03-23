#include <iostream>
using namespace std;

class student{
private:

  string name;
  int age;

public:
  
   void set_name(string="Yme");
   void print_name();
   void set_age(int);
   int get_age();

   //1.set_age --> set ค่า age
   //2.get_age --> return age

};

void student::set_age(int a){
  age=a;
}

int student::get_age(){
  return age;
}

void student::set_name(string n){
  name=n;
}

void student::print_name(){
  cout<<"Name: "<<name<<endl;
}

