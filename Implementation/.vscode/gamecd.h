/**
 * @file gamecd.h
 * @author APURVA BHAGAT (apurvabhagat0806@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _GAMECD_H
#define _GAMECD_H
#include<stdio.h>
#include<string.h>
/**
 * @brief menu() used for telling the rules to the player
 * Player will be given 9 chances to guess the correct name of hero,heroine,song & movie.
 */
void menu()
{
    printf("\nHELLO LET'S PLAY A GAME\n");
    printf("\nHere are some rules for the game");
    printf("\n1.The player will be the initials of hero,heroine,song & movie.");
    printf("\n2.In order to win the the game player needs to guess all four correct");
    printf("\n3.The player needs to put the spellings correct");
    printf("\n4.The player will be given 9 chances");
    printf("\n5.The player will be provided a hint in between");
}
#endif
