#include <stdio.h>
#define MAXSIZE 1000

void gstrcat(char s[], char t[]);

main()
{
    char a1[MAXSIZE] = "Hello friends\0";
    char a2[MAXSIZE] = " chai peelo";

    gstrcat (a1, a2);

    printf("\n%s\n", a1);
}

void gstrcat(char s[], char t[])
{
    int i,j;

    i = j = 0;
    while (s[i] != '\0') /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0') /* copy t */
        ;
}

