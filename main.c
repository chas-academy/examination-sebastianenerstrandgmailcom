#include <stdio.h>
#include <string.h>

int main(){
    char students[5][10];
    int numbers[5][13];
    float average[5];
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        int numbers_input = 0;
        for (int o = 0; o < 14; o++)
        {
            if (o == 0)
            {
                scanf("%s", &students[i]);
                if (students[i][0] > 90)
                {
                    students[i][0] -= 32;
                }
                
            } else
            {
                scanf("%d", &numbers[i][o-1]);
                numbers_input += numbers[i][o-1];
            }
        }
        total += numbers_input;
        average[i] = numbers_input / 13.0;
    }
    
    int best_student;
    float current_average;

    for (int i = 0; i < 5; i++)
    {
        if (average[i] > current_average)
        {
            current_average = average[i];
            best_student = i;
        }
    }

    printf("%s\n", students[best_student]);
    float total_average = total / 65.0;
    
    for (int i = 0; i < 5; i++)
    {
        if (average[i] < total_average)
        {
            printf("%s\n", students[i]);
        }
    }

    return 0;
}