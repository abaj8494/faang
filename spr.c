#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int abs(int n) { return (n >= 0) ? n : -n; }

char *result(int c, int pc);

int main(void)
{
    srand(time(NULL));
    int rand_int = rand() % 3;
    char cpu[] = {'s', 'p', 'r'};
    int pc = cpu[rand_int];

    char c;
    while (c != 's' && c != 'x' && c != 'r') {
        printf("Enter your selection: ");
        c = getchar();
    }
                       
    char *pc_string;
    switch(pc) {
        case 's':
            pc_string = "scissors";
            break;
        case 'p':
            pc_string = "paper";
            break;
        case 'r':
            pc_string = "rock";
            break;
    }
    printf("The PC chose: %s\n", pc_string);
    printf("%s", result(c, pc));
}

char *result(int c, int pc) {
    int diff = abs(c - pc);
    char *str = malloc(40);
    switch (diff) {
        case (0):
            str = "It's a draw!\n";    
            break;
        case (1):
            str = "Rock beats scissors!\n";
            break;
        case (2):
            str = "Paper beats Rock!\n";
            break;
        case (3):
            str = "Scissors beats paper!\n";
            break;
    }
    return str;
}
