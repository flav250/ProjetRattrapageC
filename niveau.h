//
// Created by aubbr on 05/05/2022.
//

#ifndef MAIN_C_NIVEAU_H
#define MAIN_C_NIVEAU_H
#define updateArray(arr, pos, val) do{arr[pos]=val;}while(0)

#include <stdio.h>
#include <pthread.h>
#include <windows.h>
#include <stdbool.h>


const int SET = 0, RED = 1, GREEN = 2;
int coords[2] = {2, 2}, coords2[2] = {2, 1}, level = 1,
        redfirstcoords[2] = {-1, -1},
        greenfirstcoords[2] = {-1, -1},
        redlastcoords[2] = {-1, -1},
        greenlastcoords[2] = {-1, -1},
        curColor = RED;


char *lvl1[5][5] = {
        {NULL, NULL, NULL, NULL, NULL},
        {NULL, "2", "1", "1",    NULL},
        {NULL, "2", "x", "1",    NULL},
        {NULL, "1", "1", "1",    NULL},
        {NULL, NULL, NULL, NULL, NULL}
};

int lvl1default[5][5] = {
        {-1, -1,  -1,  -1,  -1},
        {-1, SET, SET, SET, -1},
        {-1, SET, RED, SET, -1},
        {-1, SET, SET, SET, -1},
        {-1, -1,  -1,  -1,  -1},
};

int lvl1jeu[5][5] = {
        {-1, -1,  -1,  -1,  -1},
        {-1, SET, SET, SET, -1},
        {-1, SET, RED, SET, -1},
        {-1, SET, SET, SET, -1},
        {-1, -1,  -1,  -1,  -1}
};

int lvl1solution[5][5] = {
        {-1, -1,  -1,  -1,  -1},
        {-1, RED, RED, RED, -1},
        {-1, RED, RED, RED, -1},
        {-1, RED, RED, RED, -1},
        {-1, -1,  -1,  -1,  -1}
};


char *lvl2[5][5] = {
        {"1", "1",  "1", "3", "4"},
        {"1", NULL, "1", "3", "5"},
        {"1", "x",  "1", "3", "3"},
        {"1", NULL, "1", "1", "3"},
        {"1", "1",  "1", "2", "2"},
};

int lvl2default[5][5] = {
        {SET, SET, SET, SET, SET},
        {SET, -1,  SET, SET, SET},
        {SET, RED, SET, SET, SET},
        {SET, -1,  SET, SET, SET},
        {SET, SET, SET, SET, SET},
};

int lvl2jeu[5][5] = {
        {SET, SET, SET, SET, SET},
        {SET, -1,  SET, SET, SET},
        {SET, RED, SET, SET, SET},
        {SET, -1,  SET, SET, SET},
        {SET, SET, SET, SET, SET},
};


int lvl2solution[5][5] = {
        {RED, RED, RED, RED, RED},
        {RED, -1,  RED, RED, RED},
        {RED, RED, RED, RED, RED},
        {RED, -1,  RED, RED, RED},
        {RED, RED, RED, RED, RED},
};

char *lvl3[5][5] = {
        {"4", "4", "4", "4", "4"},
        {"4", "2", "2", "2", "4"},
        {"4", "2", "X", "4", "4"},
        {"4", "2", "2", "4", "4"},
        {"4", "4", "4", "6", "8"},
};

int lvl3default[5][5] = {
        {SET, SET, SET, SET, SET},
        {SET, SET, SET, SET, SET},
        {SET, SET, RED, SET, SET},
        {SET, SET, SET, SET, SET},
        {SET, SET, SET, SET, SET},
};

int lvl3jeu[5][5] = {
        {SET, SET, SET, SET, SET},
        {SET, SET, SET, SET, SET},
        {SET, SET, RED, SET, SET},
        {SET, SET, SET, SET, SET},
        {SET, SET, SET, SET, SET},
};

int lvl3solution[5][5] = {
        {RED, RED, RED, RED, RED},
        {RED, RED, RED, RED, RED},
        {RED, RED, RED, RED, RED},
        {RED, RED, RED, RED, RED},
        {RED, RED, RED, RED, RED},
};

char *lvl4[5][5] = {
        {NULL, NULL, NULL, NULL, NULL},
        {NULL, "1", "1",   "x",  NULL},
        {NULL, "1",  NULL, "1",  NULL},
        {NULL, "x", "2",   "1",  NULL},
        {NULL, NULL, NULL, NULL, NULL}
};

