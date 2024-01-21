#include <stdio.h>

int main()
{
    printf("hello, world\n");
}

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lowerl imit of temp table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("Temp Conversion F to C\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr +=step;
    }
}
// #define LOWER 0     //lower limit of table
// #define UPPER 300   //upper limit of table
// #define STEP 20     //step size

// int main(void)
// {
//     int fahr;

//     for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
//         printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
// }


// int main()
// {
//     int c;

//     c = getchar();
//     while (c != EOF) {
//         putchar(c);
//         c = getchar();
//     }
// }

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

int main()
{
    int c, i, nchar;
    int numChar[10];

    while ((c = getchar()) != EOF)
        if (c != ' ' && c != '\n');
            for (i = 0, i < 10, ++i)
                ++numChar[i];
                printf("numChar: %d", numChar-1);
}