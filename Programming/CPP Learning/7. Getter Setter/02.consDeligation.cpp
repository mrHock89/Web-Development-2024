#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        // deligating constructor
        Chai(string name): Chai(name, 1, {"Water", "Tea"}){}

        // main constructor
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;

            cout << "Main Constructor is clled.\n";
        }
        //  mrthods
        void displayTeaDetailes(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingridients: " << endl;
            // Range-based for loop
            for(string ingredient : ingredients){
                cout << ingredient << " ";
            }
            cout << endl;
        }
};


int main(){
    Chai quickChai("Quick Chai");
    quickChai.displayTeaDetailes();
    return 0;
}