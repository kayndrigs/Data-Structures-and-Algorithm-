//Desc: Prime Number calculator
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int N, PrimCtr=0;

    cout<<"First N Primes"<<endl<<"\nN: ";cin>>N;cout<<endl;

    for(int x=2;PrimCtr<N;x++){
        bool tvalue=true;
        for(int j=2;j<x;j++){
            if(x%j==0){
                tvalue=false;
                break;
            }
        }if(tvalue){
            PrimCtr++;cout<<x<<" ";
        }
    }

        return 0;
    }