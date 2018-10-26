#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "file_utils.h"






char *getFileContents(const char *filePath) {


FILE *file = fopen(filePath, "r");
char* str = (char*) malloc(sizeof(double)*1000);
int current = fgetc(file);
int i=0;
  while ((char)current != EOF) {
    str[i] = (char)current;
    current = fgetc(file);
    i++;
  }
fclose(file);
return str;
}


char **getFileLines(const char *filePath, int *numLines) {


  FILE *file = fopen(filePath, "r");
  char buffer[1000];
  *numLines = 0;


char current = fgetc(file);
  while (current != EOF) {
    current = fgetc(file);
    if (current == '\n') {
    (*numLines)++;
  }
}
fclose(file);
file = fopen(filePath, "r");
int i;
  char** lines=(char**) malloc(sizeof(char*) * (*numLines));
  for(i=0; i < *numLines; i++) {
    lines[i]=(char*) malloc(sizeof(char)*1000);
  }
i=0;
    while (fgets(buffer, 1000, file) != NULL) {
      int n = strlen(buffer);
      buffer [n-1] = '\0';
      strcpy(lines[i], buffer);
      i++;
    }
  fclose(file);
  return lines;

  }
