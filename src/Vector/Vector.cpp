//
// Created by mfbut on 11/14/2019.
//

#include "Vector.h"

//create a vector that contains the same elements as in orig
Matrix::Vector::Vector(const ConstBaseVector& orig)  {
  std::vector<value_type> myVec = orig;
}
//create a vector that holds numElements and each element is value
Matrix::Vector::Vector(int numElements, const BaseVector::value_type& value) {
  std::vector<value_type> myVec(numElements, value);
}
//create a vector that holds numElements 0's
Matrix::Vector::Vector(int numElements) {
  std::vector<int> myVec(numElements, 0);
}
//create a vector that contains the specified values
Matrix::Vector::Vector(const std::vector<value_type>& values) {
  std::vector<value_type> myVec = values;
}
//create a 1 X 1 vector with the value 0
Matrix::Vector::Vector() {
  std::vector<int> myVec(1, 0);
}

int Matrix::Vector::size() const {
  return Vector::size();
}

Matrix::BaseVector::value_type& Matrix::Vector::at(int index) {
  return Vector::at(index);
}

const Matrix::BaseVector::value_type& Matrix::Vector::at(int index) const {
  return Vector::at(index);
}

Matrix::BaseVector::value_type& Matrix::Vector::operator[](int index) {
  return Vector::at(index);
}

const Matrix::BaseVector::value_type& Matrix::Vector::operator[](int index) const {
  return Vector::at(index);
}

Matrix::Vector& Matrix::Vector::operator=(const ConstBaseVector& rhs) {
  return std::vector<int> (myVec) = (std::vector<int> &) rhs;
}










