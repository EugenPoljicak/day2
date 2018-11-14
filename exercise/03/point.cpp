#include "point.h"

point::point(int a, int b) :point_a(a), point_b(b)
{

}

bool point::operator==(const point& other) const
{
  return point_a==other.point_a && point_b == other.point_b;
}

bool point::operator!=(const point& other) const
{
  return point_a != other.point_a && point_b != other.point_b;
}

bool point::operator<(const point& other) const
{
  return point_a < other.point_a || point_b < other.point_b;
}