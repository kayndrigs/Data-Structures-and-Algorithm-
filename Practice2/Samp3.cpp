//Desc: Product1
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int N, Fact=1;

    //input
    cout<<"Print the Prod of the first N int"<<endl<<"\nN: ";
    cin>>N;cout<<endl;
    cout<<endl;
    cout<<N<<"! = ";

    //process & output
    for(int i=1;i<=N;i++){
        cout<<i;
        if(i!=N)cout<<"*";
        Fact*=i;
    }
    cout<<" = "<<Fact<<endl;
 
    return 0;
}