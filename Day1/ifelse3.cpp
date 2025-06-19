/*Take the age from the user and then decide accordingly
1. if age <18,
   print ->not eligible for job
2. if age >=18,
    print-> eligible for job 
3. if age >=55 and age <=57
    print->"eligible for job, but retirement soon. "
4. If age ->57
   print->"retirement time" 
*/
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter a value for age : ";
    cin>>age;
    if(age<18){
        cout<<"not eligible for job"<<endl;
    }
    else if(age>=18 && age<=54){
        cout<<"Eligible for job"<<endl;
    }
    else if(age>=55 && age<=57){
        cout<<"Eligible for job, but retirement soon"<<endl;
    }
    else {
        cout<<"Retirement time"<<endl;
    }
}
   
