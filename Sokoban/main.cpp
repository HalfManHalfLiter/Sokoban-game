#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void autor();

void menu();

void instrukcja();

void level1();

void level2();

void level3();

void level4();

int main(){
    autor();
    int level1_complete, level2_complete, level3_complete;
    level1_complete = 0;
    level2_complete = 0;
    level3_complete = 0;

    return 0;
}
void autor() {
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "                               .d8888. d88888D db    db .88b  d88.  .d88b.  d8b   db      d8888b. db       .d8b.  d888888b  .d8b.  \n";
    cout << "                               88'  YP YP  d8' `8b  d8' 88'YbdP`88 .8P  Y8. 888o  88      88  `8D 88      d8' `8b `~~88~~' d8' `8b \n";
    cout << "                               `8bo.      d8'   `8bd8'  88  88  88 88    88 88V8o 88      88oodD' 88      88ooo88    88    88ooo88 \n";
    cout << "                                 `Y8b.   d8'      88    88  88  88 88    88 88 V8o88      88~~~   88      88~~~88    88    88~~~88 \n";
    cout << "                               db   8D  d8' db    88    88  88  88 `8b  d8' 88  V888      88      88booo. 88   88    88    88   88 \n";
    cout << "                               `8888Y' d88888P    YP    YP  YP  YP  `Y88P'  VP   V8P      88      Y88888P YP   YP    YP    YP   YP \n\n\n";
    cout << endl << endl << endl << endl << endl << endl;

    cout << "                                                                 P R E S S  E N T E R\n\n\n\n\n\n\n\n\n\n";
    int znak;
    znak = _getch();
    if (znak == 13) {
        system("cls");
        menu();
    }

    }

void menu() {
    cout << endl << endl << endl << endl << "\n\n\n\n\n\n";
    cout << "                O)) O)             O))))            O))   O))             O))))            O)) O))                O)              O)))     O))\n";
    cout << "              O))    O))         O))    O))         O))  O))            O))    O))         O)    O))             O) ))            O) O))   O))\n";
    cout << "               O))             O))        O))       O)) O))           O))        O))       O)     O))           O)  O))           O)) O))  O))\n";
    cout << "                 O))           O))        O))       O) O)             O))        O))       O))) O)             O))   O))          O))  O)) O))\n";
    cout << "                    O))        O))        O))       O))  O))          O))        O))       O)     O))         O)))))) O))         O))   O) O))\n";
    cout << "              O))    O))         O))     O))        O))   O))           O))     O))        O)      O)        O))       O))        O))    O) ))\n";
    cout << "                O)) O)             O))))            O))     O))           O))))            O)))) O))        O))         O))       O))      O))\n\n\n\n\n\n\n\n\n";
    cout << "                                                                   | 1.  NEW GAME   |\n";
    cout << "                                                                   | 2.   LEVELS    |\n";
    cout << "                                                                   | 3.   AUTOR     |\n";
    cout << "                                                                   | 4.  QUIT GAME  |\n";
    cout << endl << endl << endl << endl << endl << endl << "\n\n\n\n\n\n";
    cout << "Operacja: ";
    int znak;
    cin >> znak;
    if (znak == 1) {
        system("cls");
        instrukcja();
    } if (znak == 2) {
        cout << "                                                                   | 1.  Level 1   |\n";
        cout << "                                                                   | 2.  Level 2   |\n";
        cout << "                                                                   | 3.  Level 3   |\n";
        cout << "                                                                   | 4.  Level 4   |\n\n\n";
            int znak2;
            cout << "Operacja: ";
            cin >> znak2;
            if (znak2 == 1) {
                level1();
            } if (znak2 == 2) {
                    level2();
            } if (znak2 == 3) {
                level3();
            } if (znak2 == 4) {
                level4();
            }

    } if (znak == 3) {
        autor();
    } else if (znak == 4) {
        exit(0);
    }
}

void instrukcja() {
    cout << "W - Ruch postacia w gore\n\n";
    cout << "A - Ruch postacia w lewo\n\n";
    cout << "S - Ruch postacia w dol\n\n";
    cout << "D - Ruch postacia w prawo\n\n";
    cout << "Q - Powrot do menu\n\n";
    cout << "                                                                 P R E S S  E N T E R\n\n\n\n\n\n\n\n\n\n";
    int znak;
    znak = _getch();
    if (znak == 13) {
        system("cls");
        level1();
    }
}

