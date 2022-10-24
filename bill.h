#include <stdio.h> 

#include <stddef.h> 

typedef struct { 

 char *item;  

 double cost; 

} Meal, *PtrToMeal; 

typedef const Meal *PtrToConstMeal;