//wap to create quiz application.
#include <stdio.h>
int main() {
    char answer;
    int score = 0;

    printf("Welcome to the Quiz!\n");

    printf("Question 1: What is the capital of France? (a) London (b) Berlin (c) Paris (d) Madrid\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    printf("Question 2: What is 2 + 2? (a) 3 (b) 4 (c) 5 (d) 6\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    printf("Your final score is: %d/2\n", score);
    return 0;
}