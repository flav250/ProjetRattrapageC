#include <stdio.h>
#include "niveau.h"


void printRules() {
    printf("\nDans chaque niveau, le joueur dispose d'un plateau avec des cellules vides et pleines.\n"
           "Les cellules pleines sont des nombres differents ainsi que des points de depart symbolises par  'x' . \n"
           "Le but est de parcourir tous les nombres dans un ordre croissant (ou du moins identique), a partir des points de depart,en creant des chaines de nombres directement adjacents (pas de diagonales). \n"
           "Chaque cellule ne peut etre parcourue qu'une seule fois, il n'est donc pas possible de creer des intersections ou des chevauchements. \n"
           "Les niveaux peuvent avoir une ou plusieurs chaines cardinales finales, selon le nombre de points de depart.\n");
}

_Noreturn void game() {
    char game;
    char rules;
    printf("Voulez jouer? (Y, N).");
    scanf("%c", &game);
    while (game != 'Y' && game != 'N'){
        scanf("%c", &game);
    }
    if (game == 'Y') {
        printf("Voulez vous voir les regles avant de commencer la partie? (Y, N)");
        scanf("%c", &rules);
        while(rules != 'Y' && rules != 'N'){
            scanf("%c", &rules);
        }
        if (rules == 'Y') {
            printRules();
        }
        printf("\n-----------------Debut du jeu-----------------\n");
        restartLevel();
        while(1){
            showLevel();
        }
    } else if (game == 'N'){
        printf("Bonne journee");
    }
}

int main() {
    game();
}
