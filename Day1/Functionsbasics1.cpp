// Print name using functions (Parametrised)
//Function is a set of code which performs something for you
//Functions are used to modularise code
//Functions are used to increase readability
//Functions are used to use same code multiple times 
//Types of Functions are :- 
// 1. Void - Nothing returns
// 2. Retun
// 3. parametrised - Having some value 
// 4. non parametrised 
#include<iostream>
using namespace std;
void printname(string name){ //Parametrised
    cout<<"Hey"<<name<<endl;
}
int main(){
    string name;
    cout<<"Enter Name : ";
    cin>>name;
    printname(name); 

    string name2;
    cout<<"Enter Name2 :";
    cin>>name2;
    printname(name2);
    return 0;

}