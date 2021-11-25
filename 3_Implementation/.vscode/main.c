#include<stdio.h>
#include<string.h>
#include "gamecd.h"
char name(char);
int main()
{
    int n,index,count=9,i=0;
    char str1[50],str2[50],str3[50],str4[50];
    char input[]={'B','O','L','L','0','Y','W','O','O','D'};
    menu();
    printf("select any no. between 1 to 9:\n");
    scanf("%d",&n);
    char s1[25]="Sidharth",s2[25]="Kiara",s3[25]="Ranjha",s4[25]="Shershaah";
    char s5[25]="Shahrukh",s6[25]="Kajol",s7[25]="Tujhe Dekha To",s8[25]="DDLJ";
    char s9[25]="Salman",s10[25]="Asin",s11[25]="Dhinka Chika",s12[25]="Ready";
    char s13[25]="Shahrukh",s14[25]="Kareena",s15[25]="Chammak Challo",s16[25]="Ra One";
    char s17[25]="Ajay",s18[25]="Kajal",s19[25]="Singham",s20[25]="Singham";
    char s21[25]="Jimmy",s22[25]="Kangana",s23[25]="Sadi Gali",s24[25]="Tanu Weds Manu";
    char s25[25]="Hrithik",s26[25]="Katrina",s27[25]="Senorita",s28[35]="Zindagi Milegi Na Dobara";
    char s29[25]="Hrithik",s30[25]="Ashwariya",s31[25]="Udi",s32[25]="Guzaarish";
    char s33[25]="Shahrukh",s34[25]="Kajol",s35[25]="Sajdaa",s36[25]="My Name Is Khan";
    switch (n)
    {
    case 1:
           for(index=0;input[i]!='\0';index++)
                {
                  printf("\nHero:S\nHeroine:K\nSong:R\nMovie:S\n");
                  printf("Guess the correct Hero Heroine Song & Movie:\n");
                  scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        if(strcmp(s1,str1)==0 && strcmp(s2,str2)==0 && strcmp(s3,str3)==0 && strcmp(s4,str4)==0)
        {
            printf("Bravo you won!");
            break;
        }
        else
        {
          printf("Oops Try Again\n");
          printf("%c\n",input[i]);
          if(input[i]=='Y')
          {
              printf("\nHint:Movie is related to Kargil war.");
          }
          if(input[i]=='D')
          {
              printf("\nCongratulations!You Lost!");
              break;
          }
          i++;
        }
                }
           count--;

        break;
    case 2:
            for(index=0;input[i]!='\0';index++)
                {
                  printf("Hero:S\nHeroine:K\nSong:M\nMovie:D\n");
                  printf("Guess the correct Hero Heroine Song & Movie:\n");
                  scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        if(strcmp(s5,str1)==0 && strcmp(s6,str2)==0 && strcmp(s7,str3)==0 && strcmp(s8,str4)==0)
        {
            printf("Bravo you won!");
            break;
        }
        else
        {
          printf("Oops Try Again\n");
          printf("%c\n",input[i]);
          if(input[i]=='Y')
          {
              printf("\nHint:Jaa Simran Jaa Jee Lee Apni Zindagi.");
          }
          if(input[i]=='D')
          {
              printf("\nCongratulations!You Lost!");
              break;
          }
          i++;
        }
                }
           count--;
        break;
    case 3:
                for(index=0;input[i]!='\0';index++)
                {
                  printf("Hero:S\nHeroine:A\nSong:D\nMovie:R\n");
                  printf("Guess the correct Hero Heroine Song & Movie:\n");
                  scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        if(strcmp(s9,str1)==0 && strcmp(s10,str2)==0 && strcmp(s11,str3)==0 && strcmp(s12,str4)==0)
        {
            printf("Bravo you won!");
            break;
        }
        else
        {
          printf("Oops Try Again\n");
          printf("%c\n",input[i]);
          if(input[i]=='Y')
          {
              printf("\nHint:Remake of south movie.");
          }
          if(input[i]=='D')
          {
              printf("\nCongratulations!You Lost!");
              break;
          }
          i++;
        }
                }
           count--;
        break;
    case 4:
                  for(index=0;input[i]!='\0';index++)
                {
                  printf("Hero:S\nHeroine:K\nSong:C\nMovie:R\n");
                  printf("Guess the correct Hero Heroine Song & Movie:\n");
                  scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        if(strcmp(s13,str1)==0 && strcmp(s14,str2)==0 && strcmp(s15,str3)==0 && strcmp(s16,str4)==0)
        {
            printf("Bravo you won!");
            break;
        }
        else
        {
          printf("Oops Try Again\n");
          printf("%c\n",input[i]);
          if(input[i]=='Y')
          {
              printf("\nHint:This movie was popular among kids.");
          }
          if(input[i]=='D')
          {
              printf("\nCongratulations!You Lost!");
              break;
          }
          i++;
        }
                }
           count--;
           break;
    case 5:
            for(index=0;input[i]!='\0';index++)
                {
                  printf("Hero:A\nHeroine:K\nSong:S\nMovie:S\n");
                  printf("Guess the correct Hero Heroine Song & Movie:\n");
                  scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        if(strcmp(s17,str1)==0 && strcmp(s18,str2)==0 && strcmp(s19,str3)==0 && strcmp(s20,str4)==0)
        {
            printf("Bravo you won!");
            break;
        }
        else
        {
          printf("Oops Try Again\n");
          printf("%c\n",input[i]);
          if(input[i]=='Y')
          {
              printf("\nHint:Hero is plays a role of police inspector.");
          }
          if(input[i]=='D')
          {
              printf("\nCongratulations!You Lost!");
              break;
          }
          i++;
        }
                }
           count--;
           break;
    case 6:
        for(index=0;input[i]!='\0';index++)
                {
                  printf("Hero:R\nHeroine:K\nSong:S\nMovie:T\n");
                  printf("Guess the correct Hero Heroine Song & Movie:\n");
                  scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        if(strcmp(s21,str1)==0 && strcmp(s22,str2)==0 && strcmp(s23,str3)==0 && strcmp(s24,str4)==0)
        {
            printf("Bravo you won!");
            break;
        }
        else
        {
          printf("Oops Try Again\n");
          printf("%c\n",input[i]);
          if(input[i]=='Y')
          {
              printf("\nHint:Heroine in this movie has got Padma Shri Award.");
          }
          if(input[i]=='D')
          {
              printf("\nCongratulations!You Lost!");
              break;
          }
          i++;
        }
                }
           count--;
           break;
    case 7:
        for(index=0;input[i]!='\0';index++)
                {
                  printf("Hero:H\nHeroine:K\nSong:S\nMovie:Z\n");
                  printf("Guess the correct Hero Heroine Song & Movie:\n");
                  scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        if(strcmp(s25,str1)==0 && strcmp(s26,str2)==0 && strcmp(s27,str3)==0 && strcmp(s28,str4)==0)
        {
            printf("Bravo you won!");
            break;
        }
        else
        {
          printf("Oops Try Again\n");
          printf("%c\n",input[i]);
          if(input[i]=='Y')
          {
              printf("\nHint:Vacation with friends.");
          }
          if(input[i]=='D')
          {
              printf("\nCongratulations!You Lost!");
              break;
          }
          i++;
        }
                }
           count--;
           break;
     case 8:
         for(index=0;input[i]!='\0';index++)
                {
                  printf("Hero:H\nHeroine:A\nSong:U\nMovie:G\n");
                  printf("Guess the correct Hero Heroine Song & Movie:\n");
                  scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        if(strcmp(s29,str1)==0 && strcmp(s30,str2)==0 && strcmp(s31,str3)==0 && strcmp(s32,str4)==0)
        {
            printf("Bravo you won!");
            break;
        }
        else
        {
          printf("Oops Try Again\n");
          printf("%c\n",input[i]);
          if(input[i]=='Y')
          {
              printf("\nHint:Movie is based on real life story.");
          }
          if(input[i]=='D')
          {
              printf("\nCongratulations!You Lost!");
              break;
          }
          i++;
        }
                }
           count--;
           break;
     case 9:
        for(index=0;input[i]!='\0';index++)
                {
                  printf("Hero:S\nHeroine:K\nSong:S\nMovie:M\n");
                  printf("Guess the correct Hero Heroine Song & Movie:\n");
                  scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        if(strcmp(s33,str1)==0 && strcmp(s34,str2)==0 && strcmp(s35,str3)==0 && strcmp(s36,str4)==0)
        {
            printf("Bravo you won!");
            break;
        }
        else
        {
          printf("Oops Try Again\n");
          printf("%c\n",input[i]);
          if(input[i]=='Y')
          {
              printf("\nHint:Mistakenly hero is suspected as terrorist.");
          }
          if(input[i]=='D')
          {
              printf("\nCongratulations!You Lost!");
              break;
          }
          i++;
        }
                }
           count--;
           break;

        default:
        printf("Please select valid option");
        break;
    }

    return 0;
}
