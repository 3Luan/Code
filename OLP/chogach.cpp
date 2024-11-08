#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() 
{
    ifstream cin("OLP2023.INP");
    ofstream cout("OLP2023.OUT");

	int X, Y, M;	
    cin >> X >> Y >> M;
    cin.close();

    int w = 0;
    
    for (int countX = 0; countX * X <= M; countX++) {
        for (int countY = 0; countY * Y <= M; countY++) {
            int totalWeight = countX * X + countY * Y;
            if (totalWeight <= M) {
                w = max(w, totalWeight);
            }
        }
    }

    cout << maxWeight << endl;
    cout.close();

    return 0;
}

