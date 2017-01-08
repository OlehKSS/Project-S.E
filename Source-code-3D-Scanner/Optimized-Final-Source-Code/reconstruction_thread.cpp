#include "reconstruction_thread.h"

reconstruction_thread::reconstruction_thread(dataclass *thedatabase)
{
    Database = thedatabase;

    //Calling Reconstruction class
    recproject  =  new Reconstruction(Database) ;
}

void reconstruction_thread::run()
{

    //If Greedy algorithm is chosen
    if(Database->getRecSettingsStatus()==2)
        Database->m_Mesh = recproject->reconstruction(false,Database);
    //If Poisson algorithm is chosen
    else
        Database->m_Mesh = recproject->reconstruction(true,Database);

    Database->setReconstructionState(1);

}
