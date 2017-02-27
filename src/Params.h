//
//  Params.hpp
//  particle_system
//
//  Created by Rafael on 2017-02-02.
//
//
#pragma once
#include "ofMain.h"

#ifndef Params_h
#define Params_h

class Params{
public:
    void setup();
    ofPoint eCenter;    // emitter center
    float eRad;     // emitter radius
    float velRad;    // initial velocity
    float lifeTime; // life time in seconds
    float rotate;   // direction rotation in degrees per second
};

extern Params param;    // declaration of a global variable

#endif /* Params_h */
