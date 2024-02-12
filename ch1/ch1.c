/* Chapter 1 examples & exercises for K&R C Programming Language Book 
NOTE: REMOVE COMMENTED LINES TO COMPILE DESIRED CODE */

#include <stdio.h>

/* main() // NOTE: every C program begins executing at the beginning of main
{
    printf("hello, world\n");
} */

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

    c = getchar();       // getchar reads the next input cahracter from a text stream, assigns it to c
    while (c != EOF) {   // EOF is used to distinguish the end of the input
        putchar(c);      // putchar prints the contents held by c variable, essentially you will see your input as your ouput
        c = getchar();   // this means we will always ask for your input after putchar, to exit: ctrl + C
    }
}*/

// Cont.

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    putchar(c);
}

// int main(void)
// {
//     long nc; //long variable 32 bits

//     nc = 0;
//     while (getchar() != EOF)
//         ++nc;
//     printf("%ld\n", nc); //ld is for long integer
// }

// int main() // Counts new lines, tabs, blank spaces, outputs the number after ctrl + D
// {
//     int c, nl, bl, tb;
//     nl = bl = tb = 0;
//     while((c = getchar()) != EOF)
//         if (c == '\n')
//             ++nl;
//         else if (c == '\t')
//             ++tb;
//         else if (c == ' ')
//             ++bl;
//     printf("Number of new lines: %d\nNumber of blanks: %d\nNumber of tabs: %d\n", nl, bl, tb);
//     return 0;
// }

// int main()
// {
//     int c;
//     while((c = getchar()) != EOF)
//         if (c == '\t') {
//             putchar('\\'); // have to put double \\, becaue \ is an escape character in C, therefore will only output one
//             putchar('t');
//         }
//         else if (c == '\b') {
//             putchar('\\');
//             putchar('b');
//         }
//         else if (c == '\\') {
//             putchar('\\');
//         } 
//     return 0;
// }

// #define IN 1    // inside a word
// #define OUT 0   // outside a word

// /* count lines, words, and characters in input */
// main()
// {
//     int c, nl, nw, nc, state;

//     state = OUT;
//     nl = nw = nc = 0;
//     while ((c = getchar()) != EOF) 
//     {
//         ++nc;
//         if (c == '\n')
//             ++nl;
//         if (c == ' ' || c == '\n' || c == '\t')
//             state = OUT;
//         else if (state == OUT) {
//             state == IN;
//             ++nw;
//         }
//     }
//     printf("%d %d %d\n", nl, nw, nc);
// }

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