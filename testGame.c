#include <stdio.h>
#include <stdlib.h>
#include "Game-1.07.h"

int main(int argc, char *argv[]) {

   int discipline[6] = {STUDENT_THD, STUDENT_BPS, STUDENT_BQN,
                        STUDENT_MJ, STUDENT_MTV, STUDENT_MMONEY}
   int dice[6] = {1, 2, 3, 4, 5, 6}

   newGame(*discipline[], dice[]);

   //Tests void makeAction


   //Tests void throwDice


   //Tests int getDiscipline


   //Tests int getDiceValue


   return EXIT_SUCCESS;
}
