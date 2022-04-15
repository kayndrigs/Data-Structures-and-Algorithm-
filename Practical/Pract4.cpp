//Desc: Name
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int N, Prod=1;

    //input
    cout<<"Print the Prod of the first N int"<< endl << endl <<"N: ";
    cin>>N; cout<<endl;
    cout<<"Fact("<<N<<") = (";
    //process
    for(int i=1;i<=N;i++){
        cout<<i;
        if(i!=N)cout<<",";
        Prod*=i;
    }
    cout<<") = "<<Prod<<endl;
    //output
    return 0;
}