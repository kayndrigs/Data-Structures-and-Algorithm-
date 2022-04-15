//Desc: Hello1
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    for(int i=65;i<=90;i++){
        cout<<(char)(i);
    }
    cout<<"\n"<<endl;

    for(int j=97;j<=122;j++){
        cout<<(char)(j);
    }
    cout<<"\n"<<endl;

    for(int Big=65; Big<=90; Big++){
        cout<<(char)(Big)<<(char)(Big+32)<<" ";
    }
    cout<<"\n"<<endl;

    for(int Big=65, Small=97; Big<=90; Big++, Small++){
        cout<<(char)(Big)<<(char)(Small)<<" ";
    }

    

    //input
    //process
    //output
    return 0;
}