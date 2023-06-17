#include <stdio.h>
  2 /**
  3  * main - prints alpabeths in upper and lover case
  4  *
  5  * Return: 0 success
  6  */
  7 int main(void)
  8 {
  9         char alpha = 'a';
 10         char ALPHA = 'A';
 11
 12         while (alpha <= 'z')
 13         {
 14                 putchar(alpha);
 15                 alpha++;
 16         }
 17         while (ALPHA <= 'Z')
 18         {
 19                 putchar(ALPHA);
 20                 ALPHA++;
 21         }
 22         putchar('\n');
 23
 24         return (0);
 25 }
}
