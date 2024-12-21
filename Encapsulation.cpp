#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    int ID;
    string NAME;
    float SALARY;

    public:
    void input(){
        cout<<"Enter Employee ID: ";
        cin>>ID;
        cout<<"Enter Employee NAME: ";
        cin>>NAME;
        cout<<"Enter Employee SALARY: ";
        cin>>SALARY;

    }
    void display(){
        cout<<"Employee ID: "<<ID<<endl;
        cout<<"Employee NAME: "<<NAME<<endl;
        cout<<"Employee SALARY: "<<SALARY<<endl;
    }
};
int main(){
    Employee emp;
    emp.input();
    emp.display();
    return 0;
}
// Encapsulation concept of oops.