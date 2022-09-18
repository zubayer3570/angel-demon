#include <stdio.h>
int main()
{
    int event_count, u_demon = 0, angel = 0;
    printf("Enter the number of events: ");
    scanf("%d", &event_count);
    int events[event_count];
    int temp = event_count;
    while (event_count--)
    {
        scanf("%d", &events[event_count]);
    }
    while (temp--)
    {
        events[temp] > 0 ? angel += events[temp] : angel ? angel-- : u_demon++;
    }
    printf("Undefeated demon: %d\n", u_demon);
}