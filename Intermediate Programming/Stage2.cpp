/* 

Name: Rodrigo, Kayne Uriel K. 
Block & Year: BSCS 1-1
Summation 1

*/

#include <iostream>
using namespace std;

int main(void){
    char ans;
    do{
        int num,Sum;
        cout<<"Print the Sum of the first N counting num"<<endl<<"\nN: ";cin>>num;
        cout<<endl;
        for(int i=1;i<=num;i++){
            cout<<i;
            if(i!=num)cout<<" + ";
            Sum+=i;
        }
        cout<<" = "<<Sum;
        
        do{
            cout<<"\n"<<endl;
            cout<<"Try again?(y/n): ";cin>>ans;
            if(!(ans=='y'||ans=='n'))cout<<"Invalid answer. Try again!"<<endl;
        }while(!(ans=='y'||ans=='n'));
    }while(ans=='y');
}


