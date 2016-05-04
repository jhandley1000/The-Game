#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
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


   //Tests int getMostARCs (Game g)


   //Tests int getMostPublications (Game g)


   //Tests int getTurnNumber (Game g)


   //Tests int getWhoseTurn (Game g)


   //Tests int getCampus(Game g, path pathToVertex)


   //Tests int getARC(Game g, path pathToEdge)


   //Tests int isLegalAction (Game g, action a)


   //Tests int getKPIpoints (Game g, int player)


   //Tests int getARCs (Game g, int player)


   //Tests int getGO8s (Game g, int player)


   //Tests int getCampuses (Game g, int player)


   //Tests int getIPs (Game g, int player)


   //Tests int getPublications (Game g, int player)


   //Tests int getStudents (Game g, int player, int discipline)


   //Tests int getExchangeRate (Game g, int player, int disciplineFrom, int disciplineTo)

   return EXIT_SUCCESS;
}
