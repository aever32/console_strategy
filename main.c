int main_menu() {

    printf("Главное меню: \n##########\n");
    printf("1. Новая игра\n");
    printf("2. Загрузка\n");
    printf("3. Выход\n##########\n");

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
