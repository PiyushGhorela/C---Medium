#include<iostream>
using namespace std;
class Area
{
    public:

    void Calculate(int radius){
        double CirArea = 3.14156*radius*radius;
        cout<<"Area of circle is: "<< CirArea<<endl;
    }

    void Calculate(int length,int breath){
        int RecArea = length * breath;
        cout<<"Area of rectangle is: " <<RecArea<<endl;
    }

    void Calculate(double hieght,double base){
        double TriArea = hieght*base/2; 
        cout<<"Area of Triangle: "<<TriArea<<endl;
    }
};

int main(){
    Area area;
    area.Calculate(5);
    area.Calculate(2,4);
    area.Calculate(3.0,8.0);
    return 0;
}

// Function Overloading with Area