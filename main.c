#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
    int answer = 59; 
    int guess; 
    int attempts = 0; 

    do {
        printf("guess a number: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < answer) {
            printf("Low!\n");
        } else if (guess > answer) {
            printf("High!\n");
        } else {
            printf("congratulation! trials: %d\n", attempts);
        }
    } while (guess != answer);
    
    system("PAUSE");
    return 0;
}



















