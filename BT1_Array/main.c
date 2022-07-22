#include <stdio.h>

void Hoan_Vi(int *ptr1,int *ptr2)
{
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

}
void Sap_Xep_GD(int mang[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j =i+1; j < size; j++)
        {
            if (mang[i] >= mang[j])
            {
                Hoan_Vi(&mang[i],&mang[j]);
            }
            
        }
        
    }
    printf("\n");
}
void Sap_Xep_TD(int mang[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j =i+1; j < size; j++)
        {
            if (mang[i] <= mang[j])
            {
                Hoan_Vi(&mang[i],&mang[j]);
            }
            
        }
        
        
    }
    printf("\n");
}
void Tim_SLN(int mang[],int size)
{
    int Max = mang[0];
    for (int i = 1; i < size; i++)
    {
        if (mang[i]>=Max)
        {
            Max = mang[i];
        }
        
    }
    printf("So lon nhat la: %d\n",Max);
    
}
void Tim_SNN(int mang[],int size)
{
    int Min = mang[0];
    for (int i = 1; i < size; i++)
    {
        if (mang[i]<=Min)
        {
            Min = mang[i];
        }
        
    }
    printf("So nho nhat la: %d\n",Min);
    
}
int So_Sanh_hai_Mang(char mang1[], char mang2[])
{
    int i=0,flag= 0;
    int N1 = 0,N2 = 0;
    while (mang1[N1] != '\0') N1++;
    while (mang2[N2] != '\0') N2++;
    
    if(N1 == N2)
    {
        while (mang1[i] != '\0' )
        {
            if (mang1[i] == mang2[i])
            {
                flag = 1;
            }
            else return 0;
            i++;
        
        }
        if (flag = 1)
        {
            return 1;
        }
        
    }
    else return 0;
}
void Nhap_Mang(int mang[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&mang[i]);
        printf("Array[%d] = %d\n",i,mang[i]);
    }
    
}
void Xuat_Mang(int mang[], int size)
{
    for (int i = 0; i < size; i++)
    {
       printf("%d\t",mang[i]);
    }
    printf("\n");
}
int main()
{
    int size;
    int Array[100];
    char Mang1[] = "khanh";
    char Mang2[] = "khanhcdt";
    char Mang3[] = "khanh";
    do
    {
        printf("nhap n phan tu: ");
        scanf("%d",&size);
        if (size< 0 || size >Max)
        {
            printf("nhap n phan tu lon hon 0 va nho %d\n",Max);
        }

        
    } while (size < 0 || size > Max);
    Nhap_Mang(Array,size);
    Sap_Xep_GD(Array,size);
    Xuat_Mang(Array,size);
    Sap_Xep_TD(Array,size);
    Xuat_Mang(Array,size);
    Tim_SLN(Array,size);
    Tim_SNN(Array,size);
    printf("%d\n",So_Sanh_hai_Mang(Mang1,Mang2));
    return 0;
}