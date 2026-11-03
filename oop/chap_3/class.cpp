//wap to calculate area and perimeter
#include<iostream>
using namespace std;

class arpr{
    private:
    int l, b;
    public:
    void setdata();
    void area();
    void perimeter();
};

void arpr :: setdata(){
    cout << "Enter the length and breadth:";
    cin >> l >> b; 
}

void arpr :: area(){
    int area;
    area = l * b;
    cout << "The area of a rectangle is : " << area << endl;
}

void arpr :: perimeter(){
    int perimeter;
    perimeter = 2 * (l + b);
    cout << "The perimeter of rectangle is:" << perimeter << endl;
}

int main(){
    arpr ap;
    ap.setdata();
    ap.area();
    ap.perimeter();
    return 0;
}