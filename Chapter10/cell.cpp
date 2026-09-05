#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
const int SPLIT_TIME_MIN = 500;
const int SPLIT_TIME_MAX = 2000;

class Cell;
priority_queue<Cell> cellQueue;

class Cell {
private:
    static int count;
    int id;
    int time;
public:
    Cell(int birth) : id(count++) {
        time = birth + (rand() % (SPLIT_TIME_MAX - SPLIT_TIME_MIN )) + SPLIT_TIME_MIN;
    }
    int getId() const { return id;}
    int getSplitTime() const { return time; }
    bool operator<(const Cell& s) const { return time > s.time; }

    void split() const {
        Cell child1(time), child2(time);
        cout << time << "s: Cell " << id << " splits into #" << child1.getId() << " and # " << child2.getId() << endl;
        cellQueue.push(child1);
        cellQueue.push(child2);
    }
};

int Cell::count = 0;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int t;
    cout << "Simulation time: ";
    cin >> t;
    cellQueue.push(Cell(0));
    while (cellQueue.top().getSplitTime() <= t) {
        cellQueue.top().split();
        cellQueue.pop();
    }
    return 0;
}
