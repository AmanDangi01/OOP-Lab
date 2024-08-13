#include <iostream>
using namespace std;

class Rectangle {
  private:
    int length;
    int width;
    int area;
  public:
    Rectangle() {
      length = 0;
      width = 0;
      area = 0;
    }
    Rectangle(int l) {
      length = l;
      width = 0;
      area = 0;
    }
    Rectangle(int l, int w) {
      length = l;
      width = w;
      area = 0;
    }
   
    void rectArea() {
      area = length * width;
    }
   
    int getRectArea() {
      return area;
    }
};

int main() {
  Rectangle r1(5);
  Rectangle r2(5, 10);
  
  r1.rectArea();
  cout << "Area of Rectangle r1 is: " << r1.getRectArea() << endl;

  r2.rectArea();
  cout << "Area of Rectangle r2 is: " << r2.getRectArea() << endl;

  return 0;
}
