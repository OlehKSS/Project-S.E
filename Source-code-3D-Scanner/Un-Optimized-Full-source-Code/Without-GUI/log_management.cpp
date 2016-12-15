#include "log_management.h"

/*
Standard way of getting current path used in default constructor
Example from cplusplus.com
*/
#include <stdio.h>  // defines FILENAME_MAX
#define WINDOWS  //Comment this line for linux, else let it uncommented
#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h> //Including file to get path
#define GetCurrentDir getcwd //Defining also another flag
#endif
#include<iostream>
/*
End of includes for current path
*/

#include <fstream>
#include <ctime>



//Constructors
log_management::log_management(){

    m_filename = "log.txt"; // defaul file name
    m_path = log_management::get_current_dir()+ m_filename; // default path current directory
    std::ofstream m_stream(m_path , std:: ios :: out); // Create the file and stream

}


log_management::log_management(const QString& u_path){


    m_filename = "log.txt"; // defaul file name
    m_path = u_path.toStdString() + m_filename; //  path converted in std string
    std::ofstream m_stream(m_path , std:: ios :: out); // Create the file and stream


}


log_management::log_management(const QString& u_path, const QString& u_filename){


    m_filename = u_filename.toStdString() + ".txt"; // file name converted to std string
    m_path = u_path.toStdString()+ m_filename; //  path converted in std string
    std::ofstream m_stream(m_path , std:: ios :: out); // Create the file and stream

}


log_management::log_management(const QString& u_path, const QString& u_filename, const QString& u_extansion){


    m_filename = u_filename.toStdString() + u_extansion.toStdString(); // file name converted to std string
    m_path = u_path.toStdString()+ m_filename; //  path converted in std string
    std::ofstream m_stream(m_path , std:: ios :: out); // Create the file and stream


}


//Destructors
log_management::~log_management(){

    m_stream.flush();
    m_stream.close();

}


//Functions

std::string log_management:: get_current_dir( void ){

    char buff[FILENAME_MAX]; // Allocate a temporary buffer constructed using FILENAME_MAX member of stdio.h
    GetCurrentDir( buff, FILENAME_MAX ); //Use function to get our path that change our buff
    std::string current_working_dir(buff); // Cast a new string to get our path
    return current_working_dir; //return the path as string

}




//Operator

log_management& log_management :: operator<<(  const std::string u_write  ){

    std::time_t t_time = std::time(0) ;
    char t_string_time[128] ;
    std::strftime( t_string_time, sizeof(t_string_time), "%c", std::localtime(&t_time) ) ;

    std :: string t_output = std :: string(t_string_time) +" :: "+ std :: string(u_write) + "\n";

    *this << t_output;
    return *this;

}

