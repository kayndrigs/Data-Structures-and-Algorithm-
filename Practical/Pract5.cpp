//Desc: Name
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    for(int Big=65, Small=97; Big<=90 ; Big++, Small++){
        cout<<(char)(Big)<<(char)(Small)<<" ";
    }
    cout<<endl;
    for(int i=65;i<=90;i++){
        cout<<(char)(i)<<(char)(i+32)<<" ";
    }
   

    return 0;
}