#include <iostream>
#include <cstring>
using namespace std;

#include "student.h"
//#define N 3
int main(int argc, char* argv[]) {
  student s1,s2;

  int N = (argc-1)/2;
 /*s1.set_name("Amy"); s1.set_age(20);
 s2.set_name("James");
 s2.set_age(17);
 s1.get_age()>s2.get_age() ? s1.print_name(): s2.print_name();
 cout<< "is older";
*/
  int argc_index = 1;
 
  student a[N];
  int i;
  for(i=0;i<N;i++){
    a[i].set_name(argv[argc_index]);
    a[i].set_age(atoi(argv[argc_index+1]));
    argc_index += 2;
  }
  // Set age and set name for the first two ppl
  /*int i,age;
  string n;
   // 1. Ask for N names and N age using cin
  for(i=0;i<N;i++){
    cout<<i+1<<") "<<"name:"; 
    cin >> n;
    a[i].set_name(n);

    
    cout<<"age: ";
    cin >> age;
    a[i].set_age(age);
  }
  */
  /*2. Print name and age of all N ppl
  cout<<"Print name and age"<<endl;
  for(i=0;i<N;i++){
    a[i].print_name();
    //cout<<"Age: "<<a[i].get_age()<<endl;
  }
  */
  //3. Print name and age of the youngest person
  
  //Find what the age of the youngest person
  int young = a[0].get_age();
  for(i=1;i<N;i++){
    if(a[i].get_age() < young) young=a[i].get_age();
  }

  cout<<"Youngest student"<<endl;
  

  for(i=0;i<N;i++){
    if(a[i].get_age() == young) {
    a[i].print_name();
    cout<<"Age: "<<young<<endl;
    }
  }
  // Print all info for the yougest person
  
  //4. Change input from cin to argv
  
 return 0;

    
}
  
  


