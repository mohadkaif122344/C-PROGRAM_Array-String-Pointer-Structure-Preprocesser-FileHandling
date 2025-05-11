// Write a program to copy one string to another without Library function in c

#include <stdio.h>
int main() {
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);
    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}







//  #include <stdio.h>
//  #define MAX_SIZE 100 
//  int main()
//  {
//      char text1[MAX_SIZE];
//      char text2[MAX_SIZE];
//      int i;
//      printf("Enter any string: ");
//      gets(text1);
//      for(i=0; text1[i]!='\0'; i++)
//      {
//          text2[i] = text1[i];
//      }
//      text2[i] = '\0';
//      printf("First string = %s\n", text1);
//      printf("Second string = %s\n", text2);
//      printf("Total characters copied = %d\n", i);
//      return 0;
//  }






