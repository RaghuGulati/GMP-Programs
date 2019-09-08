#include<iostream>
#include<gmp.h>
#include<stdio.h>

using namespace std;

int main (int argc, char **argv) {

    mpq_t a,b,c;    //Rational numbers are stored in objects of type mpq_t.
    mpq_inits(a,b,c,NULL); //Initialize a NULL-terminated list of mpq_t variables, and set their values to 0/1. 


    char str1[10], str2[10];

    cout<<"Enter first fraction: ";
    cin>>str1;

    cout<<"Enter second fraction: ";
    cin>>str2;
	

    mpq_set_str(a,str1,10); // assign a as str1 with decimal base 10. 
    mpq_set_str(b,str2,10); // assign b as str2 with decimal base 10.

    mpq_add(c,a,b); // add a and b and stores the sum in c

    cout<<"\nThe sum is:";
    mpq_out_str(stdout, 10, c); //Output c on stdio stream stream, as a string of digits in base 10
    cout<<endl;

   return 0;
}
