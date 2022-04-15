//Desc: Fibonnacci
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int n,a=1,b=1,Fib;

    cout<<"First n fibbonacci #"<<endl<<"\nN: ";cin>>n;cout<<endl;

    if(n>=1){cout<<a<<" ";}
    if(n>=2){cout<<b<<" ";}

    for(int i=3;i<=n;i++){
        Fib=a+b;
        cout<<Fib<<" ";
        a=b;
        b=Fib;
    }

        return 0;
    }