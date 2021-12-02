# Install script for directory: /home/hp/Desktop/panda_moveit/src/mir/mir_navigation

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/hp/Desktop/panda_moveit/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/hp/Desktop/panda_moveit/build/mir/mir_navigation/catkin_generated/installspace/mir_navigation.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_navigation/cmake" TYPE FILE FILES
    "/home/hp/Desktop/panda_moveit/build/mir/mir_navigation/catkin_generated/installspace/mir_navigationConfig.cmake"
    "/home/hp/Desktop/panda_moveit/build/mir/mir_navigation/catkin_generated/installspace/mir_navigationConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_navigation" TYPE FILE FILES "/home/hp/Desktop/panda_moveit/src/mir/mir_navigation/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mir_navigation" TYPE PROGRAM FILES "/home/hp/Desktop/panda_moveit/build/mir/mir_navigation/catkin_generated/installspace/move_base_simple_relay.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mir_navigation" TYPE PROGRAM FILES "/home/hp/Desktop/panda_moveit/build/mir/mir_navigation/catkin_generated/installspace/acc_finder.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mir_navigation" TYPE PROGRAM FILES "/home/hp/Desktop/panda_moveit/build/mir/mir_navigation/catkin_generated/installspace/min_max_finder.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mir_navigation" TYPE PROGRAM FILES "/home/hp/Desktop/panda_moveit/build/mir/mir_navigation/catkin_generated/installspace/plot_mprim.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_navigation" TYPE DIRECTORY FILES
    "/home/hp/Desktop/panda_moveit/src/mir/mir_navigation/config"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_navigation/launch"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_navigation/mprim"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_navigation/rviz"
    )
endif()

