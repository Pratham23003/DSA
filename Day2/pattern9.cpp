// pattern 9{
    //         *
//        ***
//       *****
//      *******
//     *********
//      *******
//       *****
//        ***
//         *
// }
#include<iostream>
using namespace std;
void printpattern7(int n){
 //space
 for(int i =0;i<n;i++){
  for(int j=0;j<i;j++)
  cout<<" ";
   //star
  for(int j=0;j<2*n-(2*i+1);j++){
    cout<<"*";
  }
   //space
   for(int j=0;j<i;j++){
    cout<<" ";
   }
  cout<<endl;
  }
}
void printpattern8(int n){
  for(int i=0;i<n;i++){
   //space
  for(int j=0;j<n-i-1;j++){
  cout<<" ";}
   //star
  for(int j=0;j<2*i+1;j++){
    cout<<"*";
  }
   //space
   for(int j=0;j<n-i-1;j++){
    cout<<" ";
   }
  cout<<endl;
  }
}
  

int main (){
  int n;
  cout<<"Enter a value for n ";
  cin>>n;
   printpattern8(n);
   printpattern7(n);
  }