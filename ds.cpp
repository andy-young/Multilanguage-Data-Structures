#include <iostream>
#include <string>
using namespace std;

// Create a Runner class with some attributes
class Runner
{
public:
    string name;
    int mon;
    int tue;
    int wed;
    int thu;
    int fri;
    int sat;
    int sun;
};

int main()
{
    // Create an object of Runner
    Runner runner_001;
    runner_001.name = "Curtis Weisenberger";
    runner_001.mon = 12.04;
    runner_001.tue = 14.04;
    runner_001.wed = 16.26;
    runner_001.thu = 12.02;
    runner_001.fri = 15.14;
    runner_001.sat = 12.65;
    runner_001.sun = 20.02;

    // Create another object of Runner
    Runner runner_002;
    runner_002.name = "Aaron Kleinman";
    runner_001.mon = 8;
    runner_001.tue = 19;
    runner_001.wed = 13.1;
    runner_001.thu = 9.61;
    runner_001.fri = 17.42;
    runner_001.sat = 9.06;
    runner_001.sun = 23.8;

    // Print attribute values
    cout << runner_001.name << " " << runner_001.mon << "\n";
    cout << runner_002.name << " " << runner_002.mon << "\n";
    return 0;
}