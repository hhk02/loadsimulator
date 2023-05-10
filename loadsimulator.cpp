#include <iostream>
#include <unistd.h>
#include <stdlib.h>

// by hhk02

int i = 0;
int progress = 0;
void LoadingSimulator(int progress , int total)
{
    while(progress<=total)
    {
        progress++;
        sleep(50);
        if (progress>=total)
        {
            std::cout << "Loaded sucessfull" << std::endl;
            break;
            getchar();
        }
    }
}

int main(int argc, char argv[], int maxValue)
{
    std::cout << "Specify the max value for the load simulation: " << std::endl;

    std::cin >> maxValue;

    if (maxValue = NULL)
    {
        std::cout << "Invalid value!" << std::endl;
        std::cin >> maxValue;
    }
    else {
        std::cout << "Loading..." << std::endl;
        LoadingSimulator(progress,maxValue);
    }
}