#include <iostream>

using namespace std;

class Marks {
private:
    int sno;
    float percentage;

public:
    Marks() : sno(0), percentage(0.0f) {}

    Marks(int r, float p) : sno(r), percentage(p) {}

    int getRollNo() const {
        return sno;
    }

    float getPercentage() const {
        return percentage;
    }

    void setMarks(int r, float p) {
        sno = r;
        percentage = p;
    }
    
};

class Student {
private:
    string name;
    Marks Mobj;

public:
    void setName(string s) {
        name = s;
    }

    string getName() const {
        return name;
    }

    void setMarks(int r, float p) {
        Mobj.setMarks(r, p);
    }

    int getRollNo() const {
        return Mobj.getRollNo();
    }

    float getPercentage() const {
        return Mobj.getPercentage();
    }

    void getResult() const {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << Mobj.getRollNo() << endl;
        cout << "Percentage: " << Mobj.getPercentage() << "%" << endl;
    }
};

int main() {
    Student St[5];
  // Marks MK[5];

    St[0].setName("Abhay");
    St[0].setMarks(1, 89.5);

    St[1].setName("Haidar");
    St[1].setMarks(2, 76.2);

    St[2].setName("Manav");
    St[2].setMarks(3, 92.3);

    St[3].setName("Dev");
    St[3].setMarks(4, 85.0);

    St[4].setName("Ekans");
    St[4].setMarks(5, 78.9);

   
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        St[i].getResult();
        cout << endl;
    }

    return 0;
}
