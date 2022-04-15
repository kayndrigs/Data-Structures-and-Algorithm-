/*
    String Manipulations in C Programming Using Library Functions


*/ 
#include <iostream>
#include <string.h> //library for string
using namespace std; //using namespace standard

// Using string functions helps to manipulate strings easily

int main(void){
    char a[50]=" It's Monday and it's raining ", b[50]=" isn't it? ", c[50]=" isn't it? ";
    char dest[40];
    int result;

    cout<<strlen(a)<<endl; /*determines the amount of characters 
    assigned to a variable*/
    
    strncpy(dest,a,strlen(a));//enables to pass the string value to another.
    cout<<endl<<dest<<endl;//dest is used here instead of a

    /* Format: strncpy(designated_variable,reference variable,size)
       Note: size can either be by number or using strlen function. 
       The designation variable must have enough space to be allocated with. */
    
    strcat(a,b); /*Concatenates two phrases from char arrays*/
    cout<<a<<endl;
    
    /* Format: strcat(first_string variable, second_string variable) */

    result = strcmp(a,b); /*Compares two string character by character*/
    cout<<" = "<<result;

    //format: int variable = strcmp(fist_variable,second_variable); 

    /* must be equated to an integer value to determine their differences 
        if = >0, it means that the left variable is greater than the right variable
        if = 0<, it means that the left variable is lesser than the right variable 
        if = 0, it means that both variables are equal */

    cout<<endl;
    cout<<strlwr(a)<<endl;//converts fonts to lowercase
    cout<<strupr(a);//converts fonts to uppercase



             
    cout<<endl;


    return 0;
}

/*______________________
Sample Dialog

7



________________________*/