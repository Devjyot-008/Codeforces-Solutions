#include <iostream>
using namespace std ;
int main (){

 string str ;
 int upper_case = 0 ;
 int lower_case = 0 ;
 cin >> str ;

for (int i=0; i < str.length(); i++){
    if (str[i]>='A' && str[i]<='Z'){
        upper_case++ ;
    } else {
        lower_case++ ;
    }
}
if (upper_case > lower_case){
    for (int i=0; i < str.length(); i++){
        str[i] = toupper(str[i]);
    }
    cout << str ;
} else if (upper_case < lower_case){
    for (int i=0; i < str.length(); i++){
        str[i] = tolower(str[i]);
    }
    cout << str ;
} else if (upper_case == lower_case){
    for (int i=0; i < str.length(); i++){
        str[i] = tolower(str[i]);
    }
    cout << str ;
}


    return 0 ;
}