void level1() {
    int level1_complete;
    level1_complete = 0;
    char level1[6][6] = {
        {'#','#','#','#','#','#'},
        {'#','_','_','_','_','#'},
        {'#','_','_','_','_','#'},
        {'#','_','_','_','_','#'},
        {'#','_','_','_','_','#'},
        {'#','#','#','#','#','#'}
    };

    //Pozycje postaci oraz obiektów
    int skrz1_x = 2;
    int skrz1_y = 2;

    int skrz2_x = 3;
    int skrz2_y = 3;

    int magaz_x = 1;
    int magaz_y = 1;

    int cel1_x = 3;
    int cel1_y = 3;

    int cel2_x = 3;
    int cel2_y = 4;

    int ruchy;
    ruchy = 25;

    bool win = false;

    while (!win) {
        system("cls");

        //Rysowanie mapy
        for (int i = 0; i < 6; i++) {

            for (int j = 0; j < 6; j++) {
                if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                    cout << "O ";
                }
                else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                    cout << "O ";
                }
                else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                    cout << "O ";
                }
                else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                    cout << "O ";
                }
                else if (i == skrz1_x && j == skrz1_y) {
                    cout << "X ";
                }
                else if (i == skrz2_x && j == skrz2_y) {
                    cout << "X ";
                }
                else if (i == magaz_x && j == magaz_y) {
                    cout << "@ ";
                }
                else if (i == cel1_x && j == cel1_y) {
                    cout << "? ";
                }
                else if (i == cel2_x && j == cel2_y) {
                    cout << "? ";
                }
                else {
                    cout << level1[i][j] << " ";
                }
            } cout << "\n";
        } cout << endl << "Pozostale ruchy: " << ruchy << endl << endl;
        cout << "Operacja: ";

        //Mechanizm poruszania sie magazyniera
        char ruch;
        cin >> ruch;

        if (ruch == 'w' || ruch == 'W') {
            if (level1[magaz_x - 1][magaz_y] != '#') {
                magaz_x--;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x - 1][skrz1_y] != '#') {
                        skrz1_x--;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x - 1][skrz2_y] != '#') {
                        skrz2_x--;
                    }
                } ruchy--;
            }
        }


        else if (ruch == 'a' || ruch == 'A') {
            if (level1[magaz_x][magaz_y - 1] != '#') {
                magaz_y--;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x][skrz1_y - 1] != '#') {
                        skrz1_y--;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x][skrz2_y - 1] != '#') {
                        skrz2_y--;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 's' || ruch == 'S') {
            if (level1[magaz_x + 1][magaz_y] != '#') {
                magaz_x++;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x + 1][skrz1_y] != '#') {
                        skrz1_x++;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x + 1][skrz2_y] != '#') {
                        skrz2_x++;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 'd' || ruch == 'D') {
            if (level1[magaz_x][magaz_y + 1] != '#') {
                magaz_y++;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x][skrz1_y + 1] != '#') {
                        skrz1_y++;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x][skrz2_y + 1] != '#') {
                        skrz2_y++;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 'q' || ruch == 'Q') {
            menu();
        }


        //Przegrana
        if (ruchy <= 0) {
            win = false;
            system("cls");
            for (int i = 0; i < 6; i++) {

                for (int j = 0; j < 6; j++) {
                    if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == skrz1_x && j == skrz1_y) {
                        cout << "X ";
                    }
                    else if (i == skrz2_x && j == skrz2_y) {
                        cout << "X ";
                    }
                    else if (i == magaz_x && j == magaz_y) {
                        cout << "@ ";
                    }
                    else if (i == cel1_x && j == cel1_y) {
                        cout << "? ";
                    }
                    else if (i == cel2_x && j == cel2_y) {
                        cout << "? ";
                    }
                    else {
                        cout << level1[i][j] << " ";
                    }
                } cout << "\n";
            } cout << "Przegrales :(";
            exit(0);
        }

        //Wygrana
        if ((skrz1_x == cel1_x && skrz1_y == cel1_y && skrz2_x == cel2_x && skrz2_y == cel2_y) || (skrz1_x == cel2_x && skrz1_y == cel2_y && skrz2_x == cel1_x && skrz2_y == cel1_y)) {
            win = true;
            system("cls");
            for (int i = 0; i < 6; i++) {

                for (int j = 0; j < 6; j++) {
                    if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == skrz1_x && j == skrz1_y) {
                        cout << "X ";
                    }
                    else if (i == skrz2_x && j == skrz2_y) {
                        cout << "X ";
                    }
                    else if (i == magaz_x && j == magaz_y) {
                        cout << "@ ";
                    }
                    else if (i == cel1_x && j == cel1_y) {
                        cout << "? ";
                    }
                    else if (i == cel2_x && j == cel2_y) {
                        cout << "? ";
                    }
                    else {
                        cout << level1[i][j] << " ";
                    }
                } cout << "\n";
            } cout << "Wygrales!";
            cout << "                                                                 P R E S S  E N T E R\n\n\n\n\n\n\n\n\n\n";
            level1_complete = 1;
            int znak;
            znak = _getch();
            if (znak == 13) {
                system("cls");
                level2();
            }
        }
    }
}

