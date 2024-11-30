#include<iostream>
#include<vector>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        // constructor
        Chai(){
            teaName = "Unknown tea";
            servings = 1;
            ingredients = {"Water", "Honey", "Tea"};
        }

        // parametarized constructor
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
        }

        // control way of access private attribute
        
        // 1. for teaName
        // getter -> get the value
        string getTeaName(){
            return teaName;
        }

        // setter -> set the value
        void setTeaName(string name){
            // logic
            teaName = name;
        }

        // 2. for servings
        int getServings(){
            return servings;
        }
        void setServings(int serve){
            servings = serve;
        }

        // 3. for ingredients
        vector<string> getIngredients(){
            return ingredients;
        }
        void setIngredients(vector<string> ingr){
            ingredients = ingr;
        }

        // mrthods
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
    Chai chai;
    chai.displayTeaDetailes();

    cout << "After modification : \n";
    chai.setTeaName("Leamon Tea");
    cout << chai.getTeaName() << endl;
    return 0;
}