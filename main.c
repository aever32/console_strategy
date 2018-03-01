#include <stdio.h>

int main_menu() {

    printf("#################\n"
           "# Главное меню: #\n"
           "#---------------#\n"
           "# 1. Новая игра #\n"
           "# 2. Сохранить  #\n"
           "# 3. Загрузить  #\n"
           "# 4. Выход      #\n"
           "#################\n");

    int choice = 0, num = 0;

    while(1) {
        if (scanf("%d", &num) == 1) {
            switch(num) {
            case 1:
                choice = 1;
                break;
            case 2:
                choice = 2;
                break;
            case 3:
                choice = 3;
                break;
            case 4:
                choice = 4;
                break;
            default:
                printf("Попробуйте ещё...\n");
                continue;
            }
        }
        break;
    }
    return choice;
}

int main(int argc, char *argv[])
{
    // Вызов главного меню

    int choice = main_menu();
    printf("Test %d\n", choice);

    return 0;
}
