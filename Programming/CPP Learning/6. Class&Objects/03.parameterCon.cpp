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
       // parameter constructor
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingridients = ingr;
            cout << "Parameter Constructor called." << endl;
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
    Chai defaultChai("Leamon Tea", 2, {"Water", "Leamon", "Tea", "Honey"});
    defaultChai.displayTeaDetails();
    cout << defaultChai.teaName << endl;;
    return 0;
}