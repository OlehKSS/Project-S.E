#include "fileread_thread.h"
#include <vector>

fileread_thread::fileread_thread(QStringList thefilenames, dataclass *thedatabase)
{
    Database=thedatabase;
    filenames=thefilenames;
}

void fileread_thread::run()
{
    //Check the list of selected files from the dialog
    for (int i =0;i<filenames.count();i++)
    {
        PointCloudT::Ptr tmpCloud (new PointCloudT) ;
        QString thefile=filenames.at(i);
        //Check if it's whether a .ply or a .pcd file, and use the respective loading function
        if(thefile.contains(".ply")){
            if (plyReader.read(thefile.toStdString(), *tmpCloud) == -1) //* load the file
            {
              PCL_ERROR ("Couldn't read ply file \n");
            }
        }else if(thefile.contains(".pcd")){
            if (pcl::io::loadPCDFile<pcl::PointXYZ> (thefile.toStdString(), *tmpCloud) == -1) //* load the file
            {
              PCL_ERROR ("Couldn't read pcd file \n");
            }
        }

        //Remove undefined values in the pointcloud
        std::vector<int> indices;
        pcl::removeNaNFromPointCloud(*tmpCloud,*tmpCloud, indices);

        //Append pointcloud into the vector of pointclouds
        Database->m_pointcloud_data.push_back(tmpCloud);
        Database->m_cloud=tmpCloud;
    }
    //Tell the main window class that the opening process has finished
    Database->setFileReadingState(1);
}
