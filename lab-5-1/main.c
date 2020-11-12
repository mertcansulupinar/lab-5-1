#include <stdio.h>
#include <stdlib.h>

int main()
{

    //first question

    int X;
    printf("******First question******\n");
    printf("Please enter a number: ");
    scanf("%d", &X);

    do{
        printf("%d  ", X);
        X = X-1;
    }while(X>=1);
    printf("\n***************************\n");

    getch();


    //second question

    int num = 0;

    printf("******Second question******\n");

    while(num <= 14210){
        printf("%d, ", num);
        num = num+7;
    }

    printf("\n***************************\n");

    getch();


    //third question

    int numStudent, grade, total;
    float average;

    total = 0;
    numStudent = 0;

    printf("******Third question******\n");
    printf("\n!!!Enter -1 when finished!!!\n");

    while(grade!=-1){

        numStudent++;

        printf("\nWhat is the exam score of student %d?> ", numStudent);
        scanf("%d", &grade);

        total = total + grade;

    }

    average = (float) (total+1) / (numStudent - 1);

    printf("\nThe average exam score is %.2f", average);
    printf("\n***************************\n");

    getch();


    //fourth question

    int times = 1;

    printf("******Fourth question******\n");

    while(times<=100){
        printf("XXXOXXX\n");
        times++;
    }
    printf("\n***************************\n");

    getch();
    return 0;
}
