#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Plz entre string\n");
    scanf("%[^'\n']s",Arr);

    printf("plz enter the character\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr,cValue);

    if(bRet == true)
    {
        printf("Character is present in string\n");
    }
    else
    {
        printf("Character is not present in string\n");
    }

   
    return 0;
}