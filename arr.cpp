#include <iostream>
#include <vector>
using namespace std;

int linerSearch(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target ){
            return i;
        }/
    }
    return -1;
}

int main(){
    
    int arr[] = {3,5,74,31,2,};
    int n = 5;
    int target = 2;

    cout<<linerSearch(arr,n,target);
    return 0;
}