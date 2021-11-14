#include <stdio.h>
#include <math.h>

// Function prototype
int cal_burn(int, float);

int main()
{
    // Prompt user for weight 
    int weight;
    printf("Enter your weight in lbs: ");  
    scanf("%d", &weight);
    
    // Prompt user for number of squats performed
    float squats;
    printf("Number of squats: ");
    scanf("%f", &squats);
    
    // Ask if user is holding weights
    int add_weight;
    printf("Holding weights? yes/no: ");
    
    
    // Declare variable for calories burned daily
    float final_cal = cal_burn(weight, squats);

    
    // Calories burned in a week, year. Lbs lost.
    float weeks = final_cal * 7;
    float year = weeks * 52.143;
    float lbs = year/3500;
    
    // printf("%d, %d, %d, %f\n", weight, age, squats, kilo);
    printf("Calories burned daily: %f\n", final_cal);
    printf("Calories burned in a week: %f\n", weeks);
    printf("Calories burned in a year: %f\n", year);
    printf("Pounds lost in a year: %f\n", lbs);
    
}

int cal_burn(int weight, float squats)
{
    
    float kilo = weight/2.205;
    float cal_eq = 5 * 3.5 * (kilo/200);
    float final_cal = cal_eq * (squats/25);
    
    return final_cal;
    
}

    
