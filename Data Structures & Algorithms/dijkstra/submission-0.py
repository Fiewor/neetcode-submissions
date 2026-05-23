class Solution:
    def shortestPath(self, n: int, edges: List[List[int]], src: int) -> Dict[int, int]:
        adj = defaultdict(list)

        for s, d, c in edges:
            adj[s].append((d, c))

        map = {}

        minHeap = [(0, src)]
        heapq.heapify(minHeap)

        while minHeap:
            cost, node = heapq.heappop(minHeap)

            if node in map:
                continue

            map[node] = cost
            
            for neigh, neigh_cost in adj[node]:
                heapq.heappush(minHeap, (cost + neigh_cost, neigh))

        for i in range(n):
            if i not in map: map[i] = -1

        return map