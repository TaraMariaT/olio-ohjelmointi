#include <memory>
// #include <vector>
#include "Animal.h"
#include "Dog.h"

int main() {
    std::unique_ptr<Animal> animal = std::make_unique<Animal>();
    animal->callOut();

    std::unique_ptr<Animal> polyDog = std::make_unique<Dog>();
    polyDog->callOut();

    return 0;
}
