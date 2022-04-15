//Desc: Name
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int N, Sum=0;

    cout<<"Print the sum of first N counting num"<<endl<<"\nN: ";
    cin>>N;cout<<endl;

    for(int i=1;i<=N;i++){
        cout<<i;
        if(i!=N)cout<<"+";
        Sum+=i;
    }

    //input
    //process
    //output
    return 0;
}