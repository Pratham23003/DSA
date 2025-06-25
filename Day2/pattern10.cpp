#include<iostream>
using namespace std;

void printpattern10(int n){
 for(int i=0;i<n;i++){
   for(int j=0;j<=i;j++){
    cout<<"*";
   }
   cout<<endl;
   }
}
void printpattern11(int n){
 for(int i=0;i<=n;i++){
   for(int j=0;j<n-i+1;j++){
    cout<<"*";
   }
   cout<<endl;
   }
}

int main(){
    int n;
    cout<<"Enter a value for n:";
    cin>>n;
    printpattern10(n);
    printpattern11(n);
}