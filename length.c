#include <Stdio.h> int main()
{
char str[100]; int count=0,i;
printf("Enter a string: "); gets(str);
for(i=0;str[i] != '\0'; i++)
{
if(str[i] == ' ' || str[i] =='\n'){ count++;
}
}
printf("The number of words in the string is: %d\n",count+1);
return 0;
}
