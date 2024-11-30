#include<iostream>
using namespace std;

class Box{
    private:
        double width;
    
    public:
        Box(double w) : width(w){}
        friend void printWidth(Box box);
};

void printWidth(Box box){
    cout << "Width of the box : " << box.width << endl;
}
int main(){
    Box box(10.6);
    printWidth(box);
    return 0;
}