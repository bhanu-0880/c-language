#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	printf("ch=%c\n",ch);
	switch(ch)
	{
		case 'a':printf("vowel");
		       break;
	    case 'e':printf("vowel");
		       break;
	    case 'i':printf("vowel");
		       break;
		case 'o':printf("vowel");
		       break;
		case 'u':printf("vowel");
		       break;
	    default:printf("not vowel");
	}
	
}
