#pragma once

class color
{
private:
  double red;
  double green;
  double blue;
public:
 
  double get_red() const;
  double get_green() const;
  double get_blue() const;

  void set_red(double value);
  void set_green(double value);
  void set_blue(double value);
  
  color(double r = 0.0, double g = 0.0, double b = 0.0);
  //{ //Why this doesn't work? - Error	C2440	'<function-style-cast>': cannot convert from 'initializer list' to 'color'	color_test
  //  double red = 0.0;
  //  double green = 0.0;
  //  double blue = 0.0;
  //}
};