/*Extend above program (11) to print ranges for float, double, and long double. Use <float.h>.
“float” numbers can be printed using %f, %g, %e, %E.*/


#include<stdio.h>
#include<limits.h>
#include<float.h>

int main() {
    printf("-----------------------------------------------------------------------------------------\n");
    printf(" Data Type \t\t Size \t\t Format Specifier \t Range\n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf(" Char \t\t\t %lu \t\t %%c \t\t\t %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf(" Unsigned Char \t\t %lu \t\t %%c \t\t\t 0 to %u\n", sizeof(unsigned char), UCHAR_MAX);
    printf(" Short int \t\t %lu \t\t %%hi \t\t\t %d to %d\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf(" Unsigned short int \t %lu \t\t %%hu \t\t\t 0 to %u\n", sizeof(unsigned short int), USHRT_MAX);
    printf(" int \t\t\t %lu \t\t %%d \t\t\t %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf(" Unsigned int \t\t %lu \t\t %%u \t\t\t 0 to %u\n", sizeof(unsigned int), UINT_MAX);
    printf(" Long int \t\t %lu \t\t %%ld \t\t\t %ld to %ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf(" Unsigned long int \t %lu \t\t %%lu \t\t\t 0 to %lu\n", sizeof(unsigned long int), ULONG_MAX);
    printf(" Float \t\t\t %lu \t\t %%f \t\t\t %f to %f\n", sizeof(float),FLT_MIN,FLT_MAX );
    printf(" Float \t\t\t %lu \t\t %%g \t\t\t %g to %g\n", sizeof(float),FLT_MIN,FLT_MAX );
    printf(" Float \t\t\t %lu \t\t %%e \t\t\t %e to %e\n", sizeof(float),FLT_MIN,FLT_MAX );
    printf(" Float \t\t\t %lu \t\t %%E \t\t\t %E to %E\n", sizeof(float),FLT_MIN,FLT_MAX );
    return 0;
}
