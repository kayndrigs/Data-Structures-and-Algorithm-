/* 

Name: Rodrigo, Kayne Uriel K. 
Block & Year: BSCS 1-1
Fibonnacci Sequence

*/
#include <iostream>
using namespace std;

void binary(int n){
    string bs="";
    while(n!=0){
        if(n%2==0)bs="0"+bs;
        else bs="1"+bs;
        n/=2;
    }cout<<bs;
}

int main(void){
    char ans;
    do{
        int n;
        do{
            cout<<"First n binary numbers\n"<<endl<<"n(1..100) ";cin>>n;
            if(n<1||n>100)cout<<"\nInvalid input. Try again!\n\n";
        }while((n<1||n>100));
        cout<<endl;

        for(int i=1;i<=n;i++){
            binary(i);
            cout<<" ";
        }

        do{
            cout<<"\n"<<endl;
            cout<<"Try again?(y/n): ";cin>>ans;
            if(!(ans=='y'||ans=='n'))cout<<"Invalid answer. Try again!"<<endl;
        }while(!(ans=='y'||ans=='n'));
    }while(ans=='y');
}


