/*Area of a circle*/

#include <iostream>
using namespace std;

class Circle{
private:
	float radius;
public:
	void setRadius(float radius){
	this->radius=radius;
}
	double getArea(){
		return 3.14*radius*radius;
	}
};
int main() {
	Circle circle;
	circle.setRadius(20);
	double area=circle.getArea();
	cout<<"Area is: "<<area<<" Square units."<<endl;


	return 0;
}

/*OUTPUT:
 * Area is: 1256 Square units.
 */
