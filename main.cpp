#include <iostream>
#include <fstream>
#include "reservoir.h"

const int MAX_RESERVOIRS = 10;

void saveToTextFile(Reservoir** reservoirs, int count) {
    ofstream file("reservoirs.txt");
    if (file.is_open()) {
        for (int i = 0; i < count; ++i) {
            file << reservoirs[i]->getName() << " "
                << reservoirs[i]->getWidth() << " "
                << reservoirs[i]->getLength() << " "
                << reservoirs[i]->getMaxDepth() << endl;
        }
        file.close();
        cout << "Data saved to reservoirs.txt" << endl;
    }
    else {
        cerr << "Unable to open file" << endl;
    }
}

void deleteReservoirs(Reservoir** reservoirs, int count) {
    for (int i = 0; i < count; ++i) {
        delete reservoirs[i];
    }
}

int main() {
    Reservoir* reservoirs[MAX_RESERVOIRS] = { nullptr };
    int count = 0;

    reservoirs[count++] = new Reservoir("Sea", 100, 200, 50);
    reservoirs[count++] = new Reservoir("Lake", 50, 70, 20);
   

    saveToTextFile(reservoirs, count);

    deleteReservoirs(reservoirs, count);

    return 0;
}