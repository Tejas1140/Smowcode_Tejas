#include <iostream>
using namespace std;
int snailClimbingTime(int H, int U, int S) {
    int hours = 0;
    int height = 0;

    while (height < H) {
        height += U;  
        hours++;

        if (height >= H) {
            return hours;  
        }

        height -= S; 
    }

    return hours;
}

int main() {
    int H, U, S;

    cin >> H;
    cin >> U;
    cin >> S;

    if (S >= U) {
        cout << "Sliding speed must be less than climbing speed." << endl;
    } else {
        int hours = snailClimbingTime(H, U, S);
        cout << hours << endl;
    }

    return 0;
}
