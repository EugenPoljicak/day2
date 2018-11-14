#include "stdafx.h"
#include "color.h"


double color::get_red() const
{
  return red;
}

double color::get_green() const
{
  return green;
}

double color::get_blue() const
{
  return blue;
}


void setToValidRange(double& val)
{
  if (val < 0.0)
    val = 0.0;
  else if (val > 1.0)
    val = 1.0;

}

void color::set_red(double red)
{
  setToValidRange(red);
}
void color::set_green(double green)
{
  setToValidRange(green);
}
void color::set_blue(double blue)
{
  setToValidRange(blue);
}

color::color(double red, double green, double blue)
{
  set_red(red);
  set_green(green);
  set_blue(blue);
}