int lvl4default[5][5] = {
        {-1, -1,  -1,  -1,    -1},
        {-1, SET, SET, GREEN, -1},
        {-1, SET, -1,  SET,   -1},
        {-1, RED, SET, SET,   -1},
        {-1, -1,  -1,  -1,    -1}
};

int lvl4jeu[5][5] = {
        {-1, -1,  -1,  -1,    -1},
        {-1, SET, SET, GREEN, -1},
        {-1, SET, -1,  SET,   -1},
        {-1, RED, SET, SET,   -1},
        {-1, -1,  -1,  -1,    -1}
};

int lvl4solution[5][5] = {
        {-1, -1,  -1,    -1,    -1},
        {-1, RED, RED,   GREEN, -1},
        {-1, RED, -1,    GREEN, -1},
        {-1, RED, GREEN, GREEN, -1},
        {-1, -1,  -1,    -1,    -1}
};

char *lvl5[5][5] = {
        {NULL, "2", "2", "3", "3"},
        {NULL, "1", "2", "2", "x"},
        {NULL, "1", "x", "2", "1"},
        {NULL, "1", "1", "3", "3"},
        {NULL, NULL, NULL, NULL, NULL}
};

int lvl5default[5][5] = {
        {NULL, SET, SET, SET, SET},
        {NULL, SET, SET, SET, GREEN},
        {NULL, SET, RED, SET, SET},
        {NULL, SET, SET, SET, SET},
        {NULL, NULL, NULL, NULL, NULL},
};

int lvl5jeu[5][5] = {
        {NULL, SET, SET, SET, SET},
        {NULL, SET, SET, SET, GREEN},
        {NULL, SET, RED, SET, SET},
        {NULL, SET, SET, SET, SET},
        {NULL, NULL, NULL, NULL, NULL},
};

int lvl5solution[5][5] = {
        {NULL, RED, RED, RED,   RED},
        {NULL, RED, RED, RED,   GREEN},
        {NULL, RED, RED, GREEN, GREEN},
        {NULL, RED, RED, GREEN, GREEN},
        {NULL, NULL, NULL, NULL, NULL},
};

