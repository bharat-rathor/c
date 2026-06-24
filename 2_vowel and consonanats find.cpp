#include<stdio.h>

int main()
{
	char name[50];
	char vowel[]={'a','e','i','o','u','\0'};
	
	
	printf("Enter String : ");
	gets(name);
	
	int vowel1,consonants;
	for(int i=0;name[i]!='\0';i++)
	{
		for(int j=0;vowel[j]!='\0';j++)
		{
			if(name[i]==vowel[j])
			{
				vowel1++;
			}else{
				consonants++;
				break;
			}
			
		}
	}
	printf("The Vowel : %d\n",vowel1);
	printf("The Consonantes : %d\n",consonants);
}
