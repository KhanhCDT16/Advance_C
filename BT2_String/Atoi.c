#include <stdio.h>
#include <string.h>
#include <math.h>
int test_Atoi( char number[])
{
    int val = 0;
    for(int i= 0; number[i] !='\0'; i++)
    {
        if (number[i] > 57 || number[i] < 48)
        {
            break;
        }
        
        val = val*10 + (number[i]-48);
    }
    return val;
}
int main()
{
    char number[25];
    printf("nhap chuoi number: ");
    scanf("%s",number);
    printf("so sau khi convert: %d",test_Atoi(number));
    return 0;
}