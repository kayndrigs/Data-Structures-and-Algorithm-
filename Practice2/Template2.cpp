//Desc: Name
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int N;
    char ans;

    //input
    cout<<endl;
    do{
        cout<<endl;
        cout<<"Enter Description here"<<endl<<"\nN: ";cin>>N;cout<<"\n"<<endl;
    //process

    //output
        do{
            cout<<endl;
            cout<<"Try Again?(y/n): "; cin>>ans;
            if(!((ans=='y')||(ans=='n')||(ans=='Y')||(ans=='N'))){cout<<"Invalid Answer! Try again.\n"<<endl;}
        }while(!((ans=='y')||(ans=='n')||(ans=='Y')||(ans=='N')));
    }while((ans=='y')||(ans=='Y'));

    return 0;
}