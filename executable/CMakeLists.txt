add_executable(executable SDIA_PR2.cpp)
target_include_directories(executable PUBLIC ../source)
target_link_libraries(executable source)
