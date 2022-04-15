/*
    Structure

        - a collection of variables of different data types under a single name for better handling.
        - it represents a record
    
    *Defining a structure: struct statement

        The struct statement defines a new data type with more than one member for your program.

        struct [structure tag]
        {
            member definition;
            member definition;
            ...
            member definition;
        }   [one or more structure variables];

        Member definition = data fields
                          = normal variable definition (int i, float f, etc...)

        Structure tag = serve as a data type name for structure
                      = optional

        Structure variable = at the end of the structure definition, you can specify structure variables
                           = serves as the variable for the structure definition 
                           = optional

        Note: Always end with a semicolon in the structure tag.

        When a structure is defined, it creates a user-defined type, but no storage is allocated.

        Indirection pointer - (*)

        How to declare a c structure?

            Example 1: Using normal variable

            (Syntax)

                struct tag_name
                {
                    data type var_name1;
                    data type var_name2;
                    data type var_name3;

            (Example)

                struct student
                {
                    int mark;
                    char name[10];
                    float avarage;
                };

            (Declaring structure variable)

                struct student report;
            
            (Initializing structure variable)

                struct student report = {100, "Mani", 99.5};
            
            (Accessing structure members)
                report.mark
                report.name
                report.average

            Example 2: Using pointer variable

            (Syntax)

                struct tag_name
                {
                    data type var_name1;
                    data type var_name2;
                    data type var_name3;

            (Example)

                struct student
                {
                    int mark;
                    char name[10];
                    float avarage;
                };

            (Declaring structure variable)

                struct student *report, rep;
                //* = indirection pointer
            
            (Initializing structure variable)

                struct student rep = {100, "Mani", 99.5};

                report=&rep; 
            
            (Accessing structure members)
                report->mark
                report->name
                report->average 
    Note:

    int main()
    void main()
    main()

    -> All of them are the same in c prog   
*/