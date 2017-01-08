#ifndef RECONSTRUCTION_THREAD_H
#define RECONSTRUCTION_THREAD_H

#include <QThread>
#include "dataclass.h"
#include "reconstructionproject.h"

/*
  reconstruction_thread class: This class lets the ICP algorithm to be executed in the backend, not interfering with the
  processes in the main window interface.
 */

class reconstruction_thread : public QThread
{
public:
    reconstruction_thread(dataclass *thedatabase);

private:
    dataclass *Database;

    //Instance of the Reconstruction class:
    Reconstruction *recproject ;

protected:
    void run();
};

#endif // RECONSTRUCTION_THREAD_H
