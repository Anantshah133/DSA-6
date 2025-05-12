#include<iostream>

using namespace std;

int main(){
    int radius;
    const float PI = 3.14;
    float area;

    cout << "Enter the radius of circle : ";
    cin >> radius; // 3

    area = PI * radius * radius; // right to left

    cout << "Area of circle : " << area;

    return 0;
}