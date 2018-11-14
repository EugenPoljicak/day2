
class point
{
  int point_a, point_b;

public:
  point(int a = 0, int b = 0);
  bool operator==(const point& other) const;
  bool operator!=(const point& other) const;
  bool operator<(const point& other) const;

};
