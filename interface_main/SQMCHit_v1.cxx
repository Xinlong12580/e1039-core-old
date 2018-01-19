/*
 * SQMCHit_v1.C
 *
 *  Created on: Oct 29, 2017
 *      Author: yuhw@nmsu.edu
 */
#include "SQMCHit_v1.h"

#include <limits>
#include <cmath>

using namespace std;

ClassImp(SQMCHit_v1);

SQMCHit_v1::SQMCHit_v1()
  : _g4hit_id(std::numeric_limits<int>::max())
{}

void SQMCHit_v1::identify(ostream& os) const {
  os << "---SQMCHit_v1--------------------" << endl;
  os << "G4HitID: " << get_g4hit_id() << endl;

  SQHit_v1::identify(os);

  return;
}

int SQMCHit_v1::isValid() const {
  if (_g4hit_id == std::numeric_limits<int>::max()) return 0;
  return SQHit_v1::isValid();
}

