#include<iostream>
#include<vector>
using namespace std;

// class decleration

// stardered practice -> Always wire class's First latter in Capital and object in small latter
class Chai{
    // Class have three types of block
    // 1. private (default)
    // 2. public
    // 3. protected

    public:
        // data members (attributes)
        string teaName;
        int servings;
        vector<string> ingridients;

        // Member Functions
        void displayChaiDetials(){
            cout << "Tea name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";
            for(string ingridient: ingridients){ // Ramge-based for loop
                cout << ingridient << " ";
            }
            cout << endl;
        }
    // private:
    //     string name;
};

// object
int main(){
    // object 1
    Chai chai; // Chai is a Class and chai is an objected created from Chai Class

    // Accessing Class properties
    chai.teaName = "Leamon Tea";
    // chai.teaName = "Leamon Tea"
    chai.servings = 2;
    chai.ingridients = {"water", "Leamon", "Honey", "Tea"};
    
    // output
    chai.displayChaiDetials();

    // Object 2
    Chai chai2;
    chai2.teaName = "Masala Tea";
    chai2.servings = 4;
    chai2.ingridients = {"Masala","Water","Honey","Tea"};
    chai2.displayChaiDetials();
    return 0;
}