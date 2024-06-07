#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  unsigned long int value;
  int i;

  if (argc != 2) {
    printf("Usage %s value\n", argv[0]);
    return 1;
  }

  /* print header */
  printf(" 3           2            1            \n");
  printf("1098 7654 3210 9876 5432 1098 7654 3210\n");
  value = strtoul(argv[1], NULL, 16);

  for (i=31; i>=0; i--) {
    printf("%d", (value >> i) & 0x1);
    if (i%4 == 0) printf(" ");
  } 
  printf("\n");

  return 0;
}
