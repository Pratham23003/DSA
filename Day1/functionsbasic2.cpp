// Find the sum of two numbers using functions
#include<iostream>
using namespace std;
int sum(int x,int y){
    int sum;
    sum = x+y;
    cout<<"The sum is : "<<sum;
    return sum;
}
int main () {
  int x;
  cout<<"Enter a value for x : ";
  cin>>x;
  int y;
  cout<<"Enter a value for y : ";
  cin>>y;
  sum(x,y);
  
}