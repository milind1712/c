#include <stdio.h>

int main()
{
    int rollNumber;
    float physics, chemistry, computer;
    float totalMarks, percentage;

    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNumber);

    printf("Input the marks of Physics, Chemistry, and Computer Application: ");
    scanf("%f %f %f", &physics, &chemistry, &computer);

    totalMarks = physics + chemistry + computer;
    percentage = totalMarks / 3;
    printf("Total Marks: %f\n", totalMarks);
    printf("Percentage: %f%%\n", percentage);
    int division;
    if (percentage >= 60)
    {
        printf("Division: First\n");
    }
    else if (percentage >= 45)
    {
        printf("Division: Second\n");
    }
    else if (percentage >= 33)
    {
        printf("Division: Third\n");
    }
    else
    {
        printf("Division: Fail\n");
    }
    return 0;
}