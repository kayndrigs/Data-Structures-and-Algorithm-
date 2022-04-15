/* 

Name: Rodrigo, Kayne Uriel K. 
Block & Year: BSCS 1-1
Fibonnacci Sequence

*/

#include <iostream>
using namespace std;

int main(void){
    char ans;
    do{
        int num;

        cout<<endl;
        cout<<"First fibonnacci #"<<endl<<"\nN: ";cin>>num;
        cout<<"\n"<<endl;

        int a=1, b=1, f;

        // if(num==1)cout<<a;
        // if(num==2)cout<<b;
        // if(num>=3){
        //     cout<<a<<" "<<b<<" ";
        //     for(int i=3;i<=num;i++){
        //         f=a+b;
        //         cout<<f<<" ";
        //         a=b;
        //         b=f;
        //     }
        // }cout<<endl;

        
        if(num>=1)cout<<a<<" ";
        if (num>=2)cout<<b<<" ";
        if(num>=3){
            for(int i=3;i<=num;i++){
                f=a+b;
                cout<<f<<" ";
                a=b;
                b=f;
            }
        }



        //for(int i=0)


        do{
            cout<<"\n"<<endl;
            cout<<"Try again?(y/n): ";cin>>ans;
            if(!(ans=='y'||ans=='n'))cout<<"Invalid answer. Try again!"<<endl;
        }while(!(ans=='y'||ans=='n'));
    }while(ans=='y');
}


