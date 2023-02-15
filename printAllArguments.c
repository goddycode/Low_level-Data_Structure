#include <stdio.h>
/*
 * main - a function which prints all arguments passed to it
 * @ac: number of elements in av
 * @av: pointer to the first element of the array
 *
 * Return: Always 0
 */

int main(int ac, char **av) {
    // Loop through the array of strings pointed to by argv
    for (char **arg = av; *arg != NULL; arg++) {
        // Print each argument on a new line
        printf("%s\n", *arg);
    }
    return 0;
}
