#include <stdio.h> 
int main()
{
int num, sum;
printf("Three-Digit Perfect Number:\n"); 
for (num = 100; num <= 999; num++)
{
sum = 0;
for (int i = 1; i <= num / 2; i++)
{
if (num % i == 0)
{
sum += i;
}
}
{
printf("%d\n", num);
}
}

return 0;
}


