#ifndef FILEREAD_THREAD_H
#define FILEREAD_THREAD_H

#include <QThread>
#include "dataclass.h"

// Point Cloud Library
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/filters/passthrough.h>
#include <pcl/filters/statistical_outlier_removal.h>

/*
  fileread_thread class: This class manages the loading of files into the workspace. It's been designed as a thread
  taking into account that loading a high number of files may take a significatively amount of time.
 */

class fileread_thread : public QThread
{
    Q_OBJECT

public:
    fileread_thread(QStringList thefilenames, dataclass *thedatabase);

private:
    typedef pcl::PointXYZ PointType;
    typedef pcl::PointCloud<PointType> PointCloudT;

    dataclass *Database;
    QStringList filenames;

    //Object for loading a PLY file
    pcl::PLYReader plyReader;

protected:
    void run();
};

#endif // FILEREAD_THREAD_H
