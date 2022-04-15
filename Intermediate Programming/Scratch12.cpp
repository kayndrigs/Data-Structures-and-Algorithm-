//By: AJ Alipio
//Desc: Certification Exam Result

 

#include <iostream>
using namespace std;

 

int main(){

 

    int cat; cout<<"# of Categories: "; cin>>cat;
    int rate; cout<<"Passing Rate(%): "; cin>>rate;

 

    string catName[cat];
    float score[cat];
    float total[cat];
    
    cout<<endl;
    for(int j=0; j<cat; j++){
        cout<<"Cat "<<j+1<<" (CatName, Score, Total): ";
        cin>>catName[j]>>score[j]>>total[j];        
    }

 

    cout<<endl<<"Exam Performance: "<<endl;
    
    string catEval[cat];
    float percent[cat];
    bool catPassed[cat];
    bool verdict=true;
    
    for(int j=0; j<cat; j++){    
        percent[j]= (score[j]/total[j])*100;
        if(percent[j]>=rate) {
            catPassed[j]=true;
            catEval[j]="Passed";
        }
        else{
            catPassed[j]=false;
            catEval[j]="Failed";
        }
        verdict=verdict && catPassed[j];
        cout<<catName[j]<<": "<<percent[j]<<"%"<<endl;
    }
    
    if(verdict) cout<<"\nVerdict: PASSED\n";
    else cout<<"\nVerdict: FAILED\n";
    
    cout<<"\nAssessment: "<<endl;
    for(int j=0; j<cat; j++){    
        cout<<catName[j]<<": "<<catEval[j]<<endl;
    }
    
    return 0;
}

 

/*
SAMPLE DIALOG:
---------------------------------------
# of Categories: 5
Passing Rate(%): 60

 

Cat 1 (Cat Name, Score, Total): Grammar 20 25
Cat 2 (Cat Name, Score, Total): Comprehension 20 30
Cat 3 (Cat Name, Score, Total): Math 15 30
Cat 4 (Cat Name, Score, Total): Science, 20 25
Cat 5 (Cat Name, Score, Total): Abstract 25 30

 

Exam Performance:
Grammar:         80%
Comprehension:     67%
Math:             50%
Science:         80%
Abstract:         83%

 

Verdict:         FAILED

 

Assessment:
Grammar:         Passed
Comprehension:    Passed
Math:              Failed
Science:          Passed
Abstract:          Passed
-------------------------------------*/