#include<gmp.h>
#include<stdio.h>

int main (int argc, char **argv) {

    mpq_t a,b,c;    //Rational numbers are stored in objects of type mpq_t.
    mpq_inits(a,b,c,NULL); //Initialize a NULL-terminated list of mpq_t variables, and set their values to 0/1. 

    char str1[10], str2[10];

    printf("Enter first fraction: ");
    fgets(str1,10,stdin);	//gets() has been removed from c11. so we use fgets(str, MAX_LIMIT, FILE*strean)

    printf("Enter second fraction: ");
    fgets(str2,10,stdin);
	

    mpq_set_str(a,str1,10); // assign a as str1 with decimal base 10. 
    mpq_set_str(b,str2,10); // assign b as str2 with decimal base 10. 

    mpq_add(c,a,b); // add a and b and stores the sum in c

    printf("\nThe sum is:");
    mpq_out_str(stdout, 10, c); //Output c on stdio stream stream, as a string of digits in base 10

    printf("\n");
    return 0;
}
