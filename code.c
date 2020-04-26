#include <stdio.h>
#include <stdlib.h>

int main() {
    int test1_positive = rand() % 2;
    int test2_positive = rand() % 2;
    int test3_positive = rand() % 2;
    if (test1_positive) {
        if (test2_positive) {
            printf("Unfortunately! You are confirmed with COVID-19.");
        } else {
            if (test3_positive) {
                printf("Unfortunately! You are confirmed with COVID-19.");
            } else {
                printf("Congratulations! You are not infected!");
            }
        }
    } else {
        if (test2_positive) {
            if (test3_positive) {
                printf("Unfortunately! You are confirmed with COVID-19.");
            } else {
                printf("Congratulations! You are not infected!");
            }
        } else {
            printf("Congratulations! You are not infected!");
        }
    }

    return 0;
}
