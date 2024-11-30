#include<iostream>
#include<vector>
using namespace std;

// Class
class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;
    

    public:
        // Deligating constructor
        Chai(string name) : Chai(name, 4, {"Leamon", "Water", "Tea"}){}
        // default constructor
        Chai(string name, int serve, vector<string> ingr) : teaName(name), servings(serve), ingredients(ingr){
            cout << "Default Constrctor\n";
        }

        void display(){
            cout << "Tea name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients : " << endl;
            for(string ingredient : ingredients){
                cout << ingredient << " ";
            }
            cout << endl;
        }
};

// main function 
int main(){
    // Chai chai("Leamon", 3, {"Water", "Honey"});
    Chai chai("Leamon Tea");
    chai.display();
    return 0;
}