//
// Created by mfbut on 11/17/2019.
//

#include <algorithm>
#include "Vector.h"
#include "ConstBaseVector.h"

Matrix::ConstVectorIterator Matrix::ConstBaseVector::begin() const {
  //return iterator to first pos
  ConstVectorIterator itr(this*, 0);
  return itr;
}

Matrix::ConstVectorIterator Matrix::ConstBaseVector::end() const {
  //return iterator to last pos
  ConstVectorIterator itr(this*, ((this->size()) - 1));
  return itr;
}

Matrix::Vector Matrix::ConstBaseVector::operator-() const {
  //reverse direction of vector (if positive make negative)
  for(int i = 0; i < this->size(); i++){
    this[i] *= (-1);
  }
  return this;
}

Matrix::Vector Matrix::ConstBaseVector::operator+(const ConstBaseVector& rhs) {
  //add this and rhs
  for(int i = 0; i < this->size(); i++){
    this[i] += rhs[i];
  }
  return this;
}

Matrix::Vector Matrix::ConstBaseVector::operator-(const ConstBaseVector& rhs) {
  //subtract rhs from this
  for(int i = 0; i < this->size(); i++){
    this[i] -= rhs[i];
  }
  return this;
}

Matrix::Vector Matrix::ConstBaseVector::operator*(const ConstBaseVector& rhs) const {
  //dot product with this and rhs
  for(int i = 0; i < this->size(); i++){
    this[i] *= rhs[i];
  }
  return this;
}

Matrix::Vector Matrix::ConstBaseVector::operator+(const ConstBaseVector::value_type& rhs) const {
  //add scalar to this
  for(int i = 0; i < this->size(); i++){
    this[i] += rhs;
  }
  return this;
}

Matrix::Vector Matrix::ConstBaseVector::operator-(const ConstBaseVector::value_type& rhs) const {
  //subtract scalar from this
  for(int i = 0; i < this->size(); i++){
    this[i] -= rhs;
  }
  return this;
}

Matrix::Vector Matrix::ConstBaseVector::operator*(const ConstBaseVector::value_type& rhs) const {
  //multiply scalar with this
  for(int i = 0; i < this->size(); i++){
    this[i] *= rhs;
  }
  return this;
}

bool Matrix::ConstBaseVector::operator==(const ConstBaseVector& rhs) const {
  //dose this equal rhs
  if(rhs.size() == this->size()){
    for(int i = 0; i < this->size(); i++){
      if(rhs[i] != this[i]){
        return false;
      }
    }
    return true;
  }
  return false;
}

bool Matrix::ConstBaseVector::operator!=(const ConstBaseVector& rhs) const {
  //is rhs different from this
  if(rhs.size() != this->size()){
    returns true;
  }
  for(int i = 0; i < this->size(); i++){
    if(rhs[i] != this[i]){
      return true;
    }
  }
  return false;
}

Matrix::Vector Matrix::operator+(const ConstBaseVector::value_type& lhs, const ConstBaseVector& rhs) {
  //add scalar and vector
  for(int i = 0; i < rhs.size(); i++){
    rhs[i] += lhs;
  }
  return rhs;
}

Matrix::Vector Matrix::operator-(const ConstBaseVector::value_type& lhs, const ConstBaseVector& rhs) {
  //subtract vector from scalar
  for(int i = 0; i < rhs.size(); i++){
    rhs[i] -= lhs;
  }
  return rhs;
}

Matrix::Vector Matrix::operator*(const ConstBaseVector::value_type& lhs, const ConstBaseVector& rhs) {
  //multiply scalar by vector
  for(int i = 0; i < rhs.size(); i++){
    rhs[i] *= lhs;
  }
  return rhs;
}
