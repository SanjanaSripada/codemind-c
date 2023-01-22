#include <stdio.h>
int main ()
{
// Initializing the variables
int num, count, fact, last_digit, sum = 0, temp;
scanf ("%d", &num);
// for loop to compute the factorial of the last digit of the number
for (temp = num; num > 0; num = num / 10)
{
fact = 1;
last_digit = num % 10;
for (count = 1; count <= last_digit; count++)
{
fact = fact * count;
}
sum = sum + fact;
}
// Condition to check whether the number is strong or not 
if (sum == temp)
{
printf ("The number %d is a strong number",temp);
}
else
{
printf ("The number %d is not a strong number",temp);
}
return 0;
}