project(factory_method)

set(TARGET_NAME factory_method)

add_executable(${TARGET_NAME} main.cpp)


install(TARGETS ${TARGET_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)
