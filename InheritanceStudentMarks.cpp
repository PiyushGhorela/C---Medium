#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    int RollNumber;
    string Name;
};
class Result: public Student{
    private:
    int m1,m2,m3;
    int Total;
    double percent;

    public:
    void input(){
    cout<<"Enter Roll Number: ";
    cin>>RollNumber;
    cout<<"Enter Name: ";
    cin>>Name;
    cout<<"Enter Three subjects marks out of 100: "<<endl;
    cin>>m1;
    cin>>m2;
    cin>>m3;
        
    }
    void calculate(){
        Total = m1 + m2 + m3;
        cout<<"Total Marks: "<<Total<<endl;
    }

    void percentage(){
        percent = (static_cast<double>(Total) / 300) * 100;   ;
        cout<<"Percentage: "<<percent;
    }
};

int main(){
    Result obj;
    obj.input();
    obj.calculate();
    obj.percentage();
    return 0;
}

// Shows student's total marks and percentage using inheritance.