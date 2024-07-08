#include <stdio.h>

int main() {
float f_temp, c_temp; // Variables to store Fahrenheit and Celsius temperatures
float start_temp, end_temp; // Starting and ending temperatures for the conversion
int STEP; // Step size for temperature increments

  // Initialize temperature conversion settings
start_temp = 0;
end_temp = 150;
  STEP = 10;

  // Fahrenheit to Celsius conversion
printf("Fahrenheit to Celsius");
printf("\n---------------------\n");
printf("Fahrenheit  Celsius\n");

  // Loop through the range of Fahrenheit temperatures
while (start_temp<= end_temp) {
    // Convert Fahrenheit to Celsius
f_temp = start_temp * 9 / 5 + 32;

    // Print the conversion results
printf("%6.1f \t %8.1f\n", start_temp, f_temp);

    // Increment the temperature by the specified step size
start_temp = start_temp + STEP;
  }

  // Reset temperature conversion settings for the second conversion
start_temp = 0;
end_temp = 150;
  STEP = 10;

  // Celsius to Fahrenheit conversion
printf("\n\nCelsius to Fahrenheit\n");
printf("---------------------\n");
printf("Celsius   Fahrenheit\n");

  // Loop through the range of Celsius temperatures
while (start_temp<= end_temp) {
    // Convert Celsius to Fahrenheit
c_temp = (start_temp - 32) * 5 / 9;

    // Print the conversion results
printf("%6.1f \t %8.1f\n", start_temp, c_temp);

    // Increment the temperature by the specified step size
start_temp = start_temp + STEP;
  }
}
