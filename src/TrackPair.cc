#include "TrackPair.h"

TrackPair::TrackPair() {
   _trkVec.clear();
   _trkVec.resize(2);
   _trkVec[0] = NULL;
   _trkVec[1] = NULL;
}

TrackPair::~TrackPair() {
  _trkVec.clear();
}

void TrackPair::setFirstTrack( Track * track ) {
  _trkVec[0] = track;
}

void TrackPair::setSecondTrack( Track * track ) {
  _trkVec[1] = track;
}

void TrackPair::setDistance(float distance) {
  _distance = distance;
}

TrackVec & TrackPair::getTracks() {
  return _trkVec;
}

Track * TrackPair::getFirstTrack() {
  return _trkVec[0];
}

Track * TrackPair::getSecondTrack() {
  return _trkVec[1];
}

float TrackPair::getDistance() {
  return _distance;
} 

void TrackPair::setVertex( float * vertex ) {
  _vertex = vertex;
}

void TrackPair::setMomentum( float * momentum ) {
  _momentum = momentum;
}

float * TrackPair::getVertex() {
  return _vertex;
} 

float * TrackPair::getMomentum() {
  return _momentum;
}

void TrackPair::setMass( float mass ) {
  _mass = mass;

}

float TrackPair::getMass() {
  return _mass;
}

void TrackPair::setCode( int code ) {
  _code = code;
}

int TrackPair::getCode() {
  return _code;
}