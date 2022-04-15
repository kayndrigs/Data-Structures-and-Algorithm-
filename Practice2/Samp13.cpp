//Desc: Name
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    int Cat, ScrTotal, PassRate, Scr[Cat], Total[Cat];

    cout<<"# of Categories: "; cin>>Cat;
    cout<<"Passing Rate(%): "; cin>>PassRate;
    cout<<endl;

    for(int i=0;i<Cat;i++){
        cout<<"Cat: "<< i+1 << "(Score, Total): ";cin>>Scr[i]>>Total[i];
    }
    cout<<endl<<"Exam Performance: "<<endl;
    bool Passing=true;
    bool CatPass;
    for(int i=0;i<Cat;i++){
        float Percent=((float)(Scr[i])/Total[i])*100;
        if(Percent>=PassRate)CatPass=true;
        else CatPass=false;
        Passing=Passing&&CatPass;
        cout<<"Cat "<<i+1<<Percent<<"%"<<endl;
    }

    if(Passing)cout<<endl<<"Verdict: PASSED\n"<<endl;
    else cout<<endl<<"Verdict: FAILED\n"<<endl;
    cout<<"\nAssessment: ";

    for(int i=0;i<Cat;i++){
        if(Passing)cout<<"Cat: "<<i+1<<" Passed"<<endl;
        else cout<<"Cat: "<<i+1<<" Failed"<<endl;
    }

    //output
    return 0;
}