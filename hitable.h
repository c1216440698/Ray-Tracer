//
// Created by cui on 3/18/20.
//

#ifndef RENDER_HITABLE_H
#define RENDER_HITABLE_H

#include "ray.h"

class material;

struct hit_record{
    float t;
    //离光线起点的距离t
    vec3 p;
    //撞点的坐标向量p
    vec3 normal;
    //撞点处的法向量normal
    material *mat_ptr;
    //材质
};

//hitable这个类表示能够被光线撞上的任何物体
class hitable{
public:
    virtual  bool hit(const ray &r, float t_min, float t_max,hit_record &rec) const=0;
    //hit()在此被声明为虚函数,则hitable为抽象类。抽象类的子类必须实现其虚函数
};

#endif //RENDER_HITABLE_H
