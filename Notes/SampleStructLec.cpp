

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct student{
    int id;
    char name[30];
    float percentage;
};

int main(void){
    struct student record[3];

    //1st student's record
    record[0].id=1;
    strcpy(record[0].name,"Kayne");
    record[0].percentage = 90.5;

    record[1].id=2;
    strcpy(record[1].name,"Ella");
    record[1].percentage = 95.7;

    record[2].id=3;
    strcpy(record[2].name,"Daniel");
    record[2].percentage = 96.8;

    for(int i=0;i<3;i++){
        cout<<"Records of Student: "<<i+1<<endl;
        cout<<"Id is: "<<record[i].id<<endl;
        cout<<"Name is: "<<record[i].name<<endl;
        cout<<"Percentage is: "<<record[i].percentage<<endl;
        cout<<endl;
    }



    return 0;
}