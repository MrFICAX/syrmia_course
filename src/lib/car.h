#pragma once
#include "vision.h"

class Car
{
        Vision* vision;
        Engine *engine;
public:
        Car( Vision* vision )
                :       vision(vision){}
        Car(Vision *v, Engine *e)
        {
                this->vision=v;
                this->engine=e;
        }

        bool Start(){
                vision->FindObstacle(0);
                engine->On();
                return true;
        }

        bool Go(int frames)
        {
                for(int i=0; i<frames;i++)
                {
                int obstacle=vision->FindObstacle(0);
                int people=vision->CountPeople(0);
                }
         return true;       
        }
};