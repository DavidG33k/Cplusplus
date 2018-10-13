#include <iostream>
#include <math.h>
using namespace std;

void Basic();
void Heron();
void Trigonometric();

int main () {

    int choice;

    cout << "This software can calculate the area of triangle with three different methods." << endl << endl;
    cout << "Please choice the metod you prefer (1 for basic formula, 2 for Heron's formula, 3 for trigonometric formula): ";
    cin >> choice;

    if(choice == 1)
       Basic();
    else if(choice == 2)
        Heron();
    else if (choice == 3)
       Trigonometric();


return 0;
}

void Basic() {
    float b, h;

    cout << "Insert base: ";
    cin >> b;
    cout << "Insert height: ";
    cin >> h;

    cout << endl;

    cout << "The area of the triangle is " << (b*h)/2 << "." << endl;
    }

void Heron() {
    float A, B, C, semiP, Area;

    cout << "Insert first side: ";
    cin >> A;
    
    cout << "Insert second side: ";
    cin >> B;

    cout << "Insert third side: ";
    cin >> C;

    cout << endl;

    semiP=(A+B+C)/2;

    if(semiP<=A or semiP<=B or semiP<=C)
        cout << "This triangle doesn't exist!" << endl;
    else
        Area=sqrt((semiP-A)*(semiP-B)*(semiP-C)*semiP);

    cout << "The area of the triangle is " << Area << "." << endl;
}

void Trigonometric() {
    float A, B, alpha, Area;

    cout << "Insert first side: ";
    cin >> A;
    cout << "Insert second side: ";
    cin >> B;
    cout << "Insert the included angle in degrees: ";
    cin >> alpha;

    cout << endl;

    alpha=(alpha*2*M_PI)/360;
    Area=(A*B*sin(alpha)/2);
    cout << "The area of the triangle is " << Area << "." << endl;
}