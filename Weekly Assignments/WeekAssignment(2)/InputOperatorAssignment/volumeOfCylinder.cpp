//Ques:- WAP For finding the Volume of cylinder by taking radius and height as input
#include<iostream>
using namespace std;
int main (){
       int r;
       cout<<"Enter radius:";
       cin>>r;
       int h;
       cout<<"enter Height: ";
       cin>>h;
       float pi = 3.1415;
       float v = pi*r*r*h;
       cout<<"VOlume of Cylinder is :"<<v;
}