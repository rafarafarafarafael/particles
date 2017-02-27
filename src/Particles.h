//
//  Particles.h
//  particle_system
//
//  Created by Rafael on 2017-02-02.
//
//
#pragma once
#include "ofMain.h"
#include "Params.h"

#ifndef Particles_h
#define Particles_h

class Particle{
public:
    Particle();     // class constructor
    void setup();   // start particle
    void update(float dt);  // recalculate physics
    void draw();    // draw particle
    ofPoint randomPointInCircle(float maxRad);
    
    ofPoint pos;    // position
    ofPoint vel;    // velocity
    float time;     // current particle age
    float lifeTime; // maximum life of particle
    bool live;  // is particle alive or dead
};


#endif /* Particles_h */
