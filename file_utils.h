/**
* Author(s): David Ryan
* Date Created: 10/24/2018
* Date Modified: 10/26/2018
* Class: CSCE155e
* Professor: Dr. Chris Bourke
* NUID: 47810715
*/




//Returns an entire files contents as one string
char *getFileContents(const char *filePath);

//Puts each line of a file in a seperate pointer in a 2d array
char **getFileLines(const char *filePath, int *numLines);
