#include<iostream>
#include<algorithm>
using namespace std;
int main (){

    string str_1;
    string str_2;
    cin >> str_1;
    cin >> str_2;

    reverse(str_1.begin(), str_1.end());

    if(str_1 == str_2){
        cout<<"YES";
    } else {
        cout<<"NO";
    }



    return 0;
}