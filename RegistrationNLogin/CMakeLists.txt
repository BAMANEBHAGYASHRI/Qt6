cmake_minimum_required(VERSION 3.19)
project(RegistrationNLogin LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(RegistrationNLogin
    WIN32 MACOSX_BUNDLE
    main.cpp
    registration.cpp
    registration.h
    registration.ui
    logindialog.h logindialog.cpp logindialog.ui


)

target_link_libraries(RegistrationNLogin
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS RegistrationNLogin
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET RegistrationNLogin
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
