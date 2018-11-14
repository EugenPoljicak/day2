#include "array.h"
#include<stdexcept>
//array_default_constructor
array::array() : p(nullptr),n(0)
{
}

//array_constructor
array::array(int size, double value)
{
  if (size > 0)
  {
    n = size;
    p = new double[n];
    for (int i = 0; i < n; i++)
    p[i] = value;
  }
  else
  {
    n = 0;
    p = nullptr;
  }
 }


int array::size() const
{
  return n;
}

double array::at(int index) const
{
  // array_index_invalid_large  and  array_index_invalid_negative
  if (index < 0 || index >= n)
  {
    throw std::out_of_range("Index is out of range!");
  }
  return p[index];
}


array::array(const array& other)
{
  n = other.n;
  if (n > 0)
  {
    p = new double[n];
    for (int i = 0; i < n; i++)
      p[i] = other.p[i];
  }
}


//
//array::~array()
//{
//  if (p)
//  {
//    delete[] p;
//    p = nullptr;
//  }
//}