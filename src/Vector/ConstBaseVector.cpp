//
// Created by mfbut on 11/17/2019.
//

#include <algorithm>
#include "Vector.h"
#include "ConstBaseVector.h"

Matrix::ConstVectorIterator Matrix::ConstBaseVector::begin() const {
  //return iterator to first pos
}

Matrix::ConstVectorIterator Matrix::ConstBaseVector::end() const {
  //return iterator to last pos
}

Matrix::Vector Matrix::ConstBaseVector::operator-() const {

}

Matrix::Vector Matrix::ConstBaseVector::operator+(const ConstBaseVector& rhs) {
  //add this and rhs
}

Matrix::Vector Matrix::ConstBaseVector::operator-(const ConstBaseVector& rhs) {
  //subtract rhs from this
}

Matrix::Vector Matrix::ConstBaseVector::operator*(const ConstBaseVector& rhs) const {
  //dot product with this and rhs
}

Matrix::Vector Matrix::ConstBaseVector::operator+(const ConstBaseVector::value_type& rhs) const {
  //add scalar to this
}

Matrix::Vector Matrix::ConstBaseVector::operator-(const ConstBaseVector::value_type& rhs) const {
  //subtract scalar from this
}

Matrix::Vector Matrix::ConstBaseVector::operator*(const ConstBaseVector::value_type& rhs) const {
  //multiply scalar with this
}

bool Matrix::ConstBaseVector::operator==(const ConstBaseVector& rhs) const {
  //dose this equal rhs
}

bool Matrix::ConstBaseVector::operator!=(const ConstBaseVector& rhs) const {
  //is rhs different from this
}

Matrix::Vector Matrix::operator+(const ConstBaseVector::value_type& lhs, const ConstBaseVector& rhs) {
  //add scalar and vector
}

Matrix::Vector Matrix::operator-(const ConstBaseVector::value_type& lhs, const ConstBaseVector& rhs) {
  //subtract vector from scalar
}

Matrix::Vector Matrix::operator*(const ConstBaseVector::value_type& lhs, const ConstBaseVector& rhs) {
  //multiply scalar by vector
}
