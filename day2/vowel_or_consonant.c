#include<stdio.h>
int main()
{
  char ch;
  printf("enter character for ch:");
  scanf("%c", &ch);
  if((ch>'a' && ch<'z') || (ch>'A" && 'B'))
  {
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n",ch);
            break;
        default:
            printf("%c is a consonant.\n",ch);
    }
  else {
    printf("invalid input");
  }
  return 0;
}

  
