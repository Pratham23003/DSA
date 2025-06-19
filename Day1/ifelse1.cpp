// Write a program which takes input of age and prints if you are adult or not
#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter a value for age:"<<endl;
cin>>x;
if(x>=18){
    cout<<"You are  an  adult !";
}
else{
    cout<<"You are not an adult !";
}
}