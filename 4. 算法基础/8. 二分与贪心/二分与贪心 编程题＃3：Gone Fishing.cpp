#include <iostream>
#include <cstring>
using namespace std;

const int MAX_LAKES = 25;

struct Lake {
    int fish;
    int decrease;
    int time;
};

int main() {
    int n;
    bool firstCase = true;
    while (cin >> n && n != 0) {
        if (!firstCase) {
            cout << endl;
        }
        firstCase = false;
        
        int h;
        cin >> h;
        Lake lakes[MAX_LAKES];
        
        // Read initial fish counts
        for (int i = 0; i < n; ++i) {
            cin >> lakes[i].fish;
        }
        
        // Read decrease rates
        for (int i = 0; i < n; ++i) {
            cin >> lakes[i].decrease;
        }
        
        // Read travel times
        for (int i = 0; i < n - 1; ++i) {
            cin >> lakes[i].time;
            lakes[i].time *= 5; // Convert to minutes
        }
        
        int maxFish = -1;
        int bestTime[MAX_LAKES] = {0};
        
        // Try stopping after each lake
        for (int stopLake = 0; stopLake < n; ++stopLake) {
            int totalTime = h * 60;
            int currentFish = 0;
            int tempTime[MAX_LAKES] = {0};
            int tempFish[MAX_LAKES];
            
            // Subtract travel time to reach the stop lake
            for (int i = 0; i < stopLake; ++i) {
                totalTime -= lakes[i].time;
                if (totalTime <= 0) break;
            }
            
            if (totalTime <= 0) continue;
            
            // Copy initial fish counts
            for (int i = 0; i <= stopLake; ++i) {
                tempFish[i] = lakes[i].fish;
            }
            
            // Greedily fish in the best available lake
            while (totalTime >= 5) {
                int maxIndex = 0;
                for (int i = 1; i <= stopLake; ++i) {
                    if (tempFish[i] > tempFish[maxIndex]) {
                        maxIndex = i;
                    }
                }
                
                if (tempFish[maxIndex] <= 0) break;
                
                currentFish += tempFish[maxIndex];
                tempTime[maxIndex] += 5;
                totalTime -= 5;
                
                tempFish[maxIndex] -= lakes[maxIndex].decrease;
                if (tempFish[maxIndex] < 0) {
                    tempFish[maxIndex] = 0;
                }
            }
            
            // If remaining time, spend it at lake 1 (as per problem requirements)
            if (totalTime > 0) {
                tempTime[0] += totalTime;
            }
            
            // Check if this is better than current best
            if (currentFish > maxFish) {
                maxFish = currentFish;
                memcpy(bestTime, tempTime, sizeof(bestTime));
            } else if (currentFish == maxFish) {
                // Check if this solution is preferred (more time at earlier lakes)
                bool better = false;
                for (int i = 0; i <= stopLake; ++i) {
                    if (tempTime[i] > bestTime[i]) {
                        better = true;
                        break;
                    } else if (tempTime[i] < bestTime[i]) {
                        break;
                    }
                }
                if (better) {
                    memcpy(bestTime, tempTime, sizeof(bestTime));
                }
            }
        }
        
        // Output the result
        cout << bestTime[0];
        for (int i = 1; i < n; ++i) {
            cout << ", " << bestTime[i];
        }
        cout << endl;
        cout << "Number of fish expected: " << maxFish << endl;
    }
    return 0;
}