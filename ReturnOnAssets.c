#include <stdio.h>

double calculateNetIncome(double totalRevenue, double totalExpenses);
double calculateTotalAssets(double fixedAssets, double movableAssets);

int main(){

    double totalRevenue, totalExpenses, fixedAssets, movableAssets, netIncome, 
           totalAssets, ROA;

    printf("Enter the totalRevenue:  ");
    scanf("%lf", &totalRevenue);
    printf("Enter the totalExpenses:  ");
    scanf("%lf", &totalExpenses);
    printf("Enter the fixedAssets:  ");
    scanf("%lf", &fixedAssets);
    printf("Enter the movableAssets:  ");
    scanf("%lf", &movableAssets);

    netIncome = calculateNetIncome(totalRevenue, totalExpenses);
    totalAssets = calculateTotalAssets(fixedAssets, movableAssets);
    ROA = (netIncome / totalAssets);

    printf("The total revenue is:  %.2lf \n", totalRevenue);
    printf("The total expenses are:  %.2lf \n", totalExpenses);
    printf("The fixed assets are:  %.2lf \n", fixedAssets);
    printf("The movable assets are:  %.2lf \n", movableAssets);
    printf("The net income is:  %.2lf \n", netIncome);
    printf("The total assets are:  %.2lf \n", totalAssets);
    printf("The return on assets by a company is:  %.2lf \n", ROA);

    return 0;
}

double calculateNetIncome(double totalRevenue, double totalExpenses){
    return totalRevenue - totalExpenses;
}
double calculateTotalAssets(double fixedAssets, double movableAssets){
    return fixedAssets + movableAssets;
}