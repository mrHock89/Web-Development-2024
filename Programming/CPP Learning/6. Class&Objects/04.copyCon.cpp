#include<iostream>
#include<vector>
using namespace std;

// Class
class Chai{
    public: 
        string* teaName;
        int servings;
        vector<string> ingridients;

        // Constructor
        /*
        1. Constructor name must be same as Class name
        2. It does not return anythings
        */
       // parameter constructor
        Chai(string name, int serve, vector<string> ingr){
            teaName = new string(name);
            servings = serve;
            ingridients = ingr;
            cout << "Parameter Constructor called." << endl;
        }


        //Copy constructor
        Chai(const Chai& other){ //const is used so that the value can be constant
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingridients = other.ingridients;
            cout << "Copy constructor called\n";
        }

        // Distructor
        ~Chai(){
            delete teaName;
            cout << "Distructor Called\n";
        }
        void displayTeaDetails(){
            cout << "Tea name: " << *teaName << endl;
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
    Chai leamonTea("Leamon Tea", 2, {"Water", "Leamon", "Tea", "Honey"});
    // leamonTea.displayTeaDetails();

    // copy the onject
    // unpure copied constructor
    Chai copiedChai = leamonTea;
    // copiedChai.displayTeaDetails();

    // modification of leamon tea
    *leamonTea.teaName = "Modified leamon Tea";
    cout << "Leamon Tea: --------" << endl;
    leamonTea.displayTeaDetails();

    cout << "Copied Tea: --------" << endl;
    copiedChai.displayTeaDetails();

    return 0;
}