#include <stdio.h>
int test_strtod(const char mang[],char **string)
{
    int value = 0;
    int n = 0;
    while (mang[n] != '\0') n++;
    for (int i = 0; mang[i] != '\0'; i++)
    {
       if (mang[i] <57 && mang[i] > 48)
       {
         while (mang[i] < 57 && mang[i] > 48)
         {
            value = value*10 + (mang[i]- 48);
            i++;
         }
            *string = &mang[i];
            break;
       }
       else 
       {
            if (mang[i+1] <57 && mang[i+1] > 48)
            {
                while (mang[i+1] < 57 && mang[i+1] > 48)
                {
                    value = value*10 + (mang[i+1]- 48);
                    i++;
                }
                *string = &mang[i+1];
                 break;
            }
       }
        
    }
    return value;
}

int main()
{
    char mang[30] = "123 say hello ";
    char *ptr;
    int val;
    val = test_strtod(mang,&ptr);
    printf("%d\n",val);
    printf("%s\n",ptr);
}
