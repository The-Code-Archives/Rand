#include <iostream>
#include <cstdlib>

int randomdigit();

int main () {

    srand(time(NULL));

    int phoneNum;

    std::cout << "Enter how many phone numbers you would like to have: ";
    std::cin >> phoneNum;



    for (int i = 0; i < phoneNum; i++)
    {
        std::cout << "Phone number: " << randomdigit() << randomdigit() << randomdigit() << 
        "-" << randomdigit() << randomdigit() << randomdigit() 
        << "-" << randomdigit() << randomdigit() << randomdigit() << randomdigit() << "\n";
    }

        

}

int randomdigit ()
{
    return rand () % 10;
}