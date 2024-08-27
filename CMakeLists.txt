cmake_minimum_required(VERSION 3.8)
project(ncurses_test)

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

ament_auto_add_executable(ncurses_test src/test.cpp)
target_link_libraries(ncurses_test ${CURSES_LIBRARIES})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package()
