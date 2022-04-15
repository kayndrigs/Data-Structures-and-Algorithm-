//Desc: Formatted Summation
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int N, Sum=0;

    //input
    cout<<"Print the Sum of the first N counting num"<<endl<<"\nN: ";
    cin>>N;cout<<endl;

    //process & output
    for(int i=1;i<=N;i++){
        cout<<i;
        if(i!=N)cout<<"+";
        Sum+=i;
    }
    cout<<"="<<Sum<<endl;

    return 0;
}