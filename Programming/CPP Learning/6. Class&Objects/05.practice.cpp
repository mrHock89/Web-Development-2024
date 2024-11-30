#include<iostream>
#include<vector>
using namespace std;

// Class
class Chai{
    public:
        // Member attribute
        string* teaName;
        int servings;
        vector<string> ingridients;
    
        // Constructor

        // 1. default constructor
        // Chai(){
        //     cout << "Constructor is called.\n";
        // }

        // 2. Parametarized constructor
        Chai(string name, int serve, vector<string> ingr){
            teaName =new string(name) ;
            servings = serve;
            ingridients = ingr;
        }
        
        // 3. Copy Constructor
        Chai(const Chai& other){
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingridients = other.ingridients;
            cout << "Copy constructor called\n";
        }
 
        // Destructor
        ~Chai(){
            delete teaName;
            cout << "Destructor called\n";
        }
        // Member Functions
        void displayTeaDetiales(){
            cout << "Tea Name: " << *teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingridients: " << endl;
            // Range-based for loop
            for(string ingridient : ingridients){
                cout << ingridient << " ";
            }
            cout << endl;
        }
};

// Main functions
int main(){
    Chai defaultChai("Leamon Tea", 5, {"Water", "Leamon", "Honey", "Tea"});
    
    // copied constructor
    Chai copiedChai = defaultChai;
    copiedChai.displayTeaDetiales();

    // Modification
    *defaultChai.teaName = "Modified Leamon Tea";
    cout << "Modified Tea -----\n";
    defaultChai.displayTeaDetiales();
    cout << "Copied Tea -----\n";
    copiedChai.displayTeaDetiales(); // not copied to copiedChai

    return 0;
}