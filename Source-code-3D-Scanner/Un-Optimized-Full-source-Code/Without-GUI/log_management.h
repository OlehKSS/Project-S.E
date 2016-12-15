/*
By downloading, copying, installing or using the software you agree to this license.
If you do not agree to this license, do not download, install,
copy or use the software.
                          License Agreement
            For Open Source Computer Vision and Robotics Project
Copyright (C) 2016,
      Blanchon Marc (fr.marc.blanchon@gmail.com),
Third party copyrights are property of their respective owners.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:
  * Redistributions of source code must retain the above copyright notice,
    this list of conditions and the following disclaimer.
  * Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.
  * Neither the names of the copyright holders nor the names of the contributors
    may be used to endorse or promote products derived from this software
    without specific prior written permission.
This software is provided by the copyright holders and contributors "as is" and
any express or implied warranties, including, but not limited to, the implied
warranties of merchantability and fitness for a particular purpose are disclaimed.
In no event shall copyright holders or contributors be liable for any direct,
indirect, incidental, special, exemplary, or consequential damages
(including, but not limited to, procurement of substitute goods or services;
loss of use, data, or profits; or business interruption) however caused
and on any theory of liability, whether in contract, strict liability,
or tort (including negligence or otherwise) arising in any way out of
the use of this software, even if advised of the possibility of such damage.
*/

/*
*Refer to the standard.txt to have a deep understanding of variables names and definitions
*TO DO
*/

#ifndef LOG_MANAGEMENT_H
#define LOG_MANAGEMENT_H


//----------------------------------------------------------------------
// Includes
//----------------------------------------------------------------------
//Including QString to manage files as string
#include <QString> // To differentiate user inputs and inner program string
#include <fstream>


/*
  log_management class will be used to display and write in defined files during processes and also display on console

  The class is developped in a special manner. Using streams to create the file and use
  class functions and overload to manipulate the file
  It is maybe not optimized but it help understanding the code and also class management
  It also allow to cut in separated parts all the process and make checks if necessary
  If the class is less optimized than using all the functions of sreams there is multiple reasons
    - It is in a project developpement with c++ beginners
    - Better understanding
    - The efficiency is not that much impacted by the change

  To be 100% coherent, we have to manage files so we have to take care of everylines and access right

  If the program had to be optimized, in fact it wasn't necessary to use class to separate the process
  and we can use definetly all the functionnalities of streams, that avoid overloading of operators,
  functions creations and everything because all is embedded. But this is a class project so ...

  ///Constructors  /// Each incrementation of inputs gives more precise definition the process remain the same
        @NULL :: Creating default file with default convention and default target
        @QString u_path :: Changing the targeted folder
        @QString u_path, QString u_filename :: Changing the name of the output file
        @QString u_path, QString u_filename, QString u_extansion :: Changing convention

  ///Destructor
        @NULL :: Closing the file opened

  ///Operators
        @<< :: Writing on log file and console
        @<<< :: Writing on log file and console file but implementing a timer to get duration // TO DO

  ///Function
        get_current_dir :: return the current directory path we are working on
 */

class log_management
{
public:
    //Constructors
    log_management();
    log_management(const QString& u_path);
    log_management(const QString& u_path, const QString& u_filename);
    log_management(const QString& u_path, const QString& u_filename, const QString& u_extansion);
    //Destructors
    ~log_management();

    //Functions
        //get current path
    std::string get_current_dir( void );

    //Operator

    log_management& operator<<(  const std::string u_write  );

private:

    //File
    std :: string m_path ; //Path of the file
    std :: string m_filename; //Name of the file
    std :: ofstream m_stream; //Output Stream
};

#endif // LOG_MANAGEMENT_H
