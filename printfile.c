#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring a variable a that is user input
    int a;
    // declaring a number num that is random digit which is under 100, if you want to limit further you can replace
    // 100 by any other number for e.g, if you want random number to be under 50, replace 100 with 50
    int num = rand() % 100;
    //declaring variable square that will store the square of random number
    int square;
    // creating a file pointer that will point to the files, fpi for wrong.txt and fpc for correct.txt
    FILE *fpc, *fpi;
    //printing the statement along with random number
    printf("Calculate the square of: %d", num);
    // square of number = num * num
    square = num * num;
    // to take input from user in new line
    printf("\n");
     
// creating a do while statement to take inputs from user until user inputs "0"
  do
    {
        // take input from user for the square of random number
        scanf("%d", &a);
        // if else condition to check if the user input is correct, check with calculated value
        if (a == square)
        {
            // open the pointer to the correct.txt if the value is correct
            fpc = fopen("correct.txt", "a");
            //enter the values in the correct.txt
            fprintf(fpc, "%d\n", a);
            
        }
        // when the input is wrong and not 0
        else if (a!= square && a!=0)
        {
            // open the pointer to the incorrect.txt if the value is incorrect
            fpi = fopen("wrong.txt", "a");
            //enter the values in the incorrect.txt
            fprintf(fpi, "%d\n", a);
            
        }

    } while (a != 0);
    //close the pointer the files correct.txt and incorrect.txt
    fclose(fpi);
    fclose(fpi);
    return 0;
}
