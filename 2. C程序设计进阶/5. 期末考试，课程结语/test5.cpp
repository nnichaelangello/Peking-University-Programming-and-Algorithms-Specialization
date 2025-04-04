#include <iostream>
#include <cstring>

#define MAX 100

struct Point { int x, y; };

int main() {
    int n, m;
    char maze[MAX][MAX];
    Point q[MAX*MAX];
    int dist[MAX][MAX];
    Point start, end;

    // Input handling
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> maze[i][j];
            if (maze[i][j] == 'S') start = {i,j};
            if (maze[i][j] == 'T') end = {i,j};
        }
    }

    // Initialize
    memset(dist, -1, sizeof(dist));
    dist[start.x][start.y] = 0;
    int front = 0, rear = 0;
    q[rear++] = start;

    // BFS with manual queue
    const int dx[] = {-1,1,0,0};
    const int dy[] = {0,0,-1,1};
    
    while (front < rear) {
        Point cur = q[front++];
        
        // Early exit if reached target
        if (cur.x == end.x && cur.y == end.y) {
            std::cout << dist[cur.x][cur.y];
            return 0;
        }

        for (int i = 0; i < 4; ++i) {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && 
                maze[nx][ny] != '#' && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[cur.x][cur.y] + 1;
                q[rear++] = {nx,ny};
            }
        }
    }

    // If no path found (shouldn't happen per problem statement)
    std::cout << -1;
    return 0;
}