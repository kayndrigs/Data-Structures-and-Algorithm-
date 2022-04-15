//Desc: Name
//By: Kayne Uriel K. Rodrigo
/*Note: 
    1. Always comment on everything
    2. Important keyshortcuts:
        - win + shift + s = snippet tool
        - win + v = clipboard of copy paste texts
    3. Decimal point and figure control
        - use iomanip
        *for adjusting the decimal places only
            - setprecision(10) 

        *for adjusting the figures (significant figures)
        cout.unsetf (ios::fixed); 
        cout<<setprecision(10)<<...
*/






#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int n;
    char ans;

    cout<<endl;
    do{
        int Sum=0;
        cout<<endl;
        do{
            //cout<<"Enter Description here"<<endl<<"\nN: ";cin>>N;cout<<"\n"<<endl;
            cout<<"Expression here: ";cin>>n;cout<<"\n"<<endl;
            //adjust expression for the range
            if((n<1)||(n>10))cout<<"\nInvalid number! Try again."<<endl;
        }while((n<1)||(n>10));
        cout<<endl;

         do{
            cout<<endl;
            cout<<"Try Again?(y/n): "; cin>>ans;
            if(!((ans=='y')||(ans=='n')||(ans=='Y')||(ans=='N'))){cout<<"Invalid Answer! Try again.\n"<<endl;}
        }while(!((ans=='y')||(ans=='n')||(ans=='Y')||(ans=='N')));
    }while((ans=='y')||(ans=='Y'));

    return 0;
}

