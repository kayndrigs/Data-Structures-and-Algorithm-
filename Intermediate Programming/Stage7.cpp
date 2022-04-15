/* 

Name: Rodrigo, Kayne Uriel K. 
Block & Year: BSCS 1-1
Factorial 1

*/

#include <iostream>
using namespace std;

int main(void){
    char ans;
    do{
        int num, prim=0;
        bool isPrime;

        cout<<"Print the Prod of the first N int"<<endl<<"\nN: ";cin>>num;
        cout<<endl;

        for(int i=2;prim<num;i++){
            isPrime=true;
            for(int j=0;j<i;j++){
                if(i%2==0){
                    isPrime=false;
                    break;
                }
            }if(isPrime){
                prim++;
                cout<<i<<" ";
            }
        }
        do{
            cout<<"\n"<<endl;
            cout<<"Try again?(y/n): ";cin>>ans;
            if(!(ans=='y'||ans=='n'))cout<<"Invalid answer. Try again!"<<endl;
        }while(!(ans=='y'||ans=='n'));
    }while(ans=='y');
}


