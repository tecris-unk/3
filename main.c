#include "functions.h"

int main() {

    while(1)
    {
        printf("Enter task number: ");
        int choice;
        setNumber(&choice);

        switch(choice)
        {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            default:
                printf("There is no this task, try again\n");
                Sleep(1000);
                system("cls");
                continue;
        }
        printf("Do you want to continue? ");
        if(!getAnswer()){return 0;}
        system("cls");
    }
}
