#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the size"<<endl;
    cin>>n;

    int arr[n];
    for(int i = 0; i <n; i++){
         cin>>arr[i];
    }

    int leader = [0];


    for(int i = 0; i < n; i++){
        if(leader >= arr[i] )
        {
            cout<<arr[i];
        }
    }
}