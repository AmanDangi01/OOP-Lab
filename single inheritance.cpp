#include <iostream>
using namespace std;
class person{
    public:
        char name[50];
        int age;
};
class sport{
    public:
    char sportname[100];
    int medals;
};
class student:private person,sport{
    public:
        void display(){
            cout<<"student name: "<<name<<endl;
            cout<<"student age: "<<age<<endl;
            cout<<"sport name: "<<sportname<<endl;
            cout<<"medals earned: "<<medals<<endl;
        }
        void set(){
            cout<<"enter name: ";
            cin>>name;
            cout<<"enter age: ";
            cin>>age;
            cout<<"enter sport name: ";
            cin>>sportname;
            cout<<"medals earned: ";
            cin>>medals;
        }
};
int main() {
    student st;
    st.set();
    st.display();
    return 0;
}
