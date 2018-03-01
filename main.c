#include <stdio.h>

int main_menu() {

    printf("#################\n");
    printf("# Главное меню: #\n");
    printf("#---------------#\n");
    printf("# 1. Новая игра #\n");
    printf("# 2. Сохранить  #\n");
    printf("# 3. Загрузить  #\n");
    printf("# 4. Выход      #\n");
    printf("#################\n");

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

int main()
{
    // Вызов главного меню

    int choice = main_menu();
    printf("Test %d\n", choice);

    return 0;
}