void level2() {
    system("cls");
    char level1[9][9] = {
            {'#','#','#','#','#','#','#','#','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','_','_','#','#','#','#','#','#'},
            {'#','_','_','#','#','#','#','#','#'},
            {'#','_','_','#','#','#','#','#','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','#','#','#','#','#','#','#','#'}
    };

    //Pozycje postaci oraz obiektów
    int skrz1_x = 2;
    int skrz1_y = 5;

    int skrz2_x = 2;
    int skrz2_y = 3;

    int magaz_x = 1;
    int magaz_y = 1;

    int cel1_x = 7;
    int cel1_y = 2;

    int cel2_x = 7;
    int cel2_y = 6;

    int ruchy;
    ruchy = 65;

    bool win = false;

    while (!win) {
        system("cls");

        //Rysowanie mapy
        for (int i = 0; i < 9; i++) {

            for (int j = 0; j < 9; j++) {
                if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                    cout << "O ";
                }
                else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                    cout << "O ";
                }
                else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                    cout << "O ";
                }
                else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                    cout << "O ";
                }
                else if (i == skrz1_x && j == skrz1_y) {
                    cout << "X ";
                }
                else if (i == skrz2_x && j == skrz2_y) {
                    cout << "X ";
                }
                else if (i == magaz_x && j == magaz_y) {
                    cout << "@ ";
                }
                else if (i == cel1_x && j == cel1_y) {
                    cout << "? ";
                }
                else if (i == cel2_x && j == cel2_y) {
                    cout << "? ";
                }
                else {
                    cout << level1[i][j] << " ";
                }
            } cout << "\n";
        } cout << endl << "Pozostale ruchy: " << ruchy << endl << endl;
        cout << "Operacja: ";

        //Mechanizm poruszania sie magazyniera
        char ruch;
        cin >> ruch;

        if (ruch == 'w' || ruch == 'W') {
            if (level1[magaz_x - 1][magaz_y] != '#') {
                magaz_x--;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x - 1][skrz1_y] != '#') {
                        skrz1_x--;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x - 1][skrz2_y] != '#') {
                        skrz2_x--;
                    }
                } ruchy--;
            }
        }


        else if (ruch == 'a' || ruch == 'A') {
            if (level1[magaz_x][magaz_y - 1] != '#') {
                magaz_y--;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x][skrz1_y - 1] != '#') {
                        skrz1_y--;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x][skrz2_y - 1] != '#') {
                        skrz2_y--;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 's' || ruch == 'S') {
            if (level1[magaz_x + 1][magaz_y] != '#') {
                magaz_x++;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x + 1][skrz1_y] != '#') {
                        skrz1_x++;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x + 1][skrz2_y] != '#') {
                        skrz2_x++;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 'd' || ruch == 'D') {
            if (level1[magaz_x][magaz_y + 1] != '#') {
                magaz_y++;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x][skrz1_y + 1] != '#') {
                        skrz1_y++;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x][skrz2_y + 1] != '#') {
                        skrz2_y++;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 'q' || ruch == 'Q') {
            menu();
        }


        //Przegrana
        if (ruchy <= 0) {
            win = false;
            system("cls");
            for (int i = 0; i < 9; i++) {

                for (int j = 0; j < 9; j++) {
                    if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == skrz1_x && j == skrz1_y) {
                        cout << "X ";
                    }
                    else if (i == skrz2_x && j == skrz2_y) {
                        cout << "X ";
                    }
                    else if (i == magaz_x && j == magaz_y) {
                        cout << "@ ";
                    }
                    else if (i == cel1_x && j == cel1_y) {
                        cout << "? ";
                    }
                    else if (i == cel2_x && j == cel2_y) {
                        cout << "? ";
                    }
                    else {
                        cout << level1[i][j] << " ";
                    }
                } cout << "\n";
            } cout << "Przegrales :(";
            exit(0);
        }

        //Wygrana
        if ((skrz1_x == cel1_x && skrz1_y == cel1_y && skrz2_x == cel2_x && skrz2_y == cel2_y) || (skrz1_x == cel2_x && skrz1_y == cel2_y && skrz2_x == cel1_x && skrz2_y == cel1_y)) {
            win = true;
            system("cls");
            for (int i = 0; i < 9; i++) {

                for (int j = 0; j < 9; j++) {
                    if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == skrz1_x && j == skrz1_y) {
                        cout << "X ";
                    }
                    else if (i == skrz2_x && j == skrz2_y) {
                        cout << "X ";
                    }
                    else if (i == magaz_x && j == magaz_y) {
                        cout << "@ ";
                    }
                    else if (i == cel1_x && j == cel1_y) {
                        cout << "? ";
                    }
                    else if (i == cel2_x && j == cel2_y) {
                        cout << "? ";
                    }
                    else {
                        cout << level1[i][j] << " ";
                    }
                } cout << "\n";
            } cout << "Wygrales!";
            cout << "                                                                 P R E S S  E N T E R\n\n\n\n\n\n\n\n\n\n";
            int znak;
            znak = _getch();
            if (znak == 13) {
                system("cls");
                level3();
            }
        }
    }
}

