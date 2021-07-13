void dijkstra(int graph[9][9], int src) {
   int dist[9];
   int sptSet[9];
   for (int i = 0; i < 9; i++)
      dist[i] = INT_MAX, sptSet[i] = 0;
      dist[src] = 0;
   for (int count = 0; count < 9 - 1; count++) {
      int u = minDistance(dist, sptSet);
      sptSet[u] = 1;
      for (int v = 0; v < 9; v++)
         if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) dist[v] = dist[u] + graph[u][v];
   }
   printSolution(dist, 9);
}