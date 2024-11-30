#include<iostream>
#include<string>
using namespace std;

class Tea{
    public:
        virtual void prepareIngredients() = 0; // pure virtual function
        virtual void brew() = 0;
        virtual void serve() = 0;

        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }

};

class GreenTea : public Tea{
    public:
        void prepareIngredients() override {
            cout << "Green leaves and water is ready" << endl;
        }
        void brew() override {
            cout << "Tea brewed" << endl;
        }
        void serve() override {
            cout << "Tea Served" << endl;
        }
};
class MasalaTea : public Tea{
    public:
        void prepareIngredients() override {
            cout << "Green leaves and water is ready along with masala" << endl;
        }
        void brew() override {
            cout << "Tea brewed" << endl;
        }
        void serve() override {
            cout << "Tea Served" << endl;
        }
};

int main(){
    GreenTea  greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();
    return 0;
}