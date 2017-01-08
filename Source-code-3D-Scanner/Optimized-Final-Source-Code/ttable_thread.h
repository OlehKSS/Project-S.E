#ifndef TTABLE_THREAD_H
#define TTABLE_THREAD_H

#include <QThread>
#include <QSerialPort>
#include <QElapsedTimer>
#include "dataclass.h"

/*
  ttable_thread class: This class lets the turn table handling to be executed in the backend, not interfering with the
  processes in the main window interface.
 */


class ttable_thread : public QThread
{
public:
    ttable_thread(dataclass *thedatabase);

private:
    dataclass *Database;
    QSerialPort serial;
    QElapsedTimer timer;

protected:
    void run();

};

#endif // TTABLE_THREAD_H
