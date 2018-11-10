#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
int a;

L1.insert(1,1);
L1.insert(5,2);
L1.insert(9,3);
L1.insert(199,4);
L1.remove(2);
cout<<L1.get(2)<<endl;
L1.clear();


cout<<"We have a singly-linked list consisting of '1,5,9' in that order. Please enter which element you'd like to view."<<endl;
cin>>a;
L2.insert(1,1);
L2.insert(5,2);
L2.insert(9,3);
cout<<"Your element location holds "<<L2.get(a)<<endl;

}
