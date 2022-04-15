//Desc: Name
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    char ans;
    char day;
    string DWork;

     do{
        cout<<endl;
        do{
            cout<<"Choose 1 day for consultation(MTWHF): ";
            cin>>day;
        }while(!((day=='M')||(day=='T')||(day=='W')||(day=='H')||(day=='F')));
        cout<<"\n"<<endl;

        switch(day){
            case 'M':DWork="Monday";break;
            case 'T':DWork="Tuesday";break;
            case 'W':DWork="Wednesday";break;
            case 'H':DWork="Thursday";break;
            case 'F':DWork="Friday";break;
        }

        cout<<"See you on "<<DWork<<" for consultation\n";

     cout<<endl;
        do{
            cout<<"Try Again?(y/n)"; cin>>ans;
            if(!((ans=='y')||(ans=='n'))){cout<<"Invalid Answer! Try again.\n"<<endl;}
        }while(!((ans=='y')||(ans=='n')));
    }while(ans=='y');
        //output
    return 0;
}