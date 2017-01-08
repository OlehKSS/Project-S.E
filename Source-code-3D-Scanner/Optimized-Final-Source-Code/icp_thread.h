#ifndef ICP_THREAD_H
#define ICP_THREAD_H

#include <QThread>
#include "dataclass.h"
#include "icp_aligning_point_clouds.h"

/*
  icp_thread class: This class lets the ICP algorithm to be executed in the backend, not interfering with the
  processes in the main window interface.
 */

class icp_thread : public QThread
{
    Q_OBJECT

public:
    icp_thread(dataclass *thedatabase);

private:
    dataclass *Database;

    //Instance of the ICP Stitching class:
    icp_Aligning_Point_Clouds *icp_Class ;

protected:
    void run();
};

#endif // ICP_THREAD_H
