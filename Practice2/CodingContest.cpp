//Desc: Coding Contest
//By: Kayne Uriel K. Rodrigo

#include <iostream>
using namespace std;

//Global variable declaration

int main(void){
    //variable declaration
    char ans;
    
    do{
    cout<<endl;
    cout<<"CODING CHALLENGE RESULTS\n"<<endl;
        int N;
        do{
            cout<<"Number of Teams(6-10): "; cin>>N;cout<<"\n"<<endl;
            if((N<6)||(N>10)){cout<<"The number of teams you entered does not meet the requirements. Try again.\n"<<endl;}
        }while((N<6)||(N>10));

        //inputting of values
        cout<<"ENTER TEAM DETAILS BELOW...\n"<<endl;
        string Tname[N], Course[N];
        float Tscore[N];

          for(int i=0;i<N;i++){
            cout<<"Team "<<i+1<<"-------------------------"<<endl;
            cout<<"Team Name(No space): "; cin>>Tname[i];
            do{
                cout<<"Course(IT/CS/IS/CE): ";cin>>Course[i];
                if(!((Course[i]=="IT")||(Course[i]=="CS")||(Course[i]=="IS")||(Course[i]=="CE"))){cout<<"\nInvalid course! Try again.\n"<<endl;}
            }while(!((Course[i]=="IT")||(Course[i]=="CS")||(Course[i]=="IS")||(Course[i]=="CE")));
            do{
                cout<<"Team Score(50..100): ";cin>>Tscore[i];
                if((Tscore[i]<50)||(Tscore[i]>100)){cout<<"\nInvalid score! Try again.\n\n";}
            }while((Tscore[i]<50)||(Tscore[i]>100));
            cout<<endl;
          }
            //output of values
            cout<<endl<<"-----CONTEST STATISTICS-----"<<endl;
            long double Sum, Average;
            for(int i=0;i<N;i++){Sum+=Tscore[i];}
            Average = Sum/N; printf("Average Team Score: %0.2Lf\n",Average); cout<<endl;

            cout<<"Champion: ";
            float MaxScore = Tscore[0];
            string MaxName = Tname[0];
            string MaxCourse = Course[0];


            for(int i=0;i<N;i++){
                if(Tscore[i]>MaxScore){
                    MaxScore = Tscore[i];
                if(Tname[i]>MaxName)
                    MaxName = Tname[i];
                if(Course[i]>MaxCourse)
                    MaxCourse = Course[i];    
                }
            }cout<< endl << "* "<< MaxName <<" ("<< MaxCourse<<"), "<< MaxScore <<" pts"<<endl;

            cout<<"\nTeams with Above Average Scores: \n"<<endl;
            for(int i=0;i<N;i++){
                if((Tscore[i]>Average)&&(Tscore[i]!=MaxScore)){
                    cout<<endl<<"* "<<Tname[i]<<" ("<<Course[i]<<"), "<<Tscore[i]<<" pts";
                }
            }

        do{
            cout<<endl<<"\nTry Again?(y/n)"; cin>>ans;
            if(!((ans=='y')||(ans=='n'))){cout<<"Invalid Answer! Try again.\n"<<endl;}
        }while(!((ans=='y')||(ans=='n')));
    }while(ans=='y');

    return 0;
}