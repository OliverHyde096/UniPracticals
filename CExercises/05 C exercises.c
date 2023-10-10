#include <stdio.h>

// README: 
// Skip down to the exercise functions that are outlined below. 
// Above each exercise you'll see a set of instructions. 

/* Here are the definitions for each function */

void exercise1();
void exercise2();
void exercise3();
void exercise4();
void exercise5();

/* This is the main function - where programs in C start */
/* For the purpose of this file, we'll use it to run your exercise attempts */

int main() {

    printf("Hello, World!\n");
    printf("Welcome to your exercises in C!\n\n");

    //exercise1();
    //exercise2();
    exercise3();
    //call exercise4() here...
    //call exericse5() here...

    return 0; 

}

// Exercise 1 
// In the function below, ask the user to type in their age. 
// Store this in a variable and then output this to the screen. 
// In Python, the function is input(), but what is it in C?
// Also remember to declare your variables with TYPES in C and use semi-colons!  

void exercise1(){

    printf("\nHello from the exercise 1 function...\n");

    //Python: 
    // age = int(input("Please enter your age"))

    // Write the solution to exercise 1 here...
        int age;
        printf("Enter your age:");
        scanf("%d", &age);
        printf("You entered: %d\n", age);
        return 0;
    }


// Exercise 2 
// Now write a for loop in C that will repeat five times and print the value of the loop counter to the screen.
// Make sure the output starts at 1, and the final output is 5.
// In Python, you might write the for.. in... loop, but what about C?
// Remember to call exercise2() from the main function above!

void exercise2(){

    //Python: 
    //for x in range(1,6)
    //   print(x)

    //C: (also see the structure of the C for loop written in English below)
    //for(initialise loop counter variable here; compare value of variable here; increment loop counter)
    //Write your solution here.
        for (int i = 0; i <=5; i++){
            printf("%d\n", i);
        }
        return 0;
    }
 

// Exercise 3 
// Write a series of conditional statements that will output the lettergrade for a mark between 0 to 100.
// You may have already written this in Python, so feel free to translate the code into C!
// 
// Extension: Create a C function that will also convert lettergrades (e.g. 'A', 'B', 'C') 
// to University degree classifications (e.g. "1st", "2:1", "2:2"). Can you write a switch statement to do this?
// 

void exercise3(){

    // Python: 
    // mark = int(input("Please enter your mark:"))
    // if mark < 40:
    //    print("Not successful")
    // elif mark >= 40 and mark < 50:
    //    print("This is a D")
    // else:
    //    print("More to complete...")

    // C:
    // Write your solution here.
    int grade;

    printf("Please enter your result:");
    scanf("%d", &grade)
    if (grade >= 90){
        printf("You scored an A!");
    }
    else (grade <= 80){
        printf("You scored a B!");
    }
    else (grade <= 70){
        printf("You scored a C");
    }
    return 0;

} 

// Exercise 4
// Now define a C array which is fixed-size and can store 10 integers. 
// Assign the values 1 to 10, each to an indivdiual elememt of the integer array.
// Output the contents of the array to the screen.
// 
// Hint: in Python you could state the name of the list to print all the values in a row, 
// but in C, you'll need to loop through each element. 
// 
// Extension: Randomly generate the contents of the array. Check this is random each time by printing it to the screen.


void exercise4(){

    // Python List: 
    // l = [1,2,3,4,5,6,7,8,9,10]
    // for i in l:
    //    print(i)

    // C array:
    // Write the solution to exercise 4 here...
    int myArray[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++) {
        printf("%d", myArray[i]);
    }
    return 0;
} 


// Exercise 5
// Classes were introduced for C++, along with the other principles of OOP, but C did have a structure (struct).
// These structures were useful for encapsulating related variables (objects) for an entity, 
// but the procedures (functions/methods) would be separate (not defined as part of the structure). 
// You'll see this separation below. 
//
// Create a variable of the Student struct defined here and assign values for its name and id 'attributes'
//
// Extension 1: Ask the user to enter this data from the keyboard.
// Extension 2: Now scale this for three students. Store the three students in an array. Then iterate through the array to print their details.

struct Student{
    char name[30];
    int id;
};

void exercise5(){

    // Write the solution to exercise 5 here...
    printf("Please enter your name:")
    scanf()


    
} 

