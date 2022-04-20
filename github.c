#include <stdio.h>
int main()
{
 int billamt,amtgiven;
 int q,r;
 printf("Enter the money given by Santo: \n");
 scanf("%d",&amtgiven);
 printf("Enter the money to be paid to the shopkeeper: \n");
 scanf("%d",&billamt);
 q=amtgiven/billamt;
 r=amtgiven%billamt;
 printf("Quotient:%d\nRemainder:%d",q,r);
return 0;
}
