cmake_minimum_required(VERSION 2.8.3)
project(iqr_4b_navigation)

find_package(catkin REQUIRED COMPONENTS
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES iqr_4b_navigation
#  CATKIN_DEPENDS gmapping move_base
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)