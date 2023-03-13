#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define SIZE 4

int check_digit(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            return 1;
        }
        i++;
    }
    return 0;
}

void convert_to_int(int* arr, char* str) {
    int i = 0;
    while (str[i] != '\0') {
        arr[i] = str[i] - '0';
        i++;
    }
}

int* rand_number() {
    int* arr = malloc(SIZE * sizeof(int));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 10;
    }
    return arr;
}

int main(int argc, char** argv) {
    int* hidden_code = NULL;
    int num_generated = 10;
    int round = 0;
    int* predict = malloc(SIZE * sizeof(int));

    if (argc > 2) {
        if (check_digit(argv[2]) != 0 || strlen(argv[2]) != 4) {
            printf("Wrong input %s passed\n", argv[2]);
            hidden_code = rand_number();
        } else {
            if (strcmp(argv[1], "-c") == 0) {
                hidden_code = malloc(SIZE * sizeof(int));
                convert_to_int(hidden_code, argv[2]);
            } else if (strcmp(argv[1], "-t") == 0) {
                num_generated = atoi(argv[2]);
                if (num_generated > 10) {
                    num_generated = 10;
                }
            }
        }
    } else {
        hidden_code = rand_number();
    }

    printf("Will you find the secret code?\n");
    printf("Please enter a valid guess\n");

    while (num_generated > 0) {
        printf("\nRound %d\n", round);
        round++;

        int well_placed = 0, miss_placed = 0;
        char* buffering = malloc(5 * sizeof(char));
        if (buffering == NULL) {
            printf("Memory Allocation failed!\n");
            return 1;
        }

        ssize_t a = read(0, buffering, 5);
        if (a <= 1) {
            num_generated--;
            continue;
        } else {
            buffering[a - 1] = '\0';
        }

        if (check_digit(buffering) != 0) {
            printf("Wrong input passed.\n");
            num_generated--;
            continue;
        } else {
            convert_to_int(predict, buffering);
        }

        for (int i = 0; i < SIZE; i++) {
            if (hidden_code[i] == predict[i]) {
                well_placed++;
            } else {
                for (int j = 0; j < SIZE; j++) {
                    if (hidden_code[i] == predict[j] && i != j) {
                        miss_placed++;
                        break;
                    }
                }
            }
        }

        if (well_placed == 4) {
            printf("Congratz! You did it!\n");
            break;
        } else {
            printf("Well placed pieces: %d\nMisplaced pieces: %d\n", well_placed, miss_placed);
            num_generated--;
        }

        free(buffering);
    }

    free(hidden_code);
    free(predict);
    return 0;
}
