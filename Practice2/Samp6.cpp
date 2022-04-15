//Desc: Name
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int N;

    cout<<"Enter # of rows"<<endl<<"\nN: ";cin>>N;cout<<endl;

    // for(int i=1;i<=N;i++){
    //     for(int j=1;j<=i;j++){cout<<j<<" ";}
    //     cout<<endl;
    // }
    // cout<<"\n"<<endl;

    for(int x=1;x<=N;x++){
        for(int a=1;a<=x;a++){
            for(int b=1;b<=a;b++){cout<<"* ";}cout<<endl;
        }cout<<endl;
    }

    // for(int a=1;a<=N;a++){
    //         for(int b=1;b<=a;b++){cout<<"* ";}cout<<endl;
    // }

    //input
    //process
    //output
    return 0;
}