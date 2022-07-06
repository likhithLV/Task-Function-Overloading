#include <iostream>
#include<cstdlib>

using namespace std;
float area(float r){  // For Circle ;
return ((3.14)*r*r);
}
float area(float l,float b){
return l*b ;
}
float area(float h,float b,float x){
return (0.5*h*b);
}
int main()
{  float b,h,r,l;
        int choice;

    cout << "Menu" << endl;
    while(1){
        cout<<"\n 1. Area of Circle";
                cout<<"\n 2. Area of Triangle";
                cout<<"\n 3. Area of Rectangle";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>choice;
                switch(choice){
                case (1):{
                cout<<"\n Enter the Radius of Circle : ";
                cin>>r;
                cout<<"\n Area of Circle : "<<area(r);
                break;
                }
                case(2):{
                cout<<"\n Enter the Base & Height of Triangle : ";
                cin>>b>>h;
                cout<<"\n Area of Triangle : "<<area(h,b,1);
                break;
                }
                case(3):{
                cout<<"\n Enter the Length & Breadth of Rectangle : ";
                cin>>l>>b;
                cout<<"\n Area of Rectangle : "<<area(l,b);
                break;
                }
                case(4):
                return 0;

                default:
                cout<<"\n Invalid Choice... ";
    }
    }

}
