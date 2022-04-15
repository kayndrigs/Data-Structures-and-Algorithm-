//Category Analyzer
//Kayne Uriel K. Rodrigo
#include<iostream>
#include<iomanip>
using namespace std;

int main(void){
    char ans;
        do{
            int cat;cout<<"# of categories: ";cin>>cat;
            int rate;cout<<"Enter passing rate(%): ";cin>>rate;
            cout<<endl;

            float score[cat];
            float total[cat];

            for(int i=0;i<cat;i++){
                cout<<"Cat "<<i+1<<": (Score, Total):  ";cin>>score[i]>>total[i];
            }cout<<endl;

            cout<<"Exam performance:\n";
            float percent[cat];
            string ass[cat];
            bool pass[cat];
            bool verdict=true;
            for(int i=0;i<cat;i++){
                percent[i]=(score[i]/total[i])*100;
                if(percent[i]>=rate){
                    pass[i]=true;
                    ass[i]="Passed";
                }
                else{
                    pass[i]=false;
                    ass[i]="Failed";
                }
                verdict=verdict&&pass[i];
                cout.unsetf (ios::fixed);
               if(percent[i]>=100)cout<<"Cat "<<i+1<<": "<<setprecision(3)<<percent[i]<<"%"<<endl;
               else cout<<"Cat "<<i+1<<": "<<setprecision(2)<<percent[i]<<"%"<<endl;
            }cout<<endl;

            if(verdict)cout<<"Verdict: PASSED\n";
            else cout<<"Verdict: FAILED\n";
            cout<<endl;

            cout<<"Assessment: \n";
            for(int i=0;i<cat;i++){
                 cout<<"Cat "<<i+1<<": "<<ass[i]<<endl;
             }cout<<endl;

            do{
                cout<<"Try again?(y/n): ";cin>>ans;
                if(!(ans=='y')||(ans=='n'))cout<<"\nInvalid answer. Try again!\n"<<endl;
            }while(!(ans=='y')||(ans=='n'));
        }while(ans=='y');

    
    return 0;
}