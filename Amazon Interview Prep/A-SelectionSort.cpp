#include <iostream>

void selectionSort(int list[], int lenght);

int main()
{

    int list[] = {214, 2, 53, 52, 1, 5, 9, 15};

    selectionSort(list, 8);

    for (int i = 0; i<8; i++)
        std::cout << list[i] << ' ';
    
}

void selectionSort(int list[], int lenght)
{
    int minIndex, location, temp;

    for (int i=0; i<lenght-1; i++){
        minIndex = i;

        for(location = i+1; location < lenght; location++)
            if(list[location] < list[minIndex])
                minIndex = location;
        
        temp = list[minIndex];
        list[minIndex] = list[i];
        list[i] = temp;
    }
}