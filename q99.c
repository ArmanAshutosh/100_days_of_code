#include <stdio.h>
#include <string.h>

int main() {
    char date[20], month[3];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int m;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';

    sscanf(month, "%d", &m);

    printf("Formatted date: %.2s-%s-%s\n", date, months[m - 1], date + 6);

    return 0;
}
