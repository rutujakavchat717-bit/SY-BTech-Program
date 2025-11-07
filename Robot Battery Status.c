#include <stdio.h>

struct Battery 
{
    int id;
    char type[30];
    float level;
    char health[20];
};

int main() 
{
    struct Battery b;

    printf("Enter Battery ID: ");
    scanf("%d", &b.id);

    printf("Enter Battery Type: ");
    scanf("%s", b.type);

    printf("Enter Battery Level: ");
    scanf("%f", &b.level);

    printf("Enter Health (Good/Bad): ");
    scanf("%s", b.health);

    printf("\n BATTERY DETAILS \n");
    printf("ID: %d\n", b.id);
    printf("Type: %s\n", b.type);
    printf("Level: %.2f\n", b.level);
    printf("Health: %s\n", b.health);

    return 0;
}
