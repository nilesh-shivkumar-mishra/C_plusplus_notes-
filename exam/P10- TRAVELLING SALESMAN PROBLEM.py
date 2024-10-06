from sys import maxsize
from itertools import permutations

def travellingSalesmanProblem(graph, s):
    """
    Solves the Traveling Salesman Problem using brute force.

    Args:
        graph (list of lists): Adjacency matrix representing the graph.
        s (int): Starting vertex.

    Returns:
        int: Minimum path weight.
    """
    v = len(graph)
    vertex = [i for i in range(v) if i != s]
    min_path = maxsize

    for permutation in permutations(vertex):
        current_path_weight = 0
        k = s
        for j in permutation:
            current_path_weight += graph[k][j]
            k = j
        current_path_weight += graph[k][s]
        min_path = min(min_path, current_path_weight)

    return min_path

if __name__ == "__main__":
    graph = [[0, 10, 15, 20], [10, 0, 35, 25], [15, 35, 0, 30], [20, 25, 30, 0]]
    s = 0
    print(travellingSalesmanProblem(graph, s))
