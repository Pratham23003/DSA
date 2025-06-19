//Function using pass by reference
#include<iostream>
using namespace std;
void dosomething(int &n){
    n+= 5;
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}
int main(){
  int n;
  cout<<"Enter a value for n : ";
  cin>>n;
  dosomething(n);
  cout<<n<<endl;

}