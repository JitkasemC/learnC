#include <stdio.h>

int main()
{
    char nickName[15];
    printf("Enter your nickname: ");
    scanf("%s", nickName);
    printf("Your nickname is %s\n", nickName);
    
    char fullName[40];
    printf("Enter your first name and last name: ");
    fgets(fullName, 40, stdin);
    printf("Your full name is %s\n", fullName);
    
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c\n", grade);
    
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    
    double gpa;
    printf("Enter your GPA: ");
    scanf("%lf", &gpa);
    printf("Your GPA is %f\n", gpa);
    
    return 0;
}

// using while loop with scanf
#include <stdio.h>

int main()
{
    char playAgain = 'y';
    while (playAgain == 'y') {
        printf("Play game ...\n");
        printf("Want to play again? (y/n) : ");
        scanf("%c", &playAgain);
    }
    printf("Good bye");
    return 0;
}

