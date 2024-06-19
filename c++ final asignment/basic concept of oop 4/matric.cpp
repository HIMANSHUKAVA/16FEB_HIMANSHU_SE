#include <iostream>
#include <vector>

class Vector {
private:
    std::vector<int> elements;

public:
    // Constructor to initialize the vector with given elements
    Vector(const std::vector<int>& elems) : elements(elems) {}

    // Overloading the + operator to add two Vector objects
    Vector operator+(const Vector& other) const {
        // Check if the two vectors have the same size
        if (elements.size() != other.elements.size()) {
            throw std::invalid_argument("Vectors must be of the same size");
        }

        // Create a new vector to store the result
        std::vector<int> result(elements.size());

        // Add corresponding elements of the two vectors
        for (size_t i = 0; i < elements.size(); ++i) {
            result[i] = elements[i] + other.elements[i];
        }

        // Return the resulting vector
        return Vector(result);
    }

    // Function to print the elements of the vector
    void print() const {
        for (int elem : elements) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create two vectors
    std::vector<int> elems1 = {1, 2, 3, 4, 5};
    std::vector<int> elems2 = {5, 4, 3, 2, 1};

    // Initialize the Vector objects with the elements
    Vector vec1(elems1);
    Vector vec2(elems2);

    // Add the two vectors using the overloaded + operator
    Vector result = vec1 + vec2;

    // Print the result
    std::cout << "Resultant Vector: ";
    result.print();

    return 0;
}
