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
        // default constructor
        Chai(){
            teaName = "Unknown tea";
            servings = 1;
            ingredients = {
                "Water",
                "Honey",
                "Tea Leaves"
            };
            cout << "DEfault Constructor is called.\n";

        }

        // parametarixed constructor
        Chai(string name, int serve, vector<string> ingr) : teaName(name), servings(serve), ingredients(ingr){}
        // display method

        // 1. getter and setter for teaName
        string getTeaName(){
            return teaName;
        }

        void setTeaName(string name){
            teaName = name;
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
    Chai chai;
    Chai chai2("Leamon Tea", 2, {"Water", "TEa", "Leamon"});
    chai.display();
    chai2.display();

    cout << "Getter and setter operation --------------- \n";
    cout << chai2.getTeaName() << endl;
    chai2.setTeaName("Cold Tea");
    cout << chai2.getTeaName() << endl;
    return 0;
}