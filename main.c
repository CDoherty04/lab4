#include <stdio.h>

void find_combinations(int score)
{
    int td_2pc = 8; // Touchdown + 2-point conversion
    int td_pat = 7; // Touchdown + PAT
    int td = 6;     // Touchdown
    int fg = 3;     // Field Goal
    int safety = 2; // Safety

    // Use nested loops to find each possible combination
    for (int n_td_2pc = 0; n_td_2pc * td_2pc <= score; ++n_td_2pc)
    {
        for (int n_td_pat = 0; n_td_pat * td_pat <= score; ++n_td_pat)
        {
            for (int n_td = 0; n_td * td <= score; ++n_td)
            {
                for (int n_fg = 0; n_fg * fg <= score; ++n_fg)
                {
                    for (int n_safety = 0; n_safety * safety <= score; ++n_safety)
                    {
                        // Calculate the total score for the current combination
                        int total = n_td_2pc * td_2pc + n_td_pat * td_pat + n_td * td + n_fg * fg + n_safety * safety;

                        // Check if the total matches the target score
                        if (total == score)
                        {
                            printf("%d TD + 2pt, %d TD + PAT, %d TD, %d 3pt FG, %d Safety\n",
                                   n_td_2pc, n_td_pat, n_td, n_fg, n_safety);
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    int score;

    while (1)
    {
        // Input the desired score, if 0 or 1 is entered end the program
        printf("\nEnter 0 or 1 to STOP: ");
        printf("Enter the desired NFL score: ");
        scanf("%d", &score);

        if (score < 2)
        {
            break;
        }

        printf("All combinations for a score of %d:\n", score);
        find_combinations(score);
    }
    return 1;
}
