#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


#include "protein_util.h"


char* getFileContents(const char* filePath) {
  FILE* file = fopen(filePath, "r");
  char* str = (char*)malloc(sizeof(double) * 1000);
  int current = fgetc(file);
  int i = 0;
  while ((char)current != EOF) {
    str[i] = (char)current;
    current = fgetc(file);
    i++;
  }
  fclose(file);
  return str;
}


int main(int argc, char **argv) {


if (argc > 3) {
  printf("error: too many args\n");
  return 1;
} else if (argc < 3) {
  printf("error: too few args\n");
  return 1;
}

char* sequence = getFileContents(argv[1]);
int sequenceLength = strlen(sequence);

int i;
//converts DNA to RNA
for (i=0; i<n-1; i++) {
  if (sequence[i] == 'T' {
    sequence[i] = 'U';
  }
}

//removes the spaces from sequence
int x = 0;
for (i=0; i<sequenceLength; i++) {
  if (!isspace(sequence[i])) {
    sequence[x] = sequence[i];
    x++
  }
}
//opens file
FILE *file = fopen(argv[3],"w");
i = 0;
//makes a trigram
while (sequence[i] != '\0') {
  char trigram[3];
    for (n=0; n<3; n++) {
      trigram[n] = sequence[i];
    }
  fprintf(file, trigram)
  i++
  }
}
