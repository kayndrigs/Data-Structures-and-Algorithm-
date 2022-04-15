//Desc: Name
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int N,x[N],Sum=0;
    

    //input
     cout<<endl<<"\nn: ";cin>>N;cout<<"\n"<<endl;
    //process
    for(int i=0;i<N;i++){\
        cout<<"x["<<i<<"]: ";cin>>x[i];
        Sum+=x[i];
    }
    cout<<"\nsum: "<<Sum<<endl;

    //output
    return 0;
}