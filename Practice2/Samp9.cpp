//Desc: Triangle2
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    char ans;

    cout<<endl;
    do{
    int N;
    char ans;
        do{
            cout<<"Triangle Size(1-10): ";cin>>N;cout<<endl;
            if((N>10)||(N<1)){cout<<"Invalid Number! Try again.\n"<<endl;}
        }while((N>10)||(N<1));

        for(int i=1;i<=N;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }cout<<endl;
        }
        cout<<endl;
        do{
            cout<<"Try Again?(y/n)"; cin>>ans;
            if(!((ans=='y')||(ans=='n'))){cout<<"Invalid Answer! Try again.\n"<<endl;}
        }while(!((ans=='y')||(ans=='n')));
    }while(ans=='y');

    //input
    //process
    //output
    return 0;
}