#include <stdio.h>
int
main ()
{
  char str[150];
  int vowels, caps, alph, count= 0;

  vowels = alph = caps = count = 0;

  printf ("Input: ");
  fgets (str, sizeof (str), stdin);
  scanf("%[^\n]s", str); //read string with spaces

  for (int i = 0; str[i] != '\0'; ++i)
//number of vowels
    {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
	  str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
	  str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
	  str[i] == 'U')
	{
	  ++vowels;
	}

    //number of words
      else if (str[i] == ' ' && str[i+1] != ' ')
            // count++;
	{
	  ++count;
	}

    else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alph++;
        }



    //check first character is lowercase alphabet
    else if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; //subtract 32 to make it capital
			continue; //continue to the loop
		}
		if(str[i]==' ')//check space
		{
			//if space is found, check next character
			++i;
			//check next character is lowercase alphabet
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32; //subtract 32 to make it capital
				continue; //continue to the loop
			}
		}
		else
		{
			//all other uppercase characters should be in lowercase
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32; //subtract 32 to make it small/lowercase
		}

    }

  printf ("Output: %s", str);
  printf ("\nWords: %d", count + 1);
  printf ("\nAlphabets: %d", alph);
  printf ("\nVowels: %d", vowels);


  return 0;
}
