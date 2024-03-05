def is_hamiltonian(graph):
    def is_valid(v, pos, path):
        if graph[path[pos - 1]][v] == 0:
            return False

        if v in path:
            return False

        return True

    def hamiltonian_util(path, pos):
        if pos == num_nodes:
            return True

        for v in range(1, num_nodes + 1):
            if is_valid(v, pos, path):
                path[pos] = v
                if hamiltonian_util(path, pos + 1):
                    return True
                path[pos] = 0

        return False

    num_nodes, num_edges = graph[0]
    path = [0] * (num_nodes + 1)

    for i in range(1, num_nodes + 1):
        path[1] = i
        if hamiltonian_util(path, 2):
            return 1
    return 0

def main():
    T = int(input())
    for _ in range(T):
        n, m = map(int, input().split())
        graph = [[0] * (n + 1) for _ in range(n + 1)]

        for _ in range(m):
            u, v = map(int, input().split())
            graph[u][v] = 1
            graph[v][u] = 1

        result = is_hamiltonian(graph)
        print(result)

if __name__ == "__main__":
    main()
