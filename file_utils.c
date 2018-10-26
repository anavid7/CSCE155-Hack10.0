#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "file_utils.h"

char* getFileContents(const char* filePath) {
  //opens file
  FILE* file = fopen(filePath, "r");
  //delcares str
  char* str = (char*)malloc(sizeof(double) * 1000);
  //gets current
  int current = fgetc(file);
  int i = 0;
  //loops through each carrecter and appends it to the end of str
  while ((char)current != EOF) {
    str[i] = (char)current;
    current = fgetc(file);
    i++;
  }
  fclose(file);
  return str;
}

char** getFileLines(const char* filePath, int* numLines) {
  //opens file and declares buffer
  FILE* file = fopen(filePath, "r");
  char buffer[1000];
  *numLines = 0;
  //finds number of lines
  char current = fgetc(file);
  while (current != EOF) {
    current = fgetc(file);
    if (current == '\n') {
      (*numLines)++;
    }
  }
  //reopens the file
  fclose(file);
  file = fopen(filePath, "r");
  int i;
  //declares a 2d array
  char** lines = (char**)malloc(sizeof(char*) * (*numLines));
  for (i = 0; i < *numLines; i++) {
    lines[i] = (char*)malloc(sizeof(char) * 1000);
  }
  i = 0;
  //puts every line into one pointer of the 2d array
  while (fgets(buffer, 1000, file) != NULL) {
    int n = strlen(buffer);
    buffer[n - 1] = '\0';
    strcpy(lines[i], buffer);
    i++;
  }
  fclose(file);
  return lines;
}
