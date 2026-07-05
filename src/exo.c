/*
* Écrire une programme utilisant un switch et une énumération permettant de
* - L'énumaration comporte les différents état du bras, repos, mouvement, pincer
* - Une variable nommée état devra contenir l'état actuel du robot (au choix)
* - Un switch case devra afficher la valeur de cet état à l'aide de printf
 */

#include <stdio.h>


enum etats{repos, mouvement, pincer};


int main (void){
    
    enum etats etatRobot = repos;

    switch (etatRobot){

    case repos:
        printf("robot au repos");
        break;
    case mouvement:
        printf("robot en mouvement");
        break;
    case pincer:
         printf("le robot pince");
        break;
    default:
        break;
    }

    return 0;
}

