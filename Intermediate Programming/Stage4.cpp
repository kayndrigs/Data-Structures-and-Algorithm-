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
        int num,Prod=1;
        cout<<"Print the Prod of the first N int"<<endl<<"\nN: ";cin>>num;
        cout<<endl;
        cout<<"Fact("<<num<<") = Prod(";
        for(int i=1;i<=num;i++){
            cout<<i;
            if(i!=num)cout<<",";
            Prod*=i;
        }
        cout<<") = "<<Prod;
        
        do{
            cout<<"\n"<<endl;
            cout<<"Try again?(y/n): ";cin>>ans;
            if(!(ans=='y'||ans=='n'))cout<<"Invalid answer. Try again!"<<endl;
        }while(!(ans=='y'||ans=='n'));
    }while(ans=='y');
}


