/*An ICSE school displays a notice on the school notice board regarding admission in Class
XI for choosing stream according to marks obtained in English, Maths and Science in
Class 10 Council Examination.
Marks obtained in different subjects Stream
Eng, Maths and Science >= 80% Pure Science
Eng and Science >= 80%, Maths >= 60% Bio. Science
Eng, Maths and Science >= 60% Commerce
Print the appropriate stream allotted to a candidate. Write a program to accept marks in
English, Maths and Science from the console.*/

#include<stdio.h>
int main()
{
    int e,m,s;
    printf("Enter the marks obtained in-\nEnglish:");
    scanf("%d",&e);
    printf("Maths:");
    scanf("%d",&m);
    printf("Science:");
    scanf("%d",&s);
    if(e>=80 && m>=80 && s>=80)
      printf("Pure Science");
    else if(e>=80 && m>=60 && s>=80)
      printf("Bio.Science");
    else if(e>=60 && m>=60 && s>=60)
      printf("Commece");
    return 0;

}
