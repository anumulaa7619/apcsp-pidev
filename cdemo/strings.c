#include <stdio.h>
#include <string.h>

int main(void) {
  char Mystring[26];
  for (int i=0;i<26;i++)
  {
    Mystring[i] = 97 + i;       //97 is where the ASCII code for the lower case alphabet starts
  }
  
  char Mystring1 [] = "abcdefghijklmnopqrstuvwxyz";   //Traditionaly defined
  
  if (strcmp(Mystring, Mystring1) == 0)
     printf("The two lowercase strings are the same\n");
  else
     printf("The two lowercase strings are NOT the same\n");
     
  for (int i=0;i<26;i++)
  {
    Mystring1[i] = Mystring1[i] - 32;
  }
  
  if (strcmp(Mystring, Mystring1) == 0)
     printf("Unsuccessful change to uppercase\n");
  else
     printf("Successful change to upercase\n");
  
  char Mystring2[52];
  
  strcpy(Mystring2, Mystring);
  strcat(Mystring2, Mystring1);
  
  printf("Lowercase: %s\n", Mystring);
  printf("Uppercase: %s\n", Mystring1);
  printf("Combined: %s\n", Mystring2);
}
