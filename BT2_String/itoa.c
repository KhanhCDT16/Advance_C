#include <stdio.h>

void DecToString(int number, char buffer[])
{
    int val=0, i =0,j= 0,count=0,temp= 0;
    temp = number;
    while (buffer[j]!='\0') buffer[j++] ='\0'; 
    while (temp != 0)
     {
        count++;
        temp /=10;
     }
    for ( i = count-1; i >= 0; i--)
    {
        val = number%10;
        buffer[i] = val + 48;
        number /=10;
    }
    
    
}
void BinToString(int number, char buffer[])
{
    int val = 0, i=0,j=0,count=0;
    int temp = number; 
    while (buffer[j]!='\0') buffer[j++] ='\0'; 
    while (temp != 0)
     {
        count++;
        temp /=2;
     }
    for ( i = count-1; i >= 0; i--)
    {
        val = number%2;
        buffer[i] = val + 48;
        number /=2;
    }       
}
void HexToString(int number,char buffer[])
{
    int val = 0, i=0,j=0,count=0,convert= 0;
    int temp = number; 
    while (buffer[j]!='\0') buffer[j++] ='\0'; 
    while (temp != 0)
     {
        count++;
        temp /=16;
     }
    for ( i = count-1; i >= 0; i--)
    { 
        val = number%16;
        if (val > 9)convert = 55;
        else convert = 48;
        buffer[i] = val + convert;
        number /=16;
    }    

}
void test_itoa(int number,char buffer[],int Co_So)
{
    switch(Co_So)
    {
        case 2:
        {
            BinToString(number,buffer);
            break;
        }
        case 10:
        {
            DecToString(number,buffer);
            break;
        }
        case 16:
        {
            HexToString(number,buffer);
            break;
        }
    }
}
int main()
{
    int number;
    char buffer[30]="";
    printf(" nhap number: ");
    scanf("%d",&number);
    test_itoa(number,buffer,10);
    printf("%s\n",buffer);
    test_itoa(number,buffer,2);
    printf("%s\n",buffer);
    test_itoa(number,buffer,16);
    printf("%s\n",buffer);
    return 0;
}