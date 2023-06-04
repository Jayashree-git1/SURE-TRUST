#include <stdio.h>

int main()
 {
    float temperature_threshold = 30.0; 
    float temperature;

    printf("Enter the current temperature in degrees Celsius: ");
    scanf("%f", &temperature);

   
    if (temperature > temperature_threshold) 
	{
        printf("Temperature exceeds safe limits.\n");
    }
	 else 
	 {
        printf("Temperature is within safe limits.\n");
    }

    return 0;
}
