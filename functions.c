// C functions are simple, but because of how C works, the power of functions is a bit limited.

// Functions receive either a fixed or variable amount of arguments.
// Functions can only return one value, or return no value.
// In C, arguments are copied by value to functions, which means that we cannot change the arguments to affect their value outside of the function. 
// To do that, we must use pointers, which are taught later on.

// Functions are defined using the following syntax:
int foo(int bar) {
    /* do something */
    return bar * 2;
}

int main() {
    foo(1);
}
// The function foo we defined receives one argument, which is bar. The function receives an integer, multiplies it by two, and returns the result.

// To execute the function foo with 1 as the argument bar, we use the following syntax:
foo(1);

// In C, functions must be first defined before they are used in the code. 
// They can be either declared first and then implemented later on using a header file or in the beginning of the C file, 
// or they can be implemented in the order they are used (less preferable).

// The correct way to use functions is as follows:
/* function declaration */
int foo(int bar);

int main() {
    /* calling foo from main */
    printf("The value of foo is %d", foo(1));
}

int foo(int bar) {
    return bar + 1;
}

// We can also create functions that do not return a value by using the keyword void:
void moo() {
    /* do something and don't return a value */
}

int main() {
    moo();
}

//* Exercise
// Write a function called print_big which receives one argument (an integer) and prints the line x is big (where x is the argument) 
// if the argument given to the function is a number bigger than 10.

// Important: Don't forget to add a newline character \n at the end of the printf string.

#include <stdio.h>

/* function declaration */
void print_big(int number);

int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

/* write your function here */
void print_big(int x) {
    if(x > 10) {
	printf("%d is big\n", x);
    }
}

// the result should be
// 11 is big
// 22 is big
// 33 is big

// * Extra exercise
#include <stdio.h>

// receive arg firstname and lastname print fullname fucntion printFullName
// fucntion sumTwoNums recieve 2 number arg print 2 arg and return sum
// function sumAllNums receive array of number return sum of number in array

void printAboutMe(char firstNameInitial, char lastNameInitial, int age) {
    printf("First name initial is %c, last name initial is %c. Age is %d\n", firstNameInitial, lastNameInitial, age);
}

void printFullName(char firstName[], char lastName[]) {
    printf("%s %s\n", firstName, lastName);
}

int sumTwoNums (int num1, int num2) {
    int sum = num1 + num2;
    printf("Sum of two nums is %d\n", sum);
    return sum;
}

int sumAllNums (int nums[], int sizeOfNums) {
    int sum = 0;
    for (int i = 0; i < sizeOfNums; i++) {
        sum += nums[i];
    }
    return sum;
}

int main() {
  
  int array[5] = {2, 6, 1, 2, 3};
//   array[0] = 2;
//   array[1] = 3;
//   array[2] = 4;
//   array[3] = 5;
//   array[4] = 2;
  
  char name[4] = "Book";
  printf("print string: %s\n", name);
  
  
  printf("Sum of all nums is %d\n", sumAllNums(array, 5));
  printFullName("Jitkasem", "Chairangsaris");
  printAboutMe('J', 'c', 28);
  sumTwoNums(5, 60);
  printf("%d", sumTwoNums(18, 90));
  
  return 0;
}

// result
// print string: Book
// Sum of all nums is 14
// Jitkasem Chairangsaris
// First name initial is J, last name initial is c. Age is 28
// Sum of two nums is 65
// Sum of two nums is 108
// 108