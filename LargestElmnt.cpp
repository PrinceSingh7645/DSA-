#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;

    int arr[n];

    for(int i =1; i<=n;i++){
        cin>>arr[i];
    }

    int largest = arr[1];
    for (int i = 1 ; i <=n; i++ ){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"largest element is "<<largest<<endl;
    return 0;
}