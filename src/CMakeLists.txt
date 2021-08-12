set(APPLICATION_SOURCE
        ${CMAKE_SOURCE_DIR}/dependencies/glad/src/glad.c
        main.cpp)

add_executable(application ${APPLICATION_SOURCE})
target_include_directories(application PRIVATE ${CMAKE_SOURCE_DIR}/dependencies/glad/include)
target_link_libraries(application PRIVATE glfw)
