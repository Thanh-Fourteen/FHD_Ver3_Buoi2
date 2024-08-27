#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        // Calculate time taken by each elevator to reach Hung
        int time_elevator_1 = a - 1; // Elevator 1 to floor 1
        int time_elevator_2 = abs(b - c) + (c - 1); // Elevator 2 to floor c, then to floor 1

        // Determine which elevator is faster
        if (time_elevator_1 < time_elevator_2)
            printf("1\n");
        else if (time_elevator_1 > time_elevator_2)
            printf("2\n");
        else
            printf("3\n");
    }

    return 0;
}

