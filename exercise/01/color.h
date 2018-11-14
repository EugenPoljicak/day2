#pragma once

class color
{
private:
  double red;
  double green;
  double blue;

public:
  color(double r = 0.0, double g = 0.0, double b = 0.0);
  double get_red() const;
  double get_green() const;
  double get_blue() const;

  void set_red(double value);
  void set_green(double value);
  void set_blue(double value);

  //  Error	C2678	binary '==': no operator found which takes a left - hand operand of type 'const T'
  bool operator==(const color& other) const;
  
  unsigned long get_color_ref() const;
  double get_luminance() const;

};