/*
    Structure - user defined available in C/C++ programming
              - allows you to combine data items of diffeerent kinds.
              - Unlike an array, a structure can hold different data values (int, array, float, char, string, bool)
              - for better handling of different data types 

    * Defining a structure
              - use struct statement
              - defines a new data type with more than one member of your program

              format:

              struct [structure tag]{
                  member definition;
                  member definition;
                  member definition; -> call this data fields
                  ...
                  member definition;
              } [one or more structure variables];

              wherein structure tag is optional, and each member defition/data field is
              normal variable defition (e.g int i; float f;..etc) or any other valid
              variable defition.

              You can specify one or more structure variables, but it is optional. Then,
              a semi colon is required. 

              - You can either use it under the main function or before the final semicolon.

              Example: Book

              struct Books {
                  char title[50];
                  char author[50];
                  char subject[100];
                  int book_id;
              } book; (you can separate variables using comma)

              Here, you created a new structure type declaration called "Books"

              Example 2:

              struct person{
                  char name[50];
                  int cit_no;
                  float salary;
              };

              Note: A defined structure does not allocate any storage, it only creates a
              user-defined type. Therefore, member declaration type is necessary.

              * Defining of variables of the structure

              #1 - the preferable

              struct person{
                  char name[50];
                  int cit_no;
                  float salary;
              };

              int main(void){
                  struct person p1, p2, p[20];
              }

              or

              #2 - another option

              struct person{
                  char name[50];
                  int cit_no;
                  float salary;
              }p1, p2, p[20];

              Difference between C variable, array, and structure

              - A normal C variable can hold only one data type
              - An array can hold a group of data/values of different data types
              - A structure can hold group of data/values  of different data types

              Note: the said data types here can be in int, char, float, string, bool.

              Concepts in C structure:

              => Using normal variable

                struct tag_name;{
                    data type var_name1;
                    data type var_name2;
                    data type var_name3;
                }

                * example:

                struct student{
                    int mark;
                    char name[10];
                    float average;
                };

            //declaration of structure variable

                int main(void){
                    struct student report;

                    struct student report = {100, "Mani", 99.5};

                    //accessing structure members:
                    report.mark;
                    report.name;
                    report.average;

                    return 0;
                };


            => Using pointer variable

                struct tag_name;{
                    data type var_name1;
                    data type var_name2;
                    data type var_name3;
                }

                * example:

                struct student{
                    int mark;
                    char name[10];
                    float average;
                };

                //declaration of structure variable

                int main(void){
                    struct student *report, rep;

                    struct student report = {100, "Mani", 99.5};
                    report=&rep;

                    ^ here, naka store na yung values ni rep sa report via address(&)
                
                //accessing structure members: (mostly na magagamit)
                    report -> mark;
                    report -> name;
                    report -> average;

                    return 0;
                };

                the asterisk pertains to the pointer (represents the use of pointer)
                - indirection pointer with reference to address

                two ways of accessing variable structure 

                1. Dot(.) operator used to access data in normal structure variable
                2. Arrow(->) operator used to access data in pointer structure variable

*/

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

typedef struct{
    int id;
    char name[20];
    float percentage;
}student;

int main(void){
    student std;

    std.id=1;
    strcpy(std.name, "Raju"); // in struct, you can store values in the reference slot in the strcpy function
    std.percentage = 86.5;

    cout<<" Id is: "<<std.id<<endl;//std. extension must be present
    cout<<" Name is: "<<std.name<<endl;
    cout.unsetf (ios::fixed);
    cout<<" Percentage is: "<<setprecision(4)<<std.percentage<<endl;
    return 0;
}

/*
    Passing structure to function

    - structure can be passed to any function from main function or any 
      pre-defined fucnction
    
    structure definition will be available within the function only
        - address are needed

        1. Passing structure to function by Value
            1. Declare a structure after the library header file declaration
            2. Declare a pre-defined function, which links to the structure
                - its content can be declared either above or below the main
                - as long as the variable parameter is declared above the main
                - Sequence: 
                   Structure >> Main Function >> Sub-function

        2. Passing of structure to function by Address
            1. Always remember, pag walang asterisk(*), matic dot ang gagamtin to access the members
        
        3. Passing of structure to function by Global
            1. The formal value/variable parameters are declared outside any function
            2. Easier but not preferable
    
    typedef - reduces the use of "struct" declaratrion 

    typedef struct complex{
        int imag;
        float real;
    }comp;
    
    int main(void){
        //either
        complex c1, c2;
        or 
        comp c1, c2; 
    }
*/

/*

     When creating a floating input for struct;
     1. Create a  float substitute variable inside the main
     2. use the sub_variable for assigning the user defined values
     3. equate the sub_variable to the structure variable 

     //to save a record,

*/