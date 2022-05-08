/*
    Name: Karanvir Basson
    Title: Floyd's Algorithm
    Date: 05-08-2022
*/

#include "floyd.h"

int getAdjacencyMatrix(int adjacencyMatrix[NUM_NODES][NUM_NODES]) { //Given a file containing an adjacency matrix and store it in 2d array

    FILE* file = fopen(FILENAME, "r"); //Open file for reading

    if (file == NULL) { //If file doesn't exist

        printf("%s not found!\n", FILENAME);
        return 0;

    }
    
    for (int i = 0; i < NUM_NODES; i++) { //Initialize matrix to all zeores

        for (int j = 0; j < NUM_NODES; j++) {

            adjacencyMatrix[i][j] = 0;

        }

    }

    int size = (NUM_NODES * 10) * sizeof(char); //Get size of string contining row of matrix
    char matrixRow[size]; //Initialize string contining row of matrix

    int i = 0; //Row index

    while (fgets(matrixRow, size, file)) { //Read matrix

        int j = 0; //Column index
        char* entry = strtok(matrixRow, " \n"); //Get current matrix entry as string

        while (entry != NULL) { //If string entry is not null

            if (!strcmp(entry, "i")) adjacencyMatrix[i][j] = INF_VAL; //If entry == "i", set entry to INF_VAL
            else adjacencyMatrix[i][j] = atoi(entry); //If not infinity, convert entry to int

            entry = strtok(NULL, " \n"); //Get next entry
            j++;

        }

        i++;

    }

    fclose(file); //Close file ptr
    return 1;

}
