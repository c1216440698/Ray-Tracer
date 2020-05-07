//
// Created by cui on 3/18/20.
//

#ifndef RENDER_HITABLE_LIST_H
#define RENDER_HITABLE_LIST_H

#include "hitable.h"

//hitable_list继承hitable
class hitable_list: public  hitable{
public:
    hitable **list;
    int list_size;

    hitable_list(){}
    hitable_list(hitable **l,int n){list=l;list_size=n;}
    virtual  bool hit(const ray &r, float tmin, float tmax,hit_record &rec) const;
};//hitable_list是所有能够被光线撞击的物体的列表

bool hitable_list::hit(const ray &r, float t_min, float t_max, hit_record &rec) const {
    hit_record temp_rec;
    bool hit_anything=false;
    double closest_so_far = t_max;
    for(int i=0;i<list_size;i++){
        if(list[i]->hit(r,t_min,closest_so_far,temp_rec)){
            hit_anything= true;
            closest_so_far=temp_rec.t;
            rec = temp_rec;
        }
    }
    return hit_anything;
}

#endif //RENDER_HITABLE_LIST_H
