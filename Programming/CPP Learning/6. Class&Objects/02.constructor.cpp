#include<iostream>
#include<vector>
using namespace std;

// Class
class Chai{
    public: 
        string teaName;
        int servings;
        vector<string> ingridients;

        // Constructor
        /*
        1. Constructor name must be same as Class name
        2. It does not return anythings
        */
        // Default constructor
    //    Chai(){
    //         cout << "Constructor called." << endl;
    //    }

        Chai(){
            teaName = "Unknown Tean";
            servings = 3;
            ingridients = {"Water", "Tea Leaves"};
            cout << "Constructor called." << endl;
        }

        void displayTeaDetails(){
            cout << "Tea name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingridients: ";
            for(string ingridient : ingridients){
                cout << ingridient << " ";
            }
            cout << endl;
        }
};

//  Main function
int main(){
    Chai defaultChai;
    defaultChai.displayTeaDetails();
    cout << defaultChai.teaName << endl;;
    return 0;
}