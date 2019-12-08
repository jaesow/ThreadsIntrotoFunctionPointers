#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
void additionFunc (int a, int b);
void subtractionFunc (int a, int b);
void multiplicationFunc (int a, int b);
void divisionFunc (int a, int b);
void exitProgFunc (int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int input, a , b;
  //Define 'a' and 'b'
  a = 6;
  b = 3;
  
  printf("Input the number associated with the operation you'd like to perform. 0 = add, 1 = subtract, 2 = Multiply, 3 = divide, 4 = exit");
  scanf("%d", &input);
  
  //function pointer array
  void (*func_ptr_arr[])(int,int) = {additionFunc, subtractionFunc, multiplicationFunc, divisionFunc, exitProgFunc};
  
  //While user input doesn't equal 4, call each function that correlates to the input number
  while (input != 4){
    for (int i = 0; i == input; i++){
      //call additionFunc with values a & b
      (*func_ptr_arr[input])(a,b);
    }
    for (int i = 1; i == input; i++){
      //call subtractionFunc with values a & b 
      (*func_ptr_arr[input])(a,b);
    }
    for (int i = 2; i == input; i++){
      //call multiplicationFunc  with values a & b 
      (*func_ptr_arr[input])(a,b);
    }
    for (int i = 3; i == input; i++){
      //call divisionFunc with values a & b
      (*func_ptr_arr[input])(a,b);
    }
    
    //Get next user input value
    printf("Input the number associated with the operation you'd like to perform. 0 = add, 1 = subtract, 2 = Multiply, 3 = divide, 4 = exit");
    scanf("%d", &input);
  }
  
  //Call the correlating function when user input == 4
  for (int i = 4; i == input; i++){
      //call ext_ptr function with values a & b from file
      (*func_ptr_arr[input])(a,b);
  }
  
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
void additionFunc (int a, int b) { 
  printf ("Adding 'a' and 'b' = %d\n", a+b);  
}
void subtractionFunc (int a, int b) { 
  printf ("Subtracting 'a' and 'b' = %d\n", a-b);  
}
void multiplicationFunc (int a, int b) { 
  printf ("Multiplying 'a' and 'b' = %d\n", a*b);  
}
void divisionFunc (int a, int b) { 
  printf ("Dividing 'a' and 'b' = %d\n", a/b);  
}
void exitProgFunc (int a, int b) { 
  printf ("Exiting program"); 
  exit(0); 
}