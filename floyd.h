/*
    Name: Karanvir Basson
    Title: Floyd's Algorithm
    Date: 05-08-2022
*/

//INCLUDE HEADER FILES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_NODES 4 //Number of nodes in graph
#define FILENAME "graph.txt" //Name of file containing adjacency matrix
#define INF_VAL 100 //Number used to represent infinity

int getAdjacencyMatrix(int adjacencyMatrix[NUM_NODES][NUM_NODES]); //Given a file containing an adjacency matrix and store it in 2d array
