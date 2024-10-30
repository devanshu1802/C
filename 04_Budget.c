#include <stdio.h>
int main()
{
    float totalBudget, rent, food, utilities, otherExpenses, remainingBudget;

    printf("Enter your total monthly budget: ");
    scanf("%f", &totalBudget);

    printf("Enter the amount spent on rent: ");
    scanf("%f", &rent);

    printf("Enter the amount spent on food: ");
    scanf("%f", &food);

    printf("Enter the amount spent on utilities: ");
    scanf("%f", &utilities);

    printf("Enter the amount spent on other expenses: ");
    scanf("%f", &otherExpenses);

    remainingBudget = totalBudget - (rent + food + utilities + otherExpenses);
    printf("Your remaining budget for the month is:%f\n", remainingBudget);

    if (remainingBudget > 0)
    {
        printf("You are within your budget.\n");
    }
    else if (remainingBudget == 0)
    {
        printf("You have exactly spent your budget.\n");
    }
    else
    {
        printf("You are over your budget by:%f\n", -remainingBudget);
    }

    return 0;
}