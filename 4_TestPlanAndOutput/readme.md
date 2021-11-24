## EXPECTED OUTPUT
Select any no. between 1 to 9.
1
Hero:S
Heroine:K
Song:R
Movie:S
Guess
Salman
Katrina
Rani
Sultan
-B-
Try again
If the user reaches till -Y- hint will come
Movie is related to kargil war
Sidharth
Kiara
Ranjha
Shershaah
YOU WON!

## ACTUAL OUTPUT
![Output1](https://user-images.githubusercontent.com/74763172/143289829-19bd6df1-f320-408d-97f5-71d81571f104.JPG)

![Output2](https://user-images.githubusercontent.com/74763172/143289870-6a485935-73f2-4f36-a662-b569ec042dcc.JPG)

## TEST PLAN:
### Table no: High level test plan
| Test ID | 	      Description	             |                         Exp I/P	      |    Exp O/P     | 	Actual Out	  |     Type Of Test  |
|---|---|---|---|---|---|
| H_01  |	The user should select any number from 1 to 9		   |                 1	    |  Initial letter| Initial letters|  Requirement based |
| H_02	| The user should guess all four correct             |               Names	  |       Guess    |     Guess      |    Scenario based  |
| H_03	| The user will be given 9 chances	                 |               Names    |      Lose      |   Lose         |  Boundary based    |

### Table no: Low level test plan
| Test ID | 	      Description	             |                         Exp I/P	      |    Exp O/P     | 	Actual Out	  |     Type Of Test  |
|---|---|---|---|---|---|
| L_01		|The player should enter a valid option        |                  1-9        |  Initial Letters |  Guess    |  	Requirement based |
| L_02	  |The player should write correct spellings     |                Correct Names	|   Win            |  Win     |    Scenario based    |
| L_03	  |The player needs to follow the sequence	     |  Guess as per the given sequence| Win/Lose      |  Win/Lose  |   Boundary based    |
