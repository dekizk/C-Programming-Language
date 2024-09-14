/* Chapter 1 examples & exercises for K&R C Programming Language Book 
NOTE: REMOVE COMMENTED LINES TO COMPILE DESIRED CODE */

#include <stdio.h>

/* main() // NOTE: every C program begins executing at the beginning of main
{
    printf("hello, world\n");
} */

// 1.2 Fahrenheit to Celsius conversions
/*int main()
{
    // Variables declarations (all variables must be declared before they are used)
    float fahr, celsius;    // floating point numbers; may have fractional part
    int lower, upper, step; // variables are integers

    lower = 0;              // lower limit of temp table 
    upper = 300;            // upper limit 
    step = 20;              // step size 

    fahr = lower;
    printf("Temp Conversion F to C\n"); // Part of EXERCISE 1-3

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0); // NOTE: integer division in C truncates (fractional part discarded), therefore using floating point values
                                           // original example shows why integer arithmetic is incorrect, should use floating-point arithmetic
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
}*/

// EXERCISE 1-4 Program to print Celsius to Fahrenheit table
/*int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Temp Conversion C to F\n");

    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%3.0f\t%5.0f\n", celsius, fahr);
        celsius += step;
    }
}*/

// SYMBOLIC CONSTANTS
/* #define LOWER 0     // lower limit of table
#define UPPER 300   // upper limit of table
#define STEP 20     // step size
*/
/* int main(void)
{
    int fahr;
    printf("Temp Conversion F to C\n");

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    // EXERCISE 1-5 Print the table in reverse order from 300 to 0
    //for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    //    printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
} */

// Character Input and Output
/*int main()
{
    int c;

    c = getchar();       // getchar reads the next input character from a text stream, assigns it to c
    while (c != EOF) {   // EOF is used to distinguish the end of the input
        putchar(c);      // putchar prints the contents held by c variable, essentially you will see your input as your ouput
        c = getchar();   // this means we will always ask for your input after putchar, to exit: ctrl + C
    }
}*/

// Cont.

/*int main()  // more concise re-write of previous example, centralizes the input with only one reference to getchar
{
    int c;
    printf("EOF is: %d\n", (getchar() != EOF)); // Exercise 1-6: Verify expression getchar() != EOF is 0 or 1, press enter first
    printf("EOF value: %d", EOF);               // Exercise 1-7 Print the value of EOF
    while ((c = getchar()) != EOF)              // this example puts the assignment expression into the while test-condition
    putchar(c);
}*/

/*int main(void)           // NOTE: press ctrl + D to terminate the program and see printf output
{
    long nc; //long variable 32 bits

    nc = 0;
    while (getchar() != EOF)
        ++nc;             // increments nc by 1 to indicate a new character has been read
    printf("%ld\n", nc); // ld is for long integer: 32 bits 
}*/

// Same code as above, but using a for loop
/*int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;                  // null statement as everything is done in test and increment part, but for loops require a statement, hence the isolated ;
    printf("%.0f\n", nc); // %f is for floating point numbers, %.0f is for floating point numbers with no decimal point
}*/

/*int main() // Counts new lines, tabs, blank spaces, outputs the number after ctrl + D. This is Exercise 1-8
{
    int c, nl, bl, tb;
    nl = bl = tb = 0;
    while((c = getchar()) != EOF)
        if (c == '\n')      // if getchar() receives a newline character, increment nl by 1
            ++nl;
        else if (c == '\t') // if getchar() receives a tab character, increment tb by 1
            ++tb;
        else if (c == ' ')  // if getchar() receives a blank space character, increment bl by 1
            ++bl;
    printf("Number of new lines: %d\nNumber of blanks: %d\nNumber of tabs: %d\n", nl, bl, tb);
    return 0;
}*/                           // Note: character in single quotes represent a single character, double quotes represent a string

// EXERCISE 1-9 Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank

/*int main()
{
    int c, bl;
    while((c = getchar()) != EOF)
        if (c == ' ') {
            while ((c = getchar()) == ' ');
            putchar(' ');
            if (c == EOF) break;
        }
        putchar(c);
    return 0;
}*/

/* EXERCISE 1-10 Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by */
/*int main()
{
    int c;
    while((c = getchar()) != EOF)
        if (c == '\t') {
            putchar('\\'); // have to put double \\, becaue \ is an escape character in C, therefore will only output one
            putchar('t');
        }
        else if (c == '\b' || c == 127) {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } 
    return 0;
}*/

/* 1.5.4 Word counting example: counts lines, words, and character */

/* #define IN  1        // inside word
#define OUT 0        // outside word


int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;           // increment whatever character getchar() receives
        if (c == '\n')  // if conditions to check which character type, then increment corresponding type
        ++nl;
        if (c == ' ' || c == '\n' || c == '\t') // need a way to determine if we are in a word or not, || is OR expression
        state = OUT;                            // if there's a space, newline, or tab, then we are out of a word
        else if (state == OUT) { 
        state = IN;                             // otherwise we are always inside a word
        ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);           // Crtl+D to exit program and print results
}
*/
/* Exercise 1-12  Write a program that prints its input one word per line */
int main() {
    int c;
    int first_char = 1;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (!first_char) {
                putchar('\n');
            }
            first_char = 1;
        } else {
            putchar(c);
            first_char = 0;
        }
    }

    // Add a final newline if the last character wasn't a whitespace
    if (!first_char) {
        putchar('\n');
    }
}
/* count digits, white space, others, store in array */

// int main()
// {
//     int c, i, nwhite, nother;
//     int ndigit[10];

//     nwhite = nother = 0;
//     for (i = 0; i < 10; ++i)
//         ndigit[i] = 0;

//     printf("%d", ndigit);
// }

// int main()
// // remember to use ctrl+D to end the program
// {
//     int c, i, nwhite, nother;
//     int ndigit[10];

//     nwhite = nother = 0;
//     for (i = 0; i < 10; ++i)
//         ndigit[i] = 0;

//     while ((c = getchar()) != EOF)
//         if (c >= '0' && c <= '9')
//             ++ndigit[c-'0'];
//         else if (c == ' ' || c == '\n' || c == '\t')
//             ++nwhite;
//         else
//             ++nother;
    
//     printf("digits = ");
//     for (i = 0; i < 10; ++i)
//         printf(" %d", ndigit[i]);
//     printf(", white space = %d, other = %d\n", nwhite, nother);
// }

// program to print histogram of lengths of words

/* int main()
{
    int c, i, nchar;
    int numChar[10];

    while ((c = getchar()) != EOF)
        if (c != ' ' && c != '\n');
            for (i = 0, i < 10, ++i)
                ++numChar[i];
                printf("numChar: %d", numChar-1);
}*/