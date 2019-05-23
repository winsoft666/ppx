# ppxbase-config.cmake - package configuration file

get_filename_component(SELF_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)


include(${SELF_DIR}/ppxbase-target.cmake)
include(${SELF_DIR}/ppxbase-static-target.cmake)
