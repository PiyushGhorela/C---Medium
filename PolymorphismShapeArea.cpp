#include<iostream>
using namespace std;
class shape{
    public:
    int R , L , B , Base , H;
    void input(){
        cout<<"Radius: ";
        cin>>R;
        cout<<"Length: ";
        cin>>L;
        cout<<"Breath: ";
        cin>>B;
        cout<<"Base: ";
        cin>>Base;
        cout<<"Height: ";
        cin>>H;
    }
};
class circle : public shape{
    public:
    void CArea(){
    float C_Area = 3.14*R*R;
    cout<<"Circle Area: "<<C_Area<<endl;
    }
};

class rectangle: public shape{
    public:
    void RArea(){
    int R_Area = L*B;
    cout<<"Rectangle Area: "<<R_Area<<endl;
    
}
};

class triangle : public shape{
    public:
    void TArea(){
    float T_Area =( H * Base )/ 2.0;
    cout<<"Triangle Area: "<<T_Area;
    
}
};

int main(){
    shape s;
    s.input();

    circle c;
    c.R = s.R;
    c.CArea();

    rectangle r;
    r.L = s.L;
    r.B = s.B;
    r.RArea();

    triangle t;
    t.H = s.H;
    t.Base = s.Base;
    t.TArea();
    return 0;
}

// Polymorphism with Shape Area Calculation.