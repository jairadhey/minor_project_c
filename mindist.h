int minDistance(int dist[], int sptSet[]) {
   int min = INT_MAX, min_index;
   for (int v = 0; v < 9; v++)
   if (sptSet[v] == 0 && dist[v] <= min)
      min = dist[v], min_index = v;
   return min_index;
}