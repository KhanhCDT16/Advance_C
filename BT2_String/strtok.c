#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* test_strtok(char string[],const char *ky_tu)
{
    int i = 0,j= 1;
    static int flag=1;
    static char *new,*old;
    
    if ( string != NULL)
    {
        i = 0;
        new = string;
         while (new[i] != '\0')
       {
         if (new[i] == *ky_tu)
         {
            new[i] = '\0';
            old = &new[i];
            break;
         }
         i++;
       }
    }
      else
      {
        if (flag == 0)
        {
            if (old[i] =='\0')
            {
                new = NULL;
                return new;
            }
            
        }
        
         new = &old[i+j];
        while (old[i+j] != '\0')
        {
         if ( old[j+i] == *ky_tu)
         {
            old[j+i] = '\0';
            old= &old[j+i];
            flag = 1;
            break;
         }
         else flag = 0;
         j++;
        }
       
       
      }     
      return new;
          
}

int main()
{
    char string[30];
    char *ptr;
    strcpy(string,"tao,ham,string,token");
    ptr = test_strtok(string,",");
    printf("%s\n",ptr);
    while (ptr != NULL)
    {
        ptr = test_strtok(NULL,",");
        printf("%s\n",ptr);
    }
    
    
    return 0;
}