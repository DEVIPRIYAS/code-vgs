#include <stdio.h>
#include <string.h>
char str[100], sub[100];
int c = 0, c1 = 0;
void main()
{
 int i, j, len, len1, len2;
 printf("\nEnter a string : ");
 scanf("%[^\n]s", str);
 len1 = strlen(str);
 printf("\nEnter a substring : ");
 scanf(" %[^\n]s", sub);
 len2 = strlen(sub);
 for (i = 0; i < len1;)
 {
  j = 0;
  c = 0;
  while ((str[i] == sub[j]))
  {
   c++;
    i++;
    j++;
    }
    if (c== l2)
    {
     c1++;                                   
     c = 0;
      }
     else
     i++;
    }    
    printf("%s occurs %d times in %s", sub, c1, str);
}
