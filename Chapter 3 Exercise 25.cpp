#include <iostream>

int main() {
    double R;
    double E;
    double S;

    std::cout << "Enter the length of the row, in feet: ";
    std::cin >> R;

    std::cout << "Enter the amount of space used by an end-post assembly, in feet: ";
    std::cin >> E;

    std::cout << "Enter the amount of space between the vines, in feet: ";
    std::cin >> S;

    if (S > 0) {
        int V = static_cast<int>((R - 2 * E) / S);

        std::cout << "The number of grapevines that will fit in the row is: " << V << std::endl;
    }
    else {
        std::cout << "Error: Space between vines must be greater than zero." << std::endl;
    }

    return 0;
}