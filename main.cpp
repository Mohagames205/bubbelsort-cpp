#include <iostream>
#include <vector>

using std::cout;


bool isUnsorted(std::vector<int> array, int arrSize) {
    bool unsorted = false;
    for (int x = 0; x < arrSize; x++) {
        int currentCursor = x;
        int shiftedCursor = x + 1;

        if (array[shiftedCursor] < array[currentCursor]) {
            unsorted = true;
        }
    }

    return unsorted;
}


int main() {
    int amountOfNumbers;
    std::vector<int> numArray = {};

    cout << "How many numbers do you want to sort?" << std::endl;
    std::cin >> amountOfNumbers;

    for (int x = 0; x < amountOfNumbers; x++) {
        int number;
        cout << "Vul nummer " << x + 1 << " in" << std::endl;
        std::cin >> number;
        numArray.push_back(number);
    }

    int arrSize = amountOfNumbers;


    while (isUnsorted(numArray, arrSize)) {
        for (int x = 0; x < arrSize - 1; x++) {
            int currentCursor = x;
            int shiftedCursor = x + 1;

            int currentElement = numArray[currentCursor];
            int shiftedElement = numArray[shiftedCursor];

            if (numArray[shiftedCursor] < numArray[currentCursor]) {
                numArray[shiftedCursor] = currentElement;
                numArray[currentCursor] = shiftedElement;
            }
        }
    }


    for (int x = 0; x < arrSize; x++) {
        cout << numArray[x] << "  ";
    }


}
