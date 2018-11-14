#include "point.h"

bool operator==(const point a, const point b)
{
  return a.point_a() == b.point_a() && a.point_b() == b.point_b();
}