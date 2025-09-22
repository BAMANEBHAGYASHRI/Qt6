cmake_minimum_required(VERSION 3.19)
project(Assignement_OOPS LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(Assignement_OOPS
    main.cpp
)

target_link_libraries(Assignement_OOPS
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS Assignement_OOPS
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
