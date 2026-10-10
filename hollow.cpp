#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<" eneter n "<<endl;
    cin>>n;

    for(int i =0; i<=n;i++){
        for(int j = 1 ; j <= n; j++){
            if(i == 1 || i == n || j == 1|| j ==n){
                cout<<" *";

            }
            else {
                cout<< "  ";
            }
            cout<<endl;
        }
        cout<<endl;
        return 0;
    }
}