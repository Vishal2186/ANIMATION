#include <iostream>
#include <thread>
using namespace std;
int n = 200;

void animate(string s) {
    const int width = 100; // Width of the console animation
    int pos = 0;
    int direction = 1; // 1 for right, -1 for left

    while (n--) {
        system("clear");
    cout<<"\n\nSHIBUYA STATION                                                                                             TOKYO STATION";
        cout<<endl;cout<<endl;
        // Print spaces before the dot
        for (int i = 0; i < pos; i++) {
            cout << " ";
        }
        cout << s <<endl;

        // Update position
        pos += direction;
        if (pos == width || pos == 0) {
            direction *= -1; // Reverse direction
        }

        this_thread::sleep_for(chrono::milliseconds(100)); // Adjust speed
    }
}

int main() {
    animate("<--|(o_o)|__|(o_o)|__|(o_o)|-->");
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tH A P P Y   J O U R N Y";
    cout<<endl;
    cout<<endl;
    return 0;
}