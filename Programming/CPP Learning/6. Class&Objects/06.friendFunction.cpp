 #include<iostream>
 #include<vector>
 #include<string>

 using namespace std;

//  Class
class Chai{
    private:
        string teaName;
        int servings;
    public:
        // Parametarized constructor
        Chai(string name, int serve) : teaName(name), servings(serve){}

        // friend function to access private attribute
        friend bool compareServings(const Chai &chai1, const Chai &chai2);
        // method for display
        void display() const{ // const is used for valur unchange
            cout << "teaname: " << teaName << endl;
            cout << "servings: " << servings << endl;
        }
};

// definiation and declearation of friend function
bool compareServings(const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai2.servings;
}

// main function
int main(){
    Chai masalaChai("Masala Tea", 14);
    Chai gengerChai("Genger Tea", 8);

    // masalaChai.display();
    // gengerChai.display();
    // compare which tea is more 
    if(compareServings(masalaChai, gengerChai)){
        cout << "Masala chai is having more servings." << endl;
    }else {
        cout << "Masala chai is having less servings." << endl;
    }

    return 0;
}