#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int test_strtof(const char mang[], char ** string)
{
    int val = 0,i=0,flag =0;
    for ( i = 0; mang[i] != '\0'; i++)
    {
        if (mang[i] == ' ')
            {
                flag = 1;
                break;
            }
        if (mang[i]< 57 && mang[i] > 48 )
        {
            val =val*10 + (mang[i]-48);
        }   
    }
    if (flag == 1)
    {
        *string = &mang[i+1];

    }
    return val;
    
}
int main(){
    
    int f1 = 0, f2 =0,f3 =0;
    char *ptr,*ptr1;
    char name[30];
    strcpy(name,"123 456 568");
    f1 = test_strtof(name,&ptr);
    f2 = test_strtof(ptr,&ptr1);
    //f3= test_strtof(ptr1,NULL);
    printf("f1: %d\n",f1);
    printf("f2: %d\n",f2);
    //printf("f3: %d\n",f3);
    return 0 ;
}