#include <stdio.h>

int main() {
    int reading[7], total = 0, max = 0, min = 9999;
    int dayMax = 0, dayMin = 0, goal20 = 0, over45 = 0;
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf(" David's Weekly Reading Tracker \n");

    for (int i = 0; i < 7; i++) {
        printf("Enter reading time for %s (in minutes): ", days[i]);
        scanf("%d", &reading[i]);
        total += reading[i];

        // Check for longest and shortest reading sessions
        if (reading[i] > max) {
            max = reading[i];
            dayMax = i;
        }
        if (reading[i] < min) {
            min = reading[i];
            dayMin = i;
        }

        // Track goals
        if (reading[i] >= 20)
            goal20++;
        if (reading[i] > 45)
            over45++;
    }

    float average = total / 7.0;
    int hours = total / 60;
    int minutes = total % 60;
    float consistency = (goal20 / 7.0) * 100;

    printf("\n📖 --- Weekly Reading Summary --- 📖\n");
    printf("Total reading time: %d hours and %d minutes\n", hours, minutes);
    printf("Average daily reading time: %.2f minutes\n", average);
    printf("Longest session: %d minutes on %s\n", max, days[dayMax]);
    printf("Shortest session: %d minutes on %s\n", min, days[dayMin]);
    printf("Days met 20-min goal: %d\n", goal20);
    printf("Days read more than 45 mins: %d\n", over45);
    printf("Consistency: %.2f%%\n", consistency);

    printf("\n💬 Feedback:\n");
    if (consistency == 100)
        printf("You read every day. Keep the streak going \n");
    else if (consistency >= 70)
        printf("Just a little more consistency needed. \n");
    else
        printf(" Try to make reading a daily habit \n");

    return 0;
}
