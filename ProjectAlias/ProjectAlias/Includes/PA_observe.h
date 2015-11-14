#ifndef PA_OBSERVE_H_
#define PA_OBSERVE_H_


typedef struct Signal{

    void (*sig)(void*);

}signal;

typedef struct Slot{

    void(*slot)(void*);
}slot;

typedef struct Connection{

    signal sig;
    slot slt;
}connection;

connection connect(signal *sig, void* object,slot *slt, void* obj );
void notify(Connection *c);

#endif PA_OBSERVE_H_
