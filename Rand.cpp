#include <iostream>
#include <cstdlib>

int main () {
    int num;
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        num = rand() % (6 - 1) + 1;
        std::cout << num << "\n";
    }
}