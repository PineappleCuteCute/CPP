#define MAX_NODES 100000

typedef struct Node {
    int value;
    struct Node* same[MAX_NODES];
    int same_count;
} Node;

void initialize(Node nodes[], int n) {
    for (int i = 1; i <= n; i++) {
        nodes[i].value = i;
        nodes[i].same_count = 0;
    }
}

void addEdge(Node nodes[], int u, int v) {
    nodes[u].same[nodes[u].same_count++] = &nodes[v];
    nodes[v].same[nodes[v].same_count++] = &nodes[u];
}

void dfs(Node nodes[], int n, int start) {
    int visited[MAX_NODES];
    for (int i = 1; i <= n; i++) {
        visited[i] = 0;
    }

    Node* stack[MAX_NODES];
    int stack_count = 0;

    stack[stack_count++] = &nodes[start];
    visited[start] = 1;

    while (stack_count > 0) {
        Node* current = stack[--stack_count];
        printf("%d ", current->value);

        for (int i = 0; i < current->same_count; i++) {
            Node* neighbor = current->same[i];
            if (!visited[neighbor->value]) {
                stack[stack_count++] = neighbor;
                visited[neighbor->value] = 1;
            }
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    Node nodes[MAX_NODES];
    initialize(nodes, n);

    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(nodes, u, v);
    }

    printf("1 ");
    dfs(nodes, n, 1);

    return 0;
}
