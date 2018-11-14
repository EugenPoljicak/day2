#include "pch.h"
#include "date.h"

class point
{
  int a, b;

public:
  point(int a = 0, int b = 0);
  int point_a() const { return a; }
  int point_b() const { return b; }
};

//////////////////
//# include "pch.h"
class point1
{
  int x, y;
public:
  point1(int init_x, int init_y) :x(init_x), y(init_y) {};
  //point1(int init_x, int init_y) :y(x + 10), x(init_x) {};
};

class rect
{
  point a, b;
public:
  rect(const point& init_a, const point& init_b ) : a(init_a),b(init_b){} // u ove vitičaste zagrade dolaze uvjeti
  rect(int x1, int y1, int x2, int y2) : a(x1,y1), b(x2,y2){}
};

//int main()
//{
//  point a(10, 10), b(20, 20);
//  rect r1(a, b);
//  rect r2(10, 10, 20, 20);
//}



///////-------------------------

class person {
protected:
  std::string name;
  date birth;
  std::string address;
};

class employee :public person {

  person p;
  std::string team;
  long long salary;
public:
  std::string report();
};

std::string employee::report()
{
  return name + std::to_string(salary);
};

int main() {
  employee e;
  e.p.name = "eugen";
}