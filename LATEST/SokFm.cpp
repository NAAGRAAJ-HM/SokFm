/*****************************************************/
/* File   : SokFm.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "SokFm.h"

#include "SokFm_EcuM.h"
#include "SokFm_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_SokFm_EcuM SokFm_EcuM;
class_EcuM_Client *EcuM_Client_ptr_SokFm = &SokFm_EcuM;
class_SokFm_SchM SokFm_SchM;
class_SchM_Client *SchM_Client_ptr_SokFm = &SokFm_SchM;
class_SokFm SokFm;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SOKFM_CODE) class_SokFm_EcuM::InitFunction(void){
}

FUNC(void, SOKFM_CODE) class_SokFm_SchM::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

