//need to figure out how to use command line arguments in the program 
//program needs to use four different preset menu items 
//and randomly call upon one of these items before continuing on
//must use command line arguments to calculate the tips and taxes
//Will use local tax 8.75 and tip percentage of 15%
#include <stdio.h>
#include <stdlib.h> 

#include <time.h> 
#include "bill.h"

double getMeal(PtrToConstMeal ptr, int num) {
    return ptr[num].cost;
}

int main()  {

   printf("Cost: %.2f\n", getMeal(srand((mealTable) time(&t));, 0));
 
  
}
