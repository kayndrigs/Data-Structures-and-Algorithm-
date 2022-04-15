//Desc: Odd Sum
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int N, Sum=0;

    //input
    cout<<"Print the Sum of the first N odd int"<< endl << endl <<"N: ";
    cin>>N; cout<<endl;
    //process
    for(int i=1;i<=N;i++){
        cout<<i*2-1;
        if(i!=N)cout<<"+";
        Sum+=i*2-1;
    }
    cout<<"="<<Sum<<endl;
    //output
    return 0;
}