void color(int t, int f) {
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

/*
    t correspond à la couleur du texte
    f correspond à la couleur de fond

    les valeurs:
    0: noir
    1: bleu foncé
    2: vert
    3: bleu-gris
    4: marron
    5: pourpre
    6: kaki
    7: gris clair
    8: gris
    9: bleu
    10: vert fluo
    11: turquoise
    12: rouge
    13: rose fluo
    14: jaune fluo
    15: blanc
*/



bool hasChain(int i) {
    if (level == 1) {
        for (int j = 0; j < sizeof lvl1 / sizeof *lvl1; ++j) {
            for (int k = 0; k < sizeof lvl1[j] / sizeof *lvl1[j]; ++k) {
                if (lvl1default[j][k] == i) return true;
            }
        }
    } else if (level == 2) {
        for (int j = 0; j < sizeof lvl2 / sizeof *lvl2; ++j) {
            for (int k = 0; k < sizeof lvl2[j] / sizeof *lvl2[j]; ++k) {
                if (lvl2default[j][k] == i) return true;
            }
        }
    } else if (level == 3) {
        for (int j = 0; j < sizeof lvl3 / sizeof *lvl3; ++j) {
            for (int k = 0; k < sizeof lvl3[j] / sizeof *lvl3[j]; ++k) {
                if (lvl3default[j][k] == i) return true;
            }
        }
    } else if (level == 4) {
        for (int j = 0; j < sizeof lvl4 / sizeof *lvl4; ++j) {
            for (int k = 0; k < sizeof lvl4[j] / sizeof *lvl4[j]; ++k) {
                if (lvl4default[j][k] == i) return true;
            }
        }
    } else if (level == 5) {
        for (int j = 0; j < sizeof lvl5 / sizeof *lvl5; ++j) {
            for (int k = 0; k < sizeof lvl5[j] / sizeof *lvl5[j]; ++k) {
                if (lvl5default[j][k] == i) return true;
            }
        }
    }
    return false;
}

void eraseChain(int color) {
    if (level == 1) {
        for (int j = 0; j < sizeof lvl1 / sizeof *lvl1; ++j) {
            for (int k = 0; k < sizeof lvl1[j] / sizeof *lvl1[j]; ++k) {
                if (lvl1default[j][k] == SET && lvl1jeu[j][k] == color) updateArray(lvl1jeu[j], k, SET);
            }
        }
    } else if (level == 2) {
        for (int j = 0; j < sizeof lvl2 / sizeof *lvl2; ++j) {
            for (int k = 0; k < sizeof lvl2[j] / sizeof *lvl2[j]; ++k) {
                if (lvl2default[j][k] == SET && lvl2jeu[j][k] == color) updateArray(lvl2jeu[j], k, SET);
            }
        }
    } else if (level == 3) {
        for (int j = 0; j < sizeof lvl3 / sizeof *lvl3; ++j) {
            for (int k = 0; k < sizeof lvl3[j] / sizeof *lvl3[j]; ++k) {
                if (lvl3default[j][k] == SET && lvl3jeu[j][k] == color) updateArray(lvl3jeu[j], k, SET);
            }
        }
    } else if (level == 4) {
        for (int j = 0; j < sizeof lvl4 / sizeof *lvl4; ++j) {
            for (int k = 0; k < sizeof lvl4[j] / sizeof *lvl4[j]; ++k) {
                if (lvl4default[j][k] == SET && lvl4jeu[j][k] == color) updateArray(lvl4jeu[j], k, SET);
            }
        }
    } else if (level == 5) {
        for (int j = 0; j < sizeof lvl5 / sizeof *lvl5; ++j) {
            for (int k = 0; k < sizeof lvl5[j] / sizeof *lvl5[j]; ++k) {
                if (lvl5default[j][k] == SET && lvl5jeu[j][k] == color) updateArray(lvl5jeu[j], k, SET);
            }
        }
    }
    if (color == RED) {
        memcpy(coords, redfirstcoords, sizeof(redfirstcoords));
    } else if (color == GREEN) {
        memcpy(coords, greenfirstcoords, sizeof(greenfirstcoords));
    }
}

void changeChain() {
    if (curColor == RED && hasChain(GREEN)) {
        memcpy(redlastcoords, coords, sizeof(coords));
        memcpy(coords, greenlastcoords, sizeof(coords));
        curColor = GREEN;
    } else if (curColor == GREEN) {
        memcpy(greenlastcoords, coords, sizeof(coords));
        memcpy(coords, redlastcoords, sizeof(coords));
        curColor = RED;
    } else {
        printf("Aucune autre chaine n'est disponible !\n");
    }
}

void defineDefaultLastCoords() {
    if (level == 1) {
        int rcoords[2] = {2, 2};
        memcpy(redfirstcoords, rcoords, sizeof(redfirstcoords));
        memcpy(redlastcoords, redfirstcoords, sizeof(redfirstcoords));
    } else if (level == 2) {
        int rcoords[2] = {2, 1};
        memcpy(redfirstcoords, rcoords, sizeof(redfirstcoords));
        memcpy(redlastcoords, redfirstcoords, sizeof(redfirstcoords));
    } else if (level == 3) {
        int rcoords[2] = {2, 2};
        memcpy(redfirstcoords, rcoords, sizeof(redfirstcoords));
        memcpy(redlastcoords, redfirstcoords, sizeof(redfirstcoords));
    } else if (level == 4) {
        int rcoords[2] = {3, 1};
        memcpy(redfirstcoords, rcoords, sizeof(redfirstcoords));
        memcpy(redlastcoords, redfirstcoords, sizeof(redfirstcoords));
        int gcoords[2] = {1, 3};
        memcpy(greenfirstcoords, gcoords, sizeof(greenfirstcoords));
        memcpy(greenlastcoords, greenfirstcoords, sizeof(greenfirstcoords));
    } else if (level == 5) {
        int rcoords[2] = {2, 2};
        memcpy(redfirstcoords, rcoords, sizeof(redfirstcoords));
        memcpy(redlastcoords, redfirstcoords, sizeof(redfirstcoords));
        int gcoords[2] = {1, 4};
        memcpy(greenfirstcoords, gcoords, sizeof(greenfirstcoords));
        memcpy(greenlastcoords, greenfirstcoords, sizeof(greenfirstcoords));
    }
}

void restartLevel() {
    if (level == 1) {
        for (int j = 0; j < sizeof lvl1 / sizeof *lvl1; ++j) {
            for (int k = 0; k < sizeof lvl1[j] / sizeof *lvl1[j]; ++k) {
                updateArray(lvl1jeu[j], k, lvl1default[j][k]);
            }
        }
        int newcoords[2] = {2, 2};
        memcpy(coords, newcoords, sizeof(coords));
    } else if (level == 2) {
        for (int j = 0; j < sizeof lvl2 / sizeof *lvl2; ++j) {
            for (int k = 0; k < sizeof lvl2[j] / sizeof *lvl2[j]; ++k) {
                updateArray(lvl2jeu[j], k, lvl2default[j][k]);
            }
        }
        int newcoords[2] = {2, 1};
        memcpy(coords, newcoords, sizeof(coords));
    } else if (level == 3) {
        for (int j = 0; j < sizeof lvl3 / sizeof *lvl3; ++j) {
            for (int k = 0; k < sizeof lvl3[j] / sizeof *lvl3[j]; ++k) {
                updateArray(lvl3jeu[j], k, lvl3default[j][k]);
            }
        }
        int newcoords[2] = {2, 2};
        memcpy(coords, newcoords, sizeof(coords));
    } else if (level == 4) {
        for (int j = 0; j < sizeof lvl4 / sizeof *lvl4; ++j) {
            for (int k = 0; k < sizeof lvl4[j] / sizeof *lvl4[j]; ++k) {
                updateArray(lvl4jeu[j], k, lvl4default[j][k]);
            }
        }
        int newcoords[2] = {3, 1};
        memcpy(coords, newcoords, sizeof(coords));
    } else if (level == 5) {
        for (int j = 0; j < sizeof lvl5 / sizeof *lvl5; ++j) {
            for (int k = 0; k < sizeof lvl5[j] / sizeof *lvl5[j]; ++k) {
                updateArray(lvl5jeu[j], k, lvl5default[j][k]);
            }
        }
        int newcoords[2] = {2, 2};
        memcpy(coords, newcoords, sizeof(coords));
    }
    defineDefaultLastCoords();
    curColor = RED;
}

void nextLevel() {
    bool nextLevel = true;
    if (level == 1) {
        for (int j = 0; j < sizeof lvl1 / sizeof *lvl1; ++j) {
            for (int k = 0; k < sizeof lvl1[j] / sizeof *lvl1[j]; ++k) {
                if (lvl1jeu[j][k] != lvl1solution[j][k]) nextLevel = false;
            }
        }
    } else if (level == 2) {
        for (int j = 0; j < sizeof lvl2 / sizeof *lvl2; ++j) {
            for (int k = 0; k < sizeof lvl2[j] / sizeof *lvl2[j]; ++k) {
                if (lvl2jeu[j][k] != lvl2solution[j][k]) nextLevel = false;
            }
        }
    } else if (level == 3) {
        for (int j = 0; j < sizeof lvl3 / sizeof *lvl3; ++j) {
            for (int k = 0; k < sizeof lvl3[j] / sizeof *lvl3[j]; ++k) {
                if (lvl3jeu[j][k] != lvl3solution[j][k]) nextLevel = false;
            }
        }
    } else if (level == 4) {
        for (int j = 0; j < sizeof lvl4 / sizeof *lvl4; ++j) {
            for (int k = 0; k < sizeof lvl4[j] / sizeof *lvl4[j]; ++k) {
                if (lvl4jeu[j][k] != lvl4solution[j][k]) nextLevel = false;
            }
        }
    } else if (level == 5) {
        for (int j = 0; j < sizeof lvl5 / sizeof *lvl5; ++j) {
            for (int k = 0; k < sizeof lvl5[j] / sizeof *lvl5[j]; ++k) {
                if (lvl5jeu[j][k] != lvl5solution[j][k]) nextLevel = false;
            }
        }
    }

    if (nextLevel == true && level < 10) {
        level++;
        printf("\n\n\nNiveau termine ! (Niveau suivant: %d)\n\n", level);
        restartLevel();
    } else if (nextLevel == true && level == 5) {
        printf("Bien joué vous avez terminé le jeu !");
        exit(0);
    }
}

void action() {
    char action;
    char previousMove;
    if (level == 1) {
        printf("--- line: %d, column: %d, chain: %s, level: %d ---\n", coords[0], coords[1], "RED", level);
        printf("Select a direction (N, S, E, W).\n");
        printf("Erase the chain (R).\n");
        printf("Restart the level (X).\n");
        printf("Select another chain (C).\n");
        scanf("%c", &action);

        while (action != 'N' && action != 'S' && action != 'E' && action != 'W' && action != 'B' && action != 'R' &&
               action != 'X' && action != 'C') {
            scanf("%c", &action);
        }
        if (action == 'N') {
            if (lvl1jeu[coords[0] - 1][coords[1]] != -1 &&
                atoi(lvl1[coords[0]][coords[1]]) <= atoi(lvl1[coords[0] - 1][coords[1]]) &&
                lvl1jeu[coords[0] - 1][coords[1]] == SET) {
                updateArray(coords, 0, coords[0] - 1);
                updateArray(lvl1jeu[coords[0]], coords[1], lvl1jeu[coords[0] + 1][coords[1]]);
                previousMove = 'N';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'S') {
            if (lvl1jeu[coords[0] + 1][coords[1]] != -1 &&
                atoi(lvl1[coords[0]][coords[1]]) <= atoi(lvl1[coords[0] + 1][coords[1]]) &&
                lvl1jeu[coords[0] + 1][coords[1]] == SET) {
                updateArray(coords, 0, coords[0] + 1);
                updateArray(lvl1jeu[coords[0]], coords[1], lvl1jeu[coords[0] - 1][coords[1]]);
                previousMove = 'S';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'E') {
            if (lvl1jeu[coords[0]][coords[1] + 1] != -1 &&
                atoi(lvl1[coords[0]][coords[1]]) <= atoi(lvl1[coords[0]][coords[1] + 1]) &&
                lvl1jeu[coords[0]][coords[1] + 1] == SET) {
                updateArray(coords, 1, coords[1] + 1);
                updateArray(lvl1jeu[coords[0]], coords[1], lvl1jeu[coords[0]][coords[1] - 1]);
                previousMove = 'E';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'W') {
            if (lvl1jeu[coords[0]][coords[1] - 1] != -1 &&
                atoi(lvl1[coords[0]][coords[1]]) <= atoi(lvl1[coords[0]][coords[1] - 1]) &&
                lvl1jeu[coords[0]][coords[1] - 1] == SET) {
                updateArray(coords, 1, coords[1] - 1);
                updateArray(lvl1jeu[coords[0]], coords[1], lvl1jeu[coords[0]][coords[1] + 1]);
                previousMove = 'W';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'R') {
            eraseChain(curColor);
        } else if (action == 'X') {
            restartLevel();
        } else if (action == 'C') {
            changeChain();
        }
    } else if (level == 2) {
        printf("--- line: %d, column: %d, chain: %s ---\n", coords[0], coords[1], "RED");
        printf("Select a direction (N, S, E, W).\n");
        printf("Erase the chain (R).\n");
        printf("Restart the level (X).\n");
        printf("Select another chain (C).\n");
        scanf("%c", &action);

        while (action != 'N' && action != 'S' && action != 'E' && action != 'W' && action != 'B' && action != 'R' &&
               action != 'X' && action != 'C') {
            scanf("%c", &action);
        }
        if (action == 'N') {
            if (lvl2jeu[coords[0] - 1][coords[1]] != -1 &&
                atoi(lvl2[coords[0]][coords[1]]) <= atoi(lvl2[coords[0] - 1][coords[1]]) &&
                lvl2jeu[coords[0] - 1][coords[1]] == SET) {
                updateArray(coords, 0, coords[0] - 1);
                updateArray(lvl2jeu[coords[0]], coords[1], lvl2jeu[coords[0] + 1][coords[1]]);
                previousMove = 'N';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'S') {
            if (lvl2jeu[coords[0] + 1][coords[1]] != -1 &&
                atoi(lvl2[coords[0]][coords[1]]) <= atoi(lvl2[coords[0] + 1][coords[1]]) &&
                lvl2jeu[coords[0] + 1][coords[1]] == SET) {
                updateArray(coords, 0, coords[0] + 1);
                updateArray(lvl2jeu[coords[0]], coords[1], lvl2jeu[coords[0] - 1][coords[1]]);
                previousMove = 'S';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'E') {
            if (lvl2jeu[coords[0]][coords[1] + 1] != -1 &&
                atoi(lvl2[coords[0]][coords[1]]) <= atoi(lvl2[coords[0]][coords[1] + 1]) &&
                lvl2jeu[coords[0]][coords[1] + 1] == SET) {
                updateArray(coords, 1, coords[1] + 1);
                updateArray(lvl2jeu[coords[0]], coords[1], lvl2jeu[coords[0]][coords[1] - 1]);
                previousMove = 'E';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'W') {
            if (lvl2jeu[coords[0]][coords[1] - 1] != -1 &&
                atoi(lvl2[coords[0]][coords[1]]) <= atoi(lvl2[coords[0]][coords[1] - 1]) &&
                lvl2jeu[coords[0]][coords[1] - 1] == SET) {
                updateArray(coords, 1, coords[1] - 1);
                updateArray(lvl2jeu[coords[0]], coords[1], lvl2jeu[coords[0]][coords[1] + 1]);
                previousMove = 'W';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'R') {
            eraseChain(curColor);
        } else if (action == 'X') {
            restartLevel();
        } else if (action == 'C') {
            changeChain();
        }
    } else if (level == 3) {
        printf("--- line: %d, column: %d, chain: %s ---\n", coords[0], coords[1], "RED");
        printf("Select a direction (N, S, E, W).\n");
        printf("Erase the chain (R).\n");
        printf("Restart the level (X).\n");
        printf("Select another chain (C).\n");
        scanf("%c", &action);

        while (action != 'N' && action != 'S' && action != 'E' && action != 'W' && action != 'B' && action != 'R' &&
               action != 'X' && action != 'C') {
            scanf("%c", &action);
        }
        if (action == 'N') {
            if (lvl3jeu[coords[0] - 1][coords[1]] != -1 &&
                atoi(lvl3[coords[0]][coords[1]]) <= atoi(lvl3[coords[0] - 1][coords[1]]) &&
                lvl3jeu[coords[0] - 1][coords[1]] == SET) {
                updateArray(coords, 0, coords[0] - 1);
                updateArray(lvl3jeu[coords[0]], coords[1], lvl3jeu[coords[0] + 1][coords[1]]);
                previousMove = 'N';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'S') {
            if (lvl3jeu[coords[0] + 1][coords[1]] != -1 &&
                atoi(lvl3[coords[0]][coords[1]]) <= atoi(lvl3[coords[0] + 1][coords[1]]) &&
                lvl3jeu[coords[0] + 1][coords[1]] == SET) {
                updateArray(coords, 0, coords[0] + 1);
                updateArray(lvl3jeu[coords[0]], coords[1], lvl3jeu[coords[0] - 1][coords[1]]);
                previousMove = 'S';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'E') {
            if (lvl3jeu[coords[0]][coords[1] + 1] != -1 &&
                atoi(lvl3[coords[0]][coords[1]]) <= atoi(lvl3[coords[0]][coords[1] + 1]) &&
                lvl3jeu[coords[0]][coords[1] + 1] == SET) {
                updateArray(coords, 1, coords[1] + 1);
                updateArray(lvl3jeu[coords[0]], coords[1], lvl3jeu[coords[0]][coords[1] - 1]);
                previousMove = 'E';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'W') {
            if (lvl3jeu[coords[0]][coords[1] - 1] != -1 &&
                atoi(lvl3[coords[0]][coords[1]]) <= atoi(lvl3[coords[0]][coords[1] - 1]) &&
                lvl3jeu[coords[0]][coords[1] - 1] == SET) {
                updateArray(coords, 1, coords[1] - 1);
                updateArray(lvl3jeu[coords[0]], coords[1], lvl3jeu[coords[0]][coords[1] + 1]);
                previousMove = 'W';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'R') {
            eraseChain(curColor);
        } else if (action == 'X') {
            restartLevel();
        } else if (action == 'C') {
            changeChain();
        }
    } else if (level == 4) {
        printf("--- line: %d, column: %d, chain: %s ---\n", coords[0], coords[1], "RED");
        printf("Select a direction (N, S, E, W).\n");
        printf("Erase the chain (R).\n");
        printf("Restart the level (X).\n");
        printf("Select another chain (C).\n");
        scanf("%c", &action);

        while (action != 'N' && action != 'S' && action != 'E' && action != 'W' && action != 'B' && action != 'R' &&
               action != 'X' && action != 'C') {
            scanf("%c", &action);
        }
        if (action == 'N') {
            if (lvl4jeu[coords[0] - 1][coords[1]] != -1 &&
                atoi(lvl4[coords[0]][coords[1]]) <= atoi(lvl4[coords[0] - 1][coords[1]]) &&
                lvl4jeu[coords[0] - 1][coords[1]] == SET) {
                updateArray(coords, 0, coords[0] - 1);
                updateArray(lvl4jeu[coords[0]], coords[1], lvl4jeu[coords[0] + 1][coords[1]]);
                previousMove = 'N';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'S') {
            if (lvl4jeu[coords[0] + 1][coords[1]] != -1 &&
                atoi(lvl4[coords[0]][coords[1]]) <= atoi(lvl4[coords[0] + 1][coords[1]]) &&
                lvl4jeu[coords[0] + 1][coords[1]] == SET) {
                updateArray(coords, 0, coords[0] + 1);
                updateArray(lvl4jeu[coords[0]], coords[1], lvl4jeu[coords[0] - 1][coords[1]]);
                previousMove = 'S';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'E') {
            if (lvl4jeu[coords[0]][coords[1] + 1] != -1 &&
                atoi(lvl4[coords[0]][coords[1]]) <= atoi(lvl4[coords[0]][coords[1] + 1]) &&
                lvl4jeu[coords[0]][coords[1] + 1] == SET) {
                updateArray(coords, 1, coords[1] + 1);
                updateArray(lvl4jeu[coords[0]], coords[1], lvl4jeu[coords[0]][coords[1] - 1]);
                previousMove = 'E';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'W') {
            if (lvl4jeu[coords[0]][coords[1] - 1] != -1 &&
                atoi(lvl4[coords[0]][coords[1]]) <= atoi(lvl4[coords[0]][coords[1] - 1]) &&
                lvl4jeu[coords[0]][coords[1] - 1] == SET) {
                updateArray(coords, 1, coords[1] - 1);
                updateArray(lvl4jeu[coords[0]], coords[1], lvl4jeu[coords[0]][coords[1] + 1]);
                previousMove = 'W';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'R') {
            eraseChain(curColor);
        } else if (action == 'X') {
            restartLevel();
        } else if (action == 'C') {
            changeChain();
        }
    } else if (level == 5) {
        printf("--- line: %d, column: %d, chain: %s ---\n", coords[0], coords[1], "RED");
        printf("Select a direction (N, S, E, W).\n");
        printf("Erase the chain (R).\n");
        printf("Restart the level (X).\n");
        printf("Select another chain (C).\n");
        scanf("%c", &action);

        while (action != 'N' && action != 'S' && action != 'E' && action != 'W' && action != 'B' && action != 'R' &&
               action != 'X' && action != 'C') {
            scanf("%c", &action);
        }
        if (action == 'N') {
            if (lvl5jeu[coords[0] - 1][coords[1]] != -1 &&
                atoi(lvl5[coords[0]][coords[1]]) <= atoi(lvl5[coords[0] - 1][coords[1]]) &&
                lvl5jeu[coords[0] - 1][coords[1]] == SET) {
                updateArray(coords, 0, coords[0] - 1);
                updateArray(lvl5jeu[coords[0]], coords[1], lvl5jeu[coords[0] + 1][coords[1]]);
                previousMove = 'N';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'S') {
            if (lvl5jeu[coords[0] + 1][coords[1]] != -1 &&
                atoi(lvl5[coords[0]][coords[1]]) <= atoi(lvl5[coords[0] + 1][coords[1]]) &&
                lvl5jeu[coords[0] + 1][coords[1]] == SET) {
                updateArray(coords, 0, coords[0] + 1);
                updateArray(lvl5jeu[coords[0]], coords[1], lvl5jeu[coords[0] - 1][coords[1]]);
                previousMove = 'S';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'E') {
            if (lvl5jeu[coords[0]][coords[1] + 1] != -1 &&
                atoi(lvl5[coords[0]][coords[1]]) <= atoi(lvl5[coords[0]][coords[1] + 1]) &&
                lvl5jeu[coords[0]][coords[1] + 1] == SET) {
                updateArray(coords, 1, coords[1] + 1);
                updateArray(lvl5jeu[coords[0]], coords[1], lvl5jeu[coords[0]][coords[1] - 1]);
                previousMove = 'E';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'W') {
            if (lvl5jeu[coords[0]][coords[1] - 1] != -1 &&
                atoi(lvl5[coords[0]][coords[1]]) <= atoi(lvl5[coords[0]][coords[1] - 1]) &&
                lvl5jeu[coords[0]][coords[1] - 1] == SET) {
                updateArray(coords, 1, coords[1] - 1);
                updateArray(lvl5jeu[coords[0]], coords[1], lvl5jeu[coords[0]][coords[1] + 1]);
                previousMove = 'W';
            } else {
                printf("Impossible !\n");
            }
        } else if (action == 'R') {
            eraseChain(curColor);
        } else if (action == 'X') {
            restartLevel();
        } else if (action == 'C') {
            changeChain();
        }
    }
    if (curColor == RED) {
        memcpy(redlastcoords, coords, sizeof(coords));
    } else if (curColor == GREEN) {
        memcpy(greenlastcoords, coords, sizeof(coords));
    }
}


void showLevel() {
    nextLevel();
    if (level == 1) {
        printf("\nLEVEL %d\n", level);
        for (int j = 0; j < sizeof lvl1 / sizeof *lvl1; ++j) {
            for (int k = 0; k < sizeof lvl1[j] / sizeof *lvl1[j]; ++k) {
                if (lvl1[j][k] != NULL) {
                    if (lvl1jeu[j][k] == RED) {
                        if (coords[0] == j && coords[1] == k)
                            color(12, 15);
                        else
                            color(12, 0);
                        printf("%s", lvl1[j][k]);
                    } else if (lvl1jeu[j][k] == GREEN) {
                        if (coords[0] == j && coords[1] == k)
                            color(2, 15);
                        else
                            color(2, 0);
                        printf("%s", lvl1[j][k]);
                    } else {
                        if (coords[0] == j && coords[1] == k)
                            color(7, 15);
                        printf("%s", lvl1[j][k]);
                    }
                    color(7, 0);
                    printf(" ");
                } else printf("  ");
            }
            printf("\n");
        }
    } else if (level == 2) {
        printf("\nLEVEL %d\n", level);
        for (int j = 0; j < sizeof lvl2 / sizeof *lvl2; ++j) {
            for (int k = 0; k < sizeof lvl2[j] / sizeof *lvl2[j]; ++k) {
                if (lvl2[j][k] != NULL) {
                    if (lvl2jeu[j][k] == RED) {
                        if (coords[0] == j && coords[1] == k)
                            color(12, 15);
                        else
                            color(12, 0);
                        printf("%s", lvl2[j][k]);
                    } else if (lvl2jeu[j][k] == GREEN) {
                        if (coords[0] == j && coords[1] == k)
                            color(2, 15);
                        else
                            color(2, 0);
                        printf("%s", lvl2[j][k]);
                    } else {
                        if (coords[0] == j && coords[1] == k)
                            color(7, 15);
                        printf("%s", lvl2[j][k]);
                    }
                    color(7, 0);
                    printf(" ");
                } else printf("  ");
            }
            printf("\n");
        }
    } else if (level == 3) {
        printf("\nLEVEL %d\n", level);
        for (int j = 0; j < sizeof lvl3 / sizeof *lvl3; ++j) {
            for (int k = 0; k < sizeof lvl3[j] / sizeof *lvl3[j]; ++k) {
                if (lvl3[j][k] != NULL) {
                    if (lvl3jeu[j][k] == RED) {
                        if (coords[0] == j && coords[1] == k)
                            color(12, 15);
                        else
                            color(12, 0);
                        printf("%s", lvl3[j][k]);
                    } else if (lvl3jeu[j][k] == GREEN) {
                        if (coords[0] == j && coords[1] == k)
                            color(2, 15);
                        else
                            color(2, 0);
                        printf("%s", lvl3[j][k]);
                    } else {
                        if (coords[0] == j && coords[1] == k)
                            color(7, 15);
                        printf("%s", lvl3[j][k]);
                    }
                    color(7, 0);
                    printf(" ");
                } else printf("  ");
            }
            printf("\n");
        }
    } else if (level == 4) {
        printf("\nLEVEL %d\n", level);
        for (int j = 0; j < sizeof lvl4 / sizeof *lvl4; ++j) {
            for (int k = 0; k < sizeof lvl4[j] / sizeof *lvl4[j]; ++k) {
                if (lvl4[j][k] != NULL) {
                    if (lvl4jeu[j][k] == RED) {
                        if (coords[0] == j && coords[1] == k)
                            color(12, 15);
                        else
                            color(12, 0);
                        printf("%s", lvl4[j][k]);
                    } else if (lvl4jeu[j][k] == GREEN) {
                        if (coords[0] == j && coords[1] == k)
                            color(2, 15);
                        else
                            color(2, 0);
                        printf("%s", lvl4[j][k]);
                    } else {
                        if (coords[0] == j && coords[1] == k)
                            color(7, 15);
                        printf("%s", lvl4[j][k]);
                    }
                    color(7, 0);
                    printf(" ");
                } else printf("  ");
            }
            printf("\n");
        }
    } else if (level == 5) {
        printf("\nLEVEL %d\n", level);
        for (int j = 0; j < sizeof lvl5 / sizeof *lvl5; ++j) {
            for (int k = 0; k < sizeof lvl5[j] / sizeof *lvl5[j]; ++k) {
                if (lvl5[j][k] != NULL) {
                    if (lvl5jeu[j][k] == RED) {
                        if (coords[0] == j && coords[1] == k)
                            color(12, 15);
                        else
                            color(12, 0);
                        printf("%s", lvl5[j][k]);
                    } else if (lvl5jeu[j][k] == GREEN) {
                        if (coords[0] == j && coords[1] == k)
                            color(2, 15);
                        else
                            color(2, 0);
                        printf("%s", lvl5[j][k]);
                    } else {
                        if (coords[0] == j && coords[1] == k)
                            color(7, 15);
                        printf("%s", lvl5[j][k]);
                    }
                    color(7, 0);
                    printf(" ");
                } else printf("  ");
            }
            printf("\n");
        }
    }
    action();
}

#endif //MAIN_C_NIVEAU_H
