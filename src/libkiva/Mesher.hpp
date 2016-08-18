/* Copyright (c) 2012-2016 Big Ladder Software. All rights reserved.
* See the LICENSE file for additional terms and conditions. */

#ifndef Mesher_HPP
#define Mesher_HPP

#include <vector>
#include <cmath>
#include <math.h>
#include "Functions.hpp"
#include "libkiva_export.h"

namespace Kiva {

class Interval
{
public:

  double maxGrowthCoeff;
  double minCellDim;
  enum Growth
  {
    FORWARD,
    BACKWARD,
    UNIFORM,
    CENTERED
  };
  Growth growthDir;

};

class MeshData
{
public:
  std::vector<double> points;
  std::vector<Interval> intervals;

};

class LIBKIVA_EXPORT Mesher
{
private:
    MeshData data;

public:
    std::vector<double> dividers; // center is between divider[i] and divider[i+1]
    std::vector<double> deltas;
    std::vector<double> centers;

public:

    Mesher();
    Mesher(MeshData &data);
    std::size_t getNearestIndex(double position);
    std::size_t getNextIndex(double position);
    std::size_t getPreviousIndex(double position);

};

}

#endif
