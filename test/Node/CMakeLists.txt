cmake_minimum_required(VERSION 2.8)

add_executable(test_Node test_Node.cpp)
target_link_libraries(test_Node
    gtest
    gtest_main
    arisan_sim
    )

add_test(
    NAME test_Node
    COMMAND $<TARGET_FILE:test_Node>
    )

set_property(
    TEST test_Node
    PROPERTY LABELS lib test_Node
    )


