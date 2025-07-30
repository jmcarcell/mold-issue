cmake_minimum_required(VERSION 3.10)

find_package(GSL REQUIRED)

# add_library(Cluster SHARED
#   ClusterShapes.cc
# )
add_executable(ClusterShapes
  ClusterShapes.cc
)
target_link_libraries(ClusterShapes
  PRIVATE GSL::gsl
)

add_executable(main
        main.cpp)
target_link_libraries(main
        ClusterShapes)
