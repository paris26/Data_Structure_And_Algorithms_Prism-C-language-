#include <stdio.h>
#include <stdlib.h>

// define the number of vertices
#define V 5;


// Create a node with weight and distance from source
// and point to the next node
// to have an adjacency list
struct Node{
    int weight;
    int distance;
    //here we are pointing to the next node
    //so that we can have an adjacency list
    struct Node* next;
};

// Create a list of nodes
// and point to the head of the list
struct List{
    struct Node* head;
};

// now we have a graph where each node has a list of 
// neighbors and we have a list of nodes
// that are linked to each other
struct Graph{
    int V;
    struct List* array;
};

struct Node* createNode(int weight, int distance){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->weight = weight;
    newNode->distance = distance;  
    newNode->next = NULL;
    return newNode;
}


struct Graph* createGraph(int V){

    //memory allocation for the graph
    struct Graph* graph = (struct *Graph)malloc( V * sizeof(struct Graph));
    //store the number of vertices
    graph->V = V;
    //memory allocation for the array(linked lists) of lists
    graph -> array = (struct *List)malloc(V * sizeof(struct List));

    //initialize the array of lists
    for(int i=0; i<V; i++){
        // setting the head of all the lists to NULL
        graph->array[i].head = NULL;
    }

    return graph;
}

//create a new function to add an edge to the graph
void addEdge(struct *Graph, int src, int dest , int weight){
    //create a new Node
    // to represent the cost and the distance from the source
    struct *List newNode = newList(dest, weight);
    //connect it with the source
    newNode->next = graph->array[i].head;
    // add the list to the graph 
    // and point to the new node making it 
    //the head of the list 
    graph->array[src].head = newNode;


    //specify the new Node
    newNode = newList(src, weight);
    //connect it with the destination
    newNode->next = graph.array[dest].head;
    // add the list to the graph
    graph->array[dest].head = newNode;
}


int main(){
   

    return 0;
}