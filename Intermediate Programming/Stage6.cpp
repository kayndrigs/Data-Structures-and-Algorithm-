/* 

Name: Rodrigo, Kayne Uriel K. 
Block & Year: BSCS 1-1
Triangles

*/

#include <iostream>
using namespace std;

int main(void){
    char ans;
    do{
        int row;cout<<"Enter # of rows: ";cin>>row;
        cout<<endl;

        for(int ctr=1;ctr<=row;ctr++){
            for(int i=1;i<=ctr;i++){
                cout<<" ";
                for(int j=1;j<=i;j++){
                    cout<<"*"<<" ";
                }cout<<endl;
            }cout<<endl;
        }


        do{
            cout<<"\n"<<endl;
            cout<<"Try again?(y/n): ";cin>>ans;
            if(!(ans=='y'||ans=='n'))cout<<"Invalid answer. Try again!"<<endl;
        }while(!(ans=='y'||ans=='n'));
    }while(ans=='y');
}


