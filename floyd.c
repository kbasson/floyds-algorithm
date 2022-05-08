/*
    Name: Karanvir Basson
    Title: Floyd's Algorithm
    Date: 05-08-2022
*/

#include "floyd.h"

int main() {

    int adjacencyMatrix[NUM_NODES][NUM_NODES]; //Integer matrix representing adjacency matrix
    int res = getAdjacencyMatrix(adjacencyMatrix); //Initialize adjacency matrix from file
    if (res == 0) return -1; //If file read doesn't work

    //PRINT INITIAL ADJACENECY MATRIX

    printf("\n");

    for (int k = 0; k < NUM_NODES; k++) {

        for (int i = 0; i < NUM_NODES; i++) {

            printf("%d ", adjacencyMatrix[k][i]);

        }

        printf("\n");

    }

    printf("\n");

    //------------------------------------------
    //--FLOYD'S ALGORITHM-----------------------
    //------------------------------------------

    for (int k = 0; k < NUM_NODES; k++) {

        for (int i = 0; i < NUM_NODES; i++) {

            for (int j = 0; j < NUM_NODES; j++) {

                int cmp = adjacencyMatrix[i][k] + adjacencyMatrix[k][j];

                if (cmp < adjacencyMatrix[i][j]) {
                    
                    adjacencyMatrix[i][j] = cmp;

                }

            }

        }

    }

    //------------------------------------------
    //------------------------------------------
    //------------------------------------------

    //PRINT MATRIX AFTER FLOYD'S ALGORITHM

    printf("\n");

    for (int k = 0; k < NUM_NODES; k++) {

        for (int i = 0; i < NUM_NODES; i++) {

            printf("%d ", adjacencyMatrix[k][i]);

        }

        printf("\n");

    }

    printf("\n");

}
