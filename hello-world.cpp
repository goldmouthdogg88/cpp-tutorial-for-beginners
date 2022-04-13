#include <iostream>
using namespace std;
using std::cout;

int main()
{
    int numberOfCats = 5;
    int numberOfDogs = 7;
    int totalNumberOfAnimals = numberOfCats + numberOfDogs;
    cout << "Number of cats: " << numberOfCats << endl; // print Hello World
    cout << "Number of dogs: " << numberOfDogs << endl;
    totalNumberOfAnimals = totalNumberOfAnimals + 1;
    cout << "Total number of animals: " << totalNumberOfAnimals << endl;

    cout << "new dog arrived! " << endl;
    // numberOfDogs++;
    

    cout << "New number of dogs: " << numberOfDogs << endl;
    cout << "New number of animals: " << totalNumberOfAnimals << endl;
    
    
        return 0;
}
