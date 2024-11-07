#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage, grossPay, taxes, netPay;
    
    // Constants
    const float OVERTIME_THRESHOLD = 40.0;
    const float OVERTIME_RATE = 1.5;
    const float TAX_RATE_FIRST_600 = 0.15;
    const float TAX_RATE_ABOVE_600 = 0.20;
    
    // Get input from user
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hoursWorked);
    printf("Enter the hourly wage: ");
    scanf("%f", &hourlyWage);
    
    // Calculate gross pay
    if (hoursWorked > OVERTIME_THRESHOLD) {
        float overtimeHours = hoursWorked - OVERTIME_THRESHOLD;
        grossPay = (OVERTIME_THRESHOLD * hourlyWage) + (overtimeHours * hourlyWage * OVERTIME_RATE);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }
    
    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * TAX_RATE_FIRST_600;
    } else {
        taxes = 600 * TAX_RATE_FIRST_600 + (grossPay - 600) * TAX_RATE_ABOVE_600;
    }
    
    // Calculate net pay
    netPay = grossPay - taxes;
    
    // Output the results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);
    
    return 0;
}