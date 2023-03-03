#include <stdio.h>
#include <stdlib.h>
/* write C code that take two integers from user
   then pass them to function to calculate
   + - / % * avg
   and return this struct to main in order to print results.*/

struct s
{
    int sum,sub, mul,remind;
    float div, avr;
};
struct s calc(int x, int y);
int main()
{
    int fnum,snum;

    printf("Please enter the numbers\n");

    scanf("%d%d", &fnum,&snum);

    struct s A = calc(fnum, snum);

    printf("%d\n", A.sum);

    printf("%d\n", A.sub);

    printf("%d\n", A.mul);

    printf("%d\n", A.remind);

    printf("%f\n", A.div);

    printf("%f\n", A.avr);

    return 0;
}

struct s calc(int x, int y)
{
    struct s B;

    B.sum = x+y;

    B.sub = x-y;

    B.mul = x*y;

    B.remind = x%y;

    B.div = (float) x/y;

    B.avr = ((float) x+y)/2;

    return B;
}
