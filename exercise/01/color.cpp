#include "stdafx.h"
#include "color.h"
#include <Windows.h>

//  Error	C2678	binary '==': no operator found which takes a left - hand operand of type 'const T'
bool color::operator==(const color& other) const
{
  return red == other.red && green == other.green && blue == other.blue;
}

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


double setToValidRange(double val)
{
  if (val < 0.0)
    val = 0.0;
  else if (val > 1.0)
    val = 1.0;
  return val;

}

void color::set_red(double red)
{
  this->red = setToValidRange(red);
}
void color::set_green(double green)
{
  this->green = setToValidRange(green);
}
void color::set_blue(double blue)
{
  this->blue = setToValidRange(blue);
}

color::color(double red, double green, double blue)
{
  set_red(red);
  set_green(green);
  set_blue(blue);
}

unsigned long color::get_color_ref() const
{
  return RGB(static_cast<int>(red * 255), static_cast<int>(green * 255), static_cast<int>(blue * 255));
  //return RGB((int)red * 255, (int)green * 255, (int)blue * 255);
}

double color::get_luminance() const
{
  return 0.2126*red + 0.7152*green + 0.0722*blue;
}
