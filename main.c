#include <stdio.h>
#include <ncurses.h>

void ShowMainMenu(void);
int ChoiceMainMenu(void);

struct building {
    unsigned int id;
    char *name;
    int life;
    int energy;
};

int main(int argc, char *argv[])
{
    initscr(); // Инициализация ncurses

    ShowMainMenu(); // Вызов главного меню
    int choice = ChoiceMainMenu();

    printw("Test %d\n", choice);
    refresh(); //Обновление экрана

    getch();
    endwin();
    return 0;
}

void ShowMainMenu(void) {

    printw("#################\n"
           "# Main menu:    #\n"
           "#---------------#\n"
           "# 1. New game   #\n"
           "# 2. Save       #\n"
           "# 3. Load       #\n"
           "# 4. Out        #\n"
           "#################\n");
    refresh();
}

int ChoiceMainMenu(void){
    int choice = 0, num = 0;

    while(choice == 0) {
        num = getch();
        switch(num) {
            case 49:        // code key "1"
                choice = 1;
                break;
            case 50:
                choice = 2;
                break;
            case 51:
                choice = 3;
                break;
            case 52:
                choice = 4;
                break;
            default:
                continue;
        }
    }
    return choice;
}
