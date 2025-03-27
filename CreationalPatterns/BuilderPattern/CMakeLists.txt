project(factory_method)

set(TARGET_NAME factory_method)

add_executable(${TARGET_NAME} builder_pattern.cpp)


install(TARGETS ${TARGET_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)
