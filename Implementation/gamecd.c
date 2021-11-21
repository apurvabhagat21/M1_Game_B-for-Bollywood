#include<stdio.h>
#include<string.h>
int main()
{
    int n,index,count=9,i=0;
    char str1[50],str2[50],str3[50],str4[50];
    char input[]={'B','O','L','L','0','Y','W','O','O','D'};
    printf("select any no. between 1 to 9:\n");
    scanf("%d",&n);
    char s1[25]="Sidharth",s2[25]="Kiara",s3[25]="Ranjha",s4[25]="Shershaah";
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
          i++;
        }
                }
           count--;

        break;
    case 2:
        printf("Hero:S\nHeroine:K\nSong:M\nMovie:D\n");
        printf("Guess the correct Hero Heroine Song & Movie:\n");
        scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        break;
    case 3:
        printf("Hero:S\nHeroine:A\nSong:D\nMovie:R\n");
        printf("Guess the correct Hero Heroine Song & Movie:\n");
        scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        break;
    case 4:
        printf("Hero:S\nHeroine:K\nSong:C\nMovie:R\n");
        printf("Guess the correct Hero Heroine Song & Movie:\n");
        scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        break;
    case 5:
        printf("Hero:A\nHeroine:K\nSong:S\nMovie:S\n");
        printf("Guess the correct Hero Heroine Song & Movie:\n");
        scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        break;
    case 6:
        printf("Hero:R\nHeroine:K\nSong:S\nMovie:T\n");
        printf("Guess the correct Hero Heroine Song & Movie:\n");
        scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        break;
    case 7:
        printf("Hero:H\nHeroine:K\nSong:S\nMovie:Z\n");
        printf("Guess the correct Hero Heroine Song & Movie:\n");
        scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        break;
     case 8:
        printf("Hero:H\nHeroine:A\nSong:U\nMovie:G\n");
        printf("Guess the correct Hero Heroine Song & Movie:\n");
        scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        break;
    case 9:
        printf("Hero:S\nHeroine:K\nSong:S\nMovie:M\n");
        printf("Guess the correct Hero Heroine Song & Movie:\n");
        scanf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
        break;
    default:
        printf("Please select valid option");
        break;
    }

    return 0;
}
