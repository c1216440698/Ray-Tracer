//
// Created by cui on 3/17/20.
//
#ifndef RENDER_RAY_H
#define RENDER_RAY_H

#include "vec3.h"

class ray{
public:
    vec3 A;//Origin
    vec3 B;//Direction

    ray(){}
    ray(const vec3 &a, const vec3 &b){
         A=a;B=b;
    }
    vec3 origin() const { return  A;}
    vec3 direction() const {return B;}
    vec3 point_at_parameter (float t) const {
        return A + t*B;
    }
};

#endif //RENDER_RAY_H
