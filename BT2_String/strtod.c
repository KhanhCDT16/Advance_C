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
       else if (mang[n-1] <57 && mang[n-1] > 48)
       {
            int j =0;
         while (mang[n-1-j] <57 && mang[n-1-j] >48) j++;
         while (mang[n-j] <57 && mang[n-j] >48)
         {
            value = value*10 + (mang[n-j]- 48);
                    j--;
         }
           *string = &mang[0];
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
    char mang[30] = "say hello 123";
    char *ptr;
    int val;
    val = test_strtod(mang,&ptr);
    printf("%d\n",val);
    //printf("%s\n",ptr);
}
