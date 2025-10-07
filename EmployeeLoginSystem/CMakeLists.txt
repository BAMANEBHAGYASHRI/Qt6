cmake_minimum_required(VERSION 3.19)
project(EmployeeLoginSystem LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(EmployeeLoginSystem
    WIN32 MACOSX_BUNDLE
    main.cpp
    employeelogin.cpp
    employeelogin.h
    employeelogin.ui
)

target_link_libraries(EmployeeLoginSystem
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS EmployeeLoginSystem
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET EmployeeLoginSystem
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
