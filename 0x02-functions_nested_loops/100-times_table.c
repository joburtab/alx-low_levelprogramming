#include "main.h"

/**
 * times_table - function that prints the n times table, starting with 0
 * @n: The number up to which the times table should be printed.
 *
 * Return: void
 */
void times_table(int n) {
    int number, by, result, row, column;

    for (row = 0; row <= n; row++) {
        for (column = 0; column <= 10; column++) {
            result = row * column;
            _putchar(result + '0');  // Assuming _putchar() is defined properly
            _putchar(' ');
        }
        _putchar('\n');
    }
}
int main(void) {
    print_times_table(3);
    printf("\n");
    print_times_table(5);
    printf("\n");
    print_times_table(98);
    printf("\n");
    print_times_table(12);
  
    return 0;
}
