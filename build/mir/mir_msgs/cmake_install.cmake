# Install script for directory: /home/hp/Desktop/panda_moveit/src/mir/mir_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/msg" TYPE FILE FILES
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/Encoders.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/ExternalRobot.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/ExternalRobots.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/LocalMapStat.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/MirExtra.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/MirStatus.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/MissionCtrlCommand.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/MissionCtrlState.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/Path.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/Pose2D.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/RobotMode.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/RobotState.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/Serial.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/StampedEncoders.msg"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/msg/Trolley.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/action" TYPE FILE FILES
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/action/MirMoveBase.action"
    "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/action/RelativeMove.action"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/msg" TYPE FILE FILES
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/MirMoveBaseAction.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/MirMoveBaseActionGoal.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/MirMoveBaseActionResult.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/MirMoveBaseActionFeedback.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/MirMoveBaseGoal.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/MirMoveBaseResult.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/MirMoveBaseFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/msg" TYPE FILE FILES
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/RelativeMoveAction.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/RelativeMoveActionGoal.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/RelativeMoveActionResult.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/RelativeMoveActionFeedback.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/RelativeMoveGoal.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/RelativeMoveResult.msg"
    "/home/hp/Desktop/panda_moveit/devel/share/mir_msgs/msg/RelativeMoveFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/cmake" TYPE FILE FILES "/home/hp/Desktop/panda_moveit/build/mir/mir_msgs/catkin_generated/installspace/mir_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/hp/Desktop/panda_moveit/devel/include/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/hp/Desktop/panda_moveit/devel/share/roseus/ros/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/hp/Desktop/panda_moveit/devel/share/common-lisp/ros/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/hp/Desktop/panda_moveit/devel/share/gennodejs/ros/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/home/hp/anaconda2/bin/python2" -m compileall "/home/hp/Desktop/panda_moveit/devel/lib/python2.7/dist-packages/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/hp/Desktop/panda_moveit/devel/lib/python2.7/dist-packages/mir_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/hp/Desktop/panda_moveit/build/mir/mir_msgs/catkin_generated/installspace/mir_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/cmake" TYPE FILE FILES "/home/hp/Desktop/panda_moveit/build/mir/mir_msgs/catkin_generated/installspace/mir_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs/cmake" TYPE FILE FILES
    "/home/hp/Desktop/panda_moveit/build/mir/mir_msgs/catkin_generated/installspace/mir_msgsConfig.cmake"
    "/home/hp/Desktop/panda_moveit/build/mir/mir_msgs/catkin_generated/installspace/mir_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mir_msgs" TYPE FILE FILES "/home/hp/Desktop/panda_moveit/src/mir/mir_msgs/package.xml")
endif()

