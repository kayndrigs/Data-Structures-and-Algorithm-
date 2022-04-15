/* 

Basic I/O template


*/

#include <iostream>
using namespace std;

int main(void){
    char ans;
    do{
        int x, y,a;
        x>0;
        x<0;
        x>=0;
        x%2==0;
        x%2==1;
        x<=5;
        x<=1;
        x%3==0;
        x%5==0;
        y%x==0;
        1<x&&x>5;
        1<=x&&x>=5;
        !(x%2==0);
        !(x%2==1);
        !(x%3==0);
        ((x%2==0)||(x%3==0));
        ((x<=y)||(x<0));
        (x>=0&&x%2==0);
        (x%2==1&&x%a==0);


        do{
            cout<<"Try again?(y/n): ";cin>>ans;
            if(!(ans=='y'||ans=='n'))cout<<"Invalid answer. Try again!"<<endl;
        }while(!(ans=='y'||ans=='n'));
    }while(ans=='y');
}


