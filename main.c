#include <stdio.h>

void find_combinations(int score) {
    int td_2pc = 8;  // Touchdown + 2-point conversion
    int td_pat = 7;  // Touchdown + PAT
    int td = 6;      // Touchdown
    int fg = 3;      // Field Goal
    int safety = 2;  // Safety

    // Use nested loops to find each possible combination?
    
}

void main() {
    int score;

    // Input the desired score
    printf("Enter the desired NFL score: ");
    scanf("%d", &score);

    printf("All combinations for a score of %d:\n", score);
    find_combinations(score);
}
