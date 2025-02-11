cmake_minimum_required( VERSION 3.10)
project( algebra )
find_package (Eigen3 3.4 REQUIRED NO_MODULE)

add_executable ( alg main.cpp)
target_link_libraries ( alg Eigen3::Eigen)
