#include<iostream>

using namespace std;

int main(){
    int base, height;
    float area;

    cout << "Enter base and height of triangle : ";
    cin >> base >> height;

    area = 0.5 * base * height;

    cout << "Area of triangle : " << area;

    return 0;
}

// 0.5 * base * height