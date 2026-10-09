#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;

    int arr[n];

    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

     int max = arr[0];
    //  int second_largest =arr [0];

     for(int i = 0; i <n; i++){
        if(arr[i] > max)
        max = arr[i];
        
     }
     
    
     int second_largest = arr[0];

     for(int i = 0 ; i < n; i++){
        if(arr[i] < max &&  arr[i] > second_largest ){
            second_largest = arr[i];
        }
      
     }
       cout<<"second largest element is "<<second_largest;


         return 0;
}