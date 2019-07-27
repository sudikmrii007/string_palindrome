#include<stdio.h>
void isPalindrome(char*);
void main()
{
//      int i=0, j;
        char s[20];
        printf("\nenter any string\n");
        scanf("%s",s);
        isPalindrome(s);
}

void isPalindrome(char s1[])
{
        int i=0;

        while(s1[i]!=0)
        {
                i++;
        }
      int x=i;
      i=i-1;
      int m=i/2;
      int j=0,count=0,a;
      for(a=0;a<x;a++)
      {
      if(s1[i]==s1[j])
      {
	      j++;
	      i--;
	      count++;
      }
 }

if(count==x)
	printf("\npalindrome");

else
	printf("not palindrome\n");
}

