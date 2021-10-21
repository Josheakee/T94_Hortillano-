/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int main(){
    
    
int giv1=3000,giv2=360,giv3=60,result;
    printf("RPM=%d\n",giv1);
    printf("Degrees=%d\n",giv2);
    printf("seconds=%d\n\n",giv3);
    
    //solution
     result=giv1*giv2/giv3;
    printf("%d RPM DIV %d seconds TIMES %d degree is %d degree per second",giv1,giv2,giv3,result);
    
    
    return 0;
}
