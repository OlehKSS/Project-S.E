#include "ttable_thread.h"

using namespace std;

ttable_thread::ttable_thread(dataclass *thedatabase)
{
    Database = thedatabase;
}

void ttable_thread::run()
{

    if(Database->getTtConnect() && !Database->getTtConnected())
    {
        //If the connect button is enabled, open the indicated port at a baudrate of 9600
        serial.setPortName(Database->getTtSerialPort());
        serial.open(QIODevice::ReadWrite);
        serial.setBaudRate(QSerialPort::Baud9600);
        serial.setDataBits(QSerialPort::Data8);
        serial.setParity(QSerialPort::NoParity);
        serial.setStopBits(QSerialPort::OneStop);
        serial.setFlowControl(QSerialPort::NoFlowControl);
        while(!serial.isOpen()) serial.open(QIODevice::ReadWrite);
        Database->setTtConnected(true);
    }
    else if (Database->getTtConnect() && Database->getTtConnected() && Database->getTtRotate() && serial.isOpen() && serial.isWritable())
   {
        //If the rorate button is enabled, make the turtable to move by sending a 1 through the serial port
        QByteArray dayArray;

        while(Database->getTtRotate()){
            dayArray[0]=1;
            serial.write(dayArray);
            serial.flush();
            timer.start();
            // Sleep(80);
            serial.waitForBytesWritten(100);
        }

        dayArray[0]=0;
        serial.write(dayArray);
        serial.flush();
        timer.start();
        // Sleep(80);
        serial.waitForBytesWritten(100);

    }
    else if (Database->getTtConnect() && Database->getTtConnected() && !Database->getTtRotate() && serial.isOpen() && serial.isWritable())
    {
        //If the rorate button is disabled, make the turtable to stop by sending a 0 through the serial port
         QByteArray dayArray;

         while(!Database->getTtRotate()){
             dayArray[0]=0;
             serial.write(dayArray);
             serial.flush();
             timer.start();
             // Sleep(80);
             serial.waitForBytesWritten(100);
         }

         dayArray[0]=0;
         serial.write(dayArray);
         serial.flush();
         timer.start();
         // Sleep(80);
         serial.waitForBytesWritten(100);
    }else if(!Database->getTtConnect() && Database->getTtConnected())
    {
        //If the connect button is disabled, disconnect the program from the turntable
        serial.close();
        Database->setTtConnected(false);
    }

}
