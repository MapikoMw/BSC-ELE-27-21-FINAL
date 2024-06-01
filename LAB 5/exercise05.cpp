#include <iostream>
using namespace std;
double calculateRectangleArea(double length, double width);
double calculatesquareArea (double side);
double calculateTriangleArea (double base, double height);

int main (){
    int choice;
    double area = 0.0;
    cout<< "please select the shape to calculate the area:"<<endl;
    cout<< "1. Rectangle"<<endl;
    cout<< "2. Square" << endl;
    cout<< "3.Triangle" <<endl;
    cout<< "4. Quit program"<<endl;
    cout<< "Enter Selection: "<<endl;
    cin>> choice;

    if (choice ==1){
        double length, width;
        cout<<"Enter length and width of the rectangle:";
        cin>>length>>width;
        area = length * width;
    } else if (choice == 2){
        double side;
        cout<<" Enter side fo the square:";
        cin>>side;
        area = side * side;
    } else if(choice ==3){
        double base, height;
        cout<<"Enter base and height of the Triangle";
        cin>> base>>height;
        area = 0.5 * base * height;
    } else if(choice == 4){
        cout<<"Program terminated." << endl;
    } else {
        cout<<"Invalid input please enter a valid selection"<< endl;
    }
    cout<< "Area : ";
    cout << area<< endl;
    return 0;

}