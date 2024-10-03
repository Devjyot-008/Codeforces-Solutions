#include<iostream>
using namespace std;
int main (){

    int n;
    int count = 0;
    cin>>n;
    while(n--){
        int arr[3];
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }
        if(arr[0] + arr[1] + arr[2] >=2){
            count++;
        }
    }
    cout<<count;

    return 0;
}