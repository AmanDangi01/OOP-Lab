#include <iostream>
using namespace std;

class Cir_de {
private:
    float radius;
    const float PI = 3.14159;
    static int count;

public:
    
    Cir_de() {
        radius = 3.0; 
        count++;
    }

    
    Cir_de(float r) {
        radius = r;
        count++;
    }

   
    float circle_area() {
        return PI * radius * radius;
    }

    
    void display_area() {
        cout << "The area of the circle with radius " << radius << " is: " << circle_area() << endl;
    }

    
    static int get_count() {
        return count;
    }
};


int Cir_de::count = 0;

int main() {
    Cir_de circle1; 
    circle1.display_area();

    Cir_de circle2(5.0); 
    circle2.display_area();

    cout << "Total Cir_de objects created: " << Cir_de::get_count() << endl;

    return 0;
}
