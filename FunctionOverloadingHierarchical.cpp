#include<iostream>
using namespace std;
class Salary{
    public:
    long Stipend,basesal,bonuses,incentives;

    Salary(){
    cout<<"Stipend: ";
    cin>>Stipend;
    cout<<"basesal: ";
    cin>>basesal;
    cout<<"bonuses: ";
    cin>>bonuses;
    cout<<"incentives: ";
    cin>>incentives;
    }
    void Intern(){
        int ISalary = Stipend;
        cout<<"Intern: "<<ISalary<<endl;
    }

    void Regular(){
        int RSalary = bonuses + basesal;
        cout<<"Regular Employee: "<<RSalary<<endl;
    }

    void Manager(){
        int MSalary = bonuses + basesal + incentives;
        cout<<"Manager: "<<MSalary<<endl;
    }

};

int main(){
    Salary salary;
    salary.Intern();
    salary.Regular();
    salary.Manager();

    return 0;
}

// Function Overloading with Hierarchical Structure.

