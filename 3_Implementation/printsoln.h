int printSolution(int dist[], int n) {
   printf("Vertex Distance from Source\n");
   for (int i = 0; i < 9; i++)
      printf("%d \t %d\n", i, dist[i]);
}