//Desc: Name
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    char ans;
    cout<<endl;

    do{
    int N, a=1, b=1, Fib, Fib1;
    do{
        cout<<endl;
        cout<<"nth fibonacci number"<<endl<<"\nn(1..20): ";
        cin>>N;cout<<endl;
        if((N>20)||(N<1)){cout<<"\nInvalid Number! Try again.\n"<<endl;}
    }while((N>20)||(N<1));

    

    if(N==1){cout<<a<<" is the "<<N<<"st fibonacci";}
    else if(N==2){cout<<b<<" is the "<<N<<"nd fibonacci";}
    else if(N==3){cout<<a+b<<" is the "<<N<<"rd fibonacci";}
    else if(N>=4){
        for(int x=3;x<=N;x++){
            if(N>=1)
            if(N>=2)
            if(N>=3)
            Fib=a+b;
            a=b;
            b=Fib;
        }
        cout<<Fib<<" is the "<<N<<"th fibonacci";
    }
    cout<<"\n"<<endl;
        do{
            cout<<"Try Again?(y/n) "; cin>>ans;
            if(!((ans=='y')||(ans=='n'))){cout<<"\nInvalid Answer! Try again.\n"<<endl;}
        }while(!((ans=='y')||(ans=='n')));
    }while(ans=='y');
    return 0;
}