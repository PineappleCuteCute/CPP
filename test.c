#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>


#define N 10000
#define M 1000000
#define INF INT_MAX

struct Edge {
    int u, v, capacity, flow;
};

struct Graph {
    int numNodes, numEdges;
    struct Edge edges[M * 2];
    int* head;
    int* next;
};

int min(int a, int b) {
    return (a < b) ? a : b;
}

void addEdge(struct Graph* graph, int u, int v, int capacity) {
    graph->next[graph->numEdges] = graph->head[u];
    graph->head[u] = graph->numEdges;
    graph->edges[graph->numEdges].u = u;
    graph->edges[graph->numEdges].v = v;
    graph->edges[graph->numEdges].capacity = capacity;
    graph->edges[graph->numEdges].flow = 0;
    graph->numEdges++;
}

int fordFulkerson(struct Graph* graph, int source, int target) {
    int maxFlow = 0;
    int path[N];
    int edgeIndex[N];

    while (true) {
        // Initialize path and edgeIndex arrays
        for (int i = 0; i < N; i++) {
            path[i] = -1;
            edgeIndex[i] = -1;
        }

        // BFS to find an augmenting path
        int front = 0, rear = 0;
        path[source] = source;
        edgeIndex[source] = -1;

        while (front <= rear) {
            int current = path[front++];
            for (int i = graph->head[current]; i != -1; i = graph->next[i]) {
                int neighbor = graph->edges[i].v;
                if (path[neighbor] == -1 && graph->edges[i].capacity > graph->edges[i].flow) {
                    path[neighbor] = current;
                    edgeIndex[neighbor] = i;
                    if (neighbor == target) {
                        front = rear + 1;  // exit the loop
                        break;
                    }
                    rear++;
                }
            }
        }

        // If no augmenting path is found, break the loop
        if (path[target] == -1) {
            break;
        }

        // Find the minimum capacity along the augmenting path
        int minCapacity = INF;
        for (int i = edgeIndex[target]; i != -1; i = edgeIndex[graph->edges[i].u]) {
            minCapacity = min(minCapacity, graph->edges[i].capacity - graph->edges[i].flow);
        }

        // Update the flow along the augmenting path
        for (int i = edgeIndex[target]; i != -1; i = edgeIndex[graph->edges[i].u]) {
            graph->edges[i].flow += minCapacity;
            graph->edges[i ^ 1].flow -= minCapacity;
        }

        // Add the flow to the total max flow
        maxFlow += minCapacity;
    }

    return maxFlow;
}

int main() {
    struct Graph graph;
    graph.numNodes = N;
    graph.numEdges = 0;
    graph.head = (int*)malloc(N * sizeof(int));
    graph.next = (int*)malloc(M * 2 * sizeof(int));

    for (int i = 0; i < N; i++) {
        graph.head[i] = -1;
    }

    int n, m, s, t;
    scanf("%d %d", &n, &m);
    scanf("%d %d", &s, &t);

    for (int i = 0; i < m; i++) {
        int u, v, c;
        scanf("%d %d %d", &u, &v, &c);
        addEdge(&graph, u, v, c);
        addEdge(&graph, v, u, 0);
    }

    int maxFlow = fordFulkerson(&graph, s, t);
    printf("%d\n", maxFlow);

    free(graph.head);
    free(graph.next);

    return 0;
}
