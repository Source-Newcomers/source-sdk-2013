#include "c_sn_basemodelent.h"

void CSNBaseModelEnt::InputToggle(inputdata_t &in_inputdata)
{

}

void CSNBaseModelEnt::SN_PrecacheModel()
{
    PrecacheModel(sn_mbmodelpath);
    BaseClass::Precache();
}
