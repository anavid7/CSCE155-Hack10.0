#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>





if (argc > 3) {
  printf("error: too many args\n");
  return 1;
} else if (argc < 3) {
  printf("error: too few args\n");
  return 1;
} else if (arr == NULL) {
  printf("error: null pointer\n");
  return 1;
}


FILE *inputFile = fopen(argv[1],"r");
FILE *outputFile = fopen(argv[2], "w");
