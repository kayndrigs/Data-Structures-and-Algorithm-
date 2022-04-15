//combined conversion of binary, prime, & fibonnacci
#include<iostream>
using namespace std;

void binary(int n){
    string bs="";
    while(n!=0){
        if(n%2==0)bs="0"+bs;
        else bs="1"+bs;
        n/=2;
    }
    cout<<bs<<" ";
}

int main(void){
    int n,prim=0;
    cout<<"Enter an integer number "<<endl<<"\nn: ";cin>>n;cout<<endl;

    cout<<"First Binary: \n";
    for(int i=1;i<=n;i++){
        binary(i);
    }cout<<"\n"<<endl;
    
    cout<<"First Prime numbers:\n";
    for(int i=1;prim<n;i++){
        bool isPrime=true;
        for(int j=0;j<i;j++){
            if(i%2==0){
                isPrime=false;
                break;
            }
        }if(isPrime){
            prim++;
            cout<<i<<" ";
        }
    }cout<<"\n"<<endl;

    cout<<"First Fibonnaci sequence:\n";
    int a=1,b=1,f;

    if(n>=1)cout<<a<<" ";
    if(n>=2)cout<<b<<" ";
    if(n>=3){
        for(int q=3;q<=n;q++){
            f=a+b;
            cout<<f<<" ";
            a=b;
            b=f;
        }
    }cout<<"\n"<<endl;

    cout<<"First triangle:\n";
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }cout<<endl;
    }

    cout<<"First triangle:\n";
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }cout<<endl;
    }

    return 0;
}