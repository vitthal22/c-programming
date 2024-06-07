// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[100];
//     gets(s1);
//     char s2[100];
//     gets(s2);

//     int len1 = strlen(s1);
//     int len2 = strlen(s2);

//     int i = len1;
//     int j = 0;
//     for (i, j; i < (len1+len2), j<len2; i++, j++)
//     {
//         s1[i]=s2[j];
//     }
//     // s1[i]='\0';
//     puts(s1);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[] = "Seed";

//     puts(strupr(s));
//     puts(strlwr(s));
//     return 0;
// }





// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[]="A";
//     char s2[]="B";

//     printf("%d",strcmp(s1,s2));
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100];
//     printf("enter string: ");
//     gets(str);

//     int i = 0;
//     while (str[i]!='\0')
//     {
//         if (str[i] == 'a')
//         {
//             str[i]='A';
//         }
//         i++;
//     }
//     puts(str);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100];
//     printf("enter string: ");
//     gets(str);

//     int i = 0;
//     int count =0;
//     while (str[i]!='\0')
//     {
//         if (str[i] == ' ')
//         {
//             count++;
//         }
//         i++;
//     }
//     printf("%d", count);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100];
//     printf("enter string: ");
//     gets(s);

//     for (int i = 0; i < strlen(s); i++)
//     {
//         int count =0;
//         for (int j = 0; j < strlen(s); j++)
//         {
//             if(s[i]==s[j]) count++;
//         }
//         printf("%c = %d\n", s[i], count);
//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter string: ");
    gets(str);

    for(int i=0; str[i]!= '\0'; i +=2)
    {
        printf("%c", str[i]); 
    }
    return 0;
}