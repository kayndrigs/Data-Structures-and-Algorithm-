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
        int num,Sum;
        cout<<"Print the Sum of the first N odd int"<<endl<<"\nN: ";cin>>num;
        cout<<endl;
        for(int i=1;i<=num;i++){
            cout<<2*i-1;
            if(i!=num)cout<<" + ";
            Sum+=2*i-1;
        }
        cout<<" = "<<Sum;
        
        do{
            cout<<"\n"<<endl;
            cout<<"Try again?(y/n): ";cin>>ans;
            if(!(ans=='y'||ans=='n'))cout<<"Invalid answer. Try again!"<<endl;
        }while(!(ans=='y'||ans=='n'));
    }while(ans=='y');
}


