#include <string.h> 

#include <stdlib.h> 

#include "bill.h" 

Meal mealTable[] =  

{ 

    {"Salad", 9.95}, 

    {"Soup", 4.55}, 

    {"Sandwich", 13.25}, 

    {"Pizza", 22.35}

}; 

const int MealTableEntries = sizeof(mealTable)/sizeof(mealTable[0]); 