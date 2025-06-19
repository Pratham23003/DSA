#include<iostream>
using namespace std;

void dosomething(int arr[],int n){
    
    for(int i=0;i<=n-1;i++){
        cout<<"Enter the elements of an array :"<<endl;
        cin>>arr[i];
    }
    cout<<"Elements of array :";
     for(int i=0;i<=n-1;i++){
     cout<<arr[i]<<" ";

     }
}
int main(){
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
     int arr[n];
    dosomething(arr,n);
   
    

}