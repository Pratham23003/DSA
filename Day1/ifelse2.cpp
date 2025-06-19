/* a school has following rules for grading system :
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask usre to enter marks and print the corresponding grade */

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;
    if(marks<25){
        cout<<"Grade is : F"<<endl;
    }
    else if(marks>=25 && marks<=44){
        cout<<"Grade is : E"<<endl;
    }
     else if(marks>=45 && marks<=49){
        cout<<"Grade is : D"<<endl;
    }
     else if(marks>=50 && marks<=59){
        cout<<"Grade is : c"<<endl;
    }
     else if(marks>=60 && marks<=79){
        cout<<"Grade is : B"<<endl;
    }
     else if(marks>=80 && marks<=100){
        cout<<"Grade is : A"<<endl;
    }
}