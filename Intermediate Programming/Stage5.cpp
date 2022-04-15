/* 

Name: Rodrigo, Kayne Uriel K. 
Block & Year: BSCS 1-1
Alphabet letters

*/

#include <iostream>
using namespace std;

int main(void){
    char ans;
    do{
        for(int i=65;i<=90;i++){
            cout<<(char)(i);
        }cout<<endl;

        for(int i=97;i<=122;i++){
            cout<<(char)(i);
        }cout<<endl;

        for(int i=65;i<=90;i++){
            cout<<(char)(i)<<(char)(i+32)<<" ";
        }cout<<endl;

        for(int i=65, y=97;i<=90;i++,y++){
            cout<<(char)(i)<<(char)(y)<<" ";
        }cout<<endl;


        do{
            cout<<"\n"<<endl;
            cout<<"Try again?(y/n): ";cin>>ans;
            if(!(ans=='y'||ans=='n'))cout<<"Invalid answer. Try again!"<<endl;
        }while(!(ans=='y'||ans=='n'));
    }while(ans=='y');
}


