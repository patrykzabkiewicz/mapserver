#ifndef MAPLAYER_H_
#define MAPLAYER_H_

#include "list.h"
#include "mapfeature.h"
#include "maptransformation.h"

namespace MapServer {

using namespace framework;

template<typename T>
class MapLayer {
private:
    list<mapfeature> * features;
    list<maptransform> * transofrmations;
    list<vect_t> * data_vectors;

public:
    MapLayer();
    virtual ~MapLayer();
};

}

#endif /* MAPLAYER_H_ */
