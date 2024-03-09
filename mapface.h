#ifndef MAPFACE_H_
#define MAPFACE_H_


#include "list.h"
#include "maplayer.h"

namespace MapServer {

template<typename filter, typename imagetype>
class MapFace {
private:
    list<MapLayer> maplayers;
    list<filter> filters;
    imagetype * img;

protected:
    MapFace(MapFace mf);

public:
    MapFace();
    virtual ~MapFace();

    void render();
    imagetype * getImg();
};

}

#endif /* MAPFACE_H_ */
