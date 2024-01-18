# client_sntutorialclient.cmake

include("${CMAKE_CURRENT_LIST_DIR}/client_base.cmake")

set(CLIENT_SNTC_DIR ${CMAKE_CURRENT_LIST_DIR})
set(
	CLIENT_SNT_SOURCE_FILES

    "${CLIENT_SNTC_DIR}/sn_tutorialclient/c_sn_basemodelent.h"
    "${CLIENT_SNTC_DIR}/sn_tutorialclient/c_sn_basemodelent.cpp"
)