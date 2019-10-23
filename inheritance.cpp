/**
 * Created by Cooper Redfern
 * Small program to demonstrate C++ classes and inheritance
 */

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

// Creating the parent class
class Bike{
// Set all the class attributes
private:
    static int numOfBikes;
    int weight;
    int modelNum;
    string color;
    string model;

// Create all the getters and setters for the class
public:
    int getWeight(){return weight;}
    int getModelNum(){return modelNum;}
    string getColor(){return color;}
    string getModel(){return model;}
    void setWeight(int lbs){weight = lbs;}
    void setModelNum(int mn){modelNum = mn;}
    void setColor(string col){color = col;}
    void setModel(string mod){model = mod;}

    // Prototype the class
    Bike(int, int, string, string);

    //Destructor for the class
    ~Bike();

    //Overload
    Bike();

    static int getNumOfBikes(){ return numOfBikes; }

    void toString();

};

int Bike::numOfBikes = 0;

// Class constructor
Bike::Bike(int weight, int modelNum, string color, string model){
    this -> weight = weight;
    this -> modelNum = modelNum;
    this -> color = color;
    this -> model = model;
    Bike::numOfBikes++;
}

// Class Destructor
Bike::~Bike(){
    cout << "Bike " << this -> modelNum << " destructed." << endl;
}

// Overload Constructor
Bike::Bike(){
    Bike::numOfBikes++;
}

// ToString Constructor
void Bike::toString() {
    cout << "Bike " << this -> modelNum << " is " << this -> color << ", weighs " << this -> weight <<
    " pounds, and is a " << this -> model << "." << endl;
}

// Child class 'MountainBike' inherits parent class 'Bike'
class MountainBike : public Bike{

// Additional Attributes
private:
    int numOfGears;

// Additional Getters and Setters
public:
    int getNumOfGears(){return numOfGears;}
    void setNumOfGears(int gears){numOfGears = gears;}

    MountainBike(int, int, string, string, int);

    MountainBike() : Bike(){};

    void toString();

};

MountainBike::MountainBike(int weight, int modelNum, string color, string model, int numOfGears) :
Bike(weight, modelNum, color, model){
    this -> numOfGears = numOfGears;
}

void MountainBike::toString() {
    cout << "Mountain Bike " << this -> getModelNum()<< " is " << this -> getColor() << ", weighs "
    << this -> getWeight() <<" pounds, has " << this -> getNumOfGears() << " gears, and is a "
    << this -> getModel() <<"." << endl;
}

int main(){
    // Creating a bike with an overload
    Bike one;
    // Create a bike with a normal constructor
    Bike two(10, 47, "red", "Giant");
    // Create a mountainBike with additional attribute
    MountainBike three(12, 32, "green", "Schwinn", 6);

    // Setting the attributes using a setter
    one.setColor("blue");
    one.setModel("Schwinn");
    one.setModelNum(23);
    one.setWeight(8);

    // Display all the bikes and their attributes on the console
    one.toString();
    two.toString();
    three.toString();

    // Display the number of bikes
    cout << "Number of Bikes: " << Bike::getNumOfBikes() << endl;

    return 0;
}