#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the  array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements of the array"<<endl;
     for(int i =0; i<=n-1;i++){
        
        cin>>arr[i];
    //    cout<<"elements are "<<i<<endl;

     }
     int min = arr[0];

    for(int i = 0; i<=n;i++){
        if(arr[i]< min){
            min = arr[i];
        }
    } 
 cout<<"Minimum Value is "<< min<<endl;
}