void level3() {
    system("cls");
    char level1[9][9] = {
            {'#','#','#','#','#','#','#','#','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','#','#','#','#','#','_','_','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','#','#','#','#','#','_','_','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','#','#','#','#','#','#','#','#'}
    };

    //Pozycje postaci oraz obiektów
    int skrz1_x = 2;
    int skrz1_y = 6;

    int skrz2_x = 2;
    int skrz2_y = 2;

    int magaz_x = 1;
    int magaz_y = 1;

    int cel1_x = 4;
    int cel1_y = 1;

    int cel2_x = 7;
    int cel2_y = 1;

    int ruchy;
    ruchy = 80;

    bool win = false;

    while (!win) {
        system("cls");

        //Rysowanie mapy
        for (int i = 0; i < 9; i++) {

            for (int j = 0; j < 9; j++) {
                if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                    cout << "O ";
                }
                else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                    cout << "O ";
                }
                else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                    cout << "O ";
                }
                else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                    cout << "O ";
                }
                else if (i == skrz1_x && j == skrz1_y) {
                    cout << "X ";
                }
                else if (i == skrz2_x && j == skrz2_y) {
                    cout << "X ";
                }
                else if (i == magaz_x && j == magaz_y) {
                    cout << "@ ";
                }
                else if (i == cel1_x && j == cel1_y) {
                    cout << "? ";
                }
                else if (i == cel2_x && j == cel2_y) {
                    cout << "? ";
                }
                else {
                    cout << level1[i][j] << " ";
                }
            } cout << "\n";
        } cout << endl << "Pozostale ruchy: " << ruchy << endl << endl;
        cout << "Operacja: ";

        //Mechanizm poruszania sie magazyniera
        char ruch;
        cin >> ruch;

        if (ruch == 'w' || ruch == 'W') {
            if (level1[magaz_x - 1][magaz_y] != '#') {
                magaz_x--;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x - 1][skrz1_y] != '#') {
                        skrz1_x--;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x - 1][skrz2_y] != '#') {
                        skrz2_x--;
                    }
                } ruchy--;
            }
        }


        else if (ruch == 'a' || ruch == 'A') {
            if (level1[magaz_x][magaz_y - 1] != '#') {
                magaz_y--;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x][skrz1_y - 1] != '#') {
                        skrz1_y--;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x][skrz2_y - 1] != '#') {
                        skrz2_y--;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 's' || ruch == 'S') {
            if (level1[magaz_x + 1][magaz_y] != '#') {
                magaz_x++;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x + 1][skrz1_y] != '#') {
                        skrz1_x++;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x + 1][skrz2_y] != '#') {
                        skrz2_x++;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 'd' || ruch == 'D') {
            if (level1[magaz_x][magaz_y + 1] != '#') {
                magaz_y++;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x][skrz1_y + 1] != '#') {
                        skrz1_y++;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x][skrz2_y + 1] != '#') {
                        skrz2_y++;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 'q' || ruch == 'Q') {
            menu();
        }


        //Przegrana
        if (ruchy <= 0) {
            win = false;
            system("cls");
            for (int i = 0; i < 9; i++) {

                for (int j = 0; j < 9; j++) {
                    if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == skrz1_x && j == skrz1_y) {
                        cout << "X ";
                    }
                    else if (i == skrz2_x && j == skrz2_y) {
                        cout << "X ";
                    }
                    else if (i == magaz_x && j == magaz_y) {
                        cout << "@ ";
                    }
                    else if (i == cel1_x && j == cel1_y) {
                        cout << "? ";
                    }
                    else if (i == cel2_x && j == cel2_y) {
                        cout << "? ";
                    }
                    else {
                        cout << level1[i][j] << " ";
                    }
                } cout << "\n";
            } cout << "Przegrales :(";
            exit(0);
        }

        //Wygrana
        if ((skrz1_x == cel1_x && skrz1_y == cel1_y && skrz2_x == cel2_x && skrz2_y == cel2_y) || (skrz1_x == cel2_x && skrz1_y == cel2_y && skrz2_x == cel1_x && skrz2_y == cel1_y)) {
            win = true;
            system("cls");
            for (int i = 0; i < 9; i++) {

                for (int j = 0; j < 9; j++) {
                    if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == skrz1_x && j == skrz1_y) {
                        cout << "X ";
                    }
                    else if (i == skrz2_x && j == skrz2_y) {
                        cout << "X ";
                    }
                    else if (i == magaz_x && j == magaz_y) {
                        cout << "@ ";
                    }
                    else if (i == cel1_x && j == cel1_y) {
                        cout << "? ";
                    }
                    else if (i == cel2_x && j == cel2_y) {
                        cout << "? ";
                    }
                    else {
                        cout << level1[i][j] << " ";
                    }
                } cout << "\n";
            } cout << "Wygrales!";
            cout << "                                                                 P R E S S  E N T E R\n\n\n\n\n\n\n\n\n\n";
            int znak;
            znak = _getch();
            if (znak == 13) {
                system("cls");
                level4();
            }
        }
    }
}

void level4() {
    system("cls");
    char level1[9][9] = {
            {'#','#','#','#','#','#','#','#','#'},
            {'#','_','_','_','#','_','_','_','#'},
            {'#','_','#','_','_','_','#','_','#'},
            {'#','#','#','#','#','#','#','_','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','#','#','#','#','#','#','_','#'},
            {'#','_','_','_','_','_','#','_','#'},
            {'#','_','_','_','_','_','_','_','#'},
            {'#','#','#','#','#','#','#','#','#'}
    };

    //Pozycje postaci oraz obiektów
    int skrz1_x = 6;
    int skrz1_y = 7;

    int skrz2_x = 4;
    int skrz2_y = 6;

    int magaz_x = 2;
    int magaz_y = 1;

    int cel1_x = 4;
    int cel1_y = 1;

    int cel2_x = 7;
    int cel2_y = 1;

    int ruchy;
    ruchy = 80;

    bool win = false;

    while (!win) {
        system("cls");

        //Rysowanie mapy
        for (int i = 0; i < 9; i++) {

            for (int j = 0; j < 9; j++) {
                if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                    cout << "O ";
                }
                else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                    cout << "O ";
                }
                else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                    cout << "O ";
                }
                else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                    cout << "O ";
                }
                else if (i == skrz1_x && j == skrz1_y) {
                    cout << "X ";
                }
                else if (i == skrz2_x && j == skrz2_y) {
                    cout << "X ";
                }
                else if (i == magaz_x && j == magaz_y) {
                    cout << "@ ";
                }
                else if (i == cel1_x && j == cel1_y) {
                    cout << "? ";
                }
                else if (i == cel2_x && j == cel2_y) {
                    cout << "? ";
                }
                else {
                    cout << level1[i][j] << " ";
                }
            } cout << "\n";
        } cout << endl << "Pozostale ruchy: " << ruchy << endl << endl;
        cout << "Operacja: ";

        //Mechanizm poruszania sie magazyniera
        char ruch;
        cin >> ruch;

        if (ruch == 'w' || ruch == 'W') {
            if (level1[magaz_x - 1][magaz_y] != '#') {
                magaz_x--;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x - 1][skrz1_y] != '#') {
                        skrz1_x--;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x - 1][skrz2_y] != '#') {
                        skrz2_x--;
                    }
                } ruchy--;
            }
        }


        else if (ruch == 'a' || ruch == 'A') {
            if (level1[magaz_x][magaz_y - 1] != '#') {
                magaz_y--;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x][skrz1_y - 1] != '#') {
                        skrz1_y--;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x][skrz2_y - 1] != '#') {
                        skrz2_y--;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 's' || ruch == 'S') {
            if (level1[magaz_x + 1][magaz_y] != '#') {
                magaz_x++;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x + 1][skrz1_y] != '#') {
                        skrz1_x++;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x + 1][skrz2_y] != '#') {
                        skrz2_x++;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 'd' || ruch == 'D') {
            if (level1[magaz_x][magaz_y + 1] != '#') {
                magaz_y++;
                if (magaz_x == skrz1_x && magaz_y == skrz1_y) {
                    if (level1[skrz1_x][skrz1_y + 1] != '#') {
                        skrz1_y++;
                    }
                } if (magaz_x == skrz2_x && magaz_y == skrz2_y) {
                    if (level1[skrz2_x][skrz2_y + 1] != '#') {
                        skrz2_y++;
                    }
                } ruchy--;
            }
        }

        else if (ruch == 'q' || ruch == 'Q') {
            menu();
        }


        //Przegrana
        if (ruchy <= 0) {
            win = false;
            system("cls");
            for (int i = 0; i < 9; i++) {

                for (int j = 0; j < 9; j++) {
                    if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == skrz1_x && j == skrz1_y) {
                        cout << "X ";
                    }
                    else if (i == skrz2_x && j == skrz2_y) {
                        cout << "X ";
                    }
                    else if (i == magaz_x && j == magaz_y) {
                        cout << "@ ";
                    }
                    else if (i == cel1_x && j == cel1_y) {
                        cout << "? ";
                    }
                    else if (i == cel2_x && j == cel2_y) {
                        cout << "? ";
                    }
                    else {
                        cout << level1[i][j] << " ";
                    }
                } cout << "\n";
            } cout << "Przegrales :(";
            exit(0);
        }

        //Wygrana
        if ((skrz1_x == cel1_x && skrz1_y == cel1_y && skrz2_x == cel2_x && skrz2_y == cel2_y) || (skrz1_x == cel2_x && skrz1_y == cel2_y && skrz2_x == cel1_x && skrz2_y == cel1_y)) {
            win = true;
            system("cls");
            for (int i = 0; i < 9; i++) {

                for (int j = 0; j < 9; j++) {
                    if (i == cel1_x && j == cel1_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz2_x && j == skrz2_y) {
                        cout << "O ";
                    }
                    else if (i == cel1_x && j == cel1_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == cel2_x && j == cel2_y && i == skrz1_x && j == skrz1_y) {
                        cout << "O ";
                    }
                    else if (i == skrz1_x && j == skrz1_y) {
                        cout << "X ";
                    }
                    else if (i == skrz2_x && j == skrz2_y) {
                        cout << "X ";
                    }
                    else if (i == magaz_x && j == magaz_y) {
                        cout << "@ ";
                    }
                    else if (i == cel1_x && j == cel1_y) {
                        cout << "? ";
                    }
                    else if (i == cel2_x && j == cel2_y) {
                        cout << "? ";
                    }
                    else {
                        cout << level1[i][j] << " ";
                    }
                } cout << "\n";
            } cout << "Wygrales! Dziekuje za gre!";
        }
    }
}
