// pattern 5
// *****
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
void printpattern5(int n){
   for(int i=1;i<=n;i++){
    for(int j=0;j<n-i+1;j++){
        cout<<'*';
    }
    cout<<endl;
   }
    }

int main(){
    int n;
    cout<<"Enter a value for n : ";
    cin>>n;
    printpattern5(n);
}