#include<iostream>
using namespace std;
int main (){

    int t;
    cin>>t;
    while(t--){

        string str;
        cin >> str;
        int _size = str.length();
        if (_size > 10){
            cout << str[ 0 ] << (_size - 2) << str[ (_size-1) ] << endl;
        } else {
            cout << str << endl;
        }
    }

    return 0;
}