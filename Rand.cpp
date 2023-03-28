#include <iostream>
#include <cstdlib>

int main () {
    int num;
    srand(time(0));
    //For Loop for iterating 10 numbers between 1-5.
    for (int i = 0; i < 10; i++)
    {
        num = rand() % 4 + 1;
        std::cout << num << "\n";
    }
}