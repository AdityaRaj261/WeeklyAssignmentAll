#include<iostream>
using namespace std;
int main (){
       int x;
       cout<<"Enter first number\n";
       cin>>x; // user will give ' x ' a value
       int y , m;
       cout<<"Enter second number and value for taking modulus\n";
       cin>>y>>m;
       int Z = (x * y) %  m;
       cout<< "Ouput is : " << Z; 


}