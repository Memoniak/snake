cmake_minimum_required(VERSION 3.17)

#set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(NAME snake)

project(${NAME} VERSION 0.1 LANGUAGES CXX)

## INCLUDES
include_directories(./include)
include_directories(./include/Entities)
include_directories(./src)

set(SRCS
        src/main.cpp
        src/Entities/Snake.cpp)

add_executable(${NAME} ${SRCS})

if (MSVC)
    target_compile_options(${NAME} PRIVATE /W4 /WX)
else ()
    target_compile_options(${NAME} PRIVATE -Wall -Wextra -Wno-missing-field-initializers)
endif ()

set_target_properties(${NAME}
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}"
        )

## GAME-ENGINE
add_subdirectory(${PROJECT_SOURCE_DIR}/lib/ECS/)
set(GAMEENGINE_DIR ${PROJECT_SOURCE_DIR}/lib/ECS)

include_directories(${GAMEENGINE_DIR}/include)
include_directories(${GAMEENGINE_DIR}/src)
include_directories(${GAMEENGINE_DIR}/include/Core)

include_directories(${GAMEENGINE_DIR}/include/Core/Components)
include_directories(${GAMEENGINE_DIR}/include/Core/Components/Manager)
include_directories(${GAMEENGINE_DIR}/include/Core/Components/Pool)

include_directories(${GAMEENGINE_DIR}/include/Core/Entity)
include_directories(${GAMEENGINE_DIR}/include/Core/Entity/Manager)
include_directories(${GAMEENGINE_DIR}/include/Core/Entity/utils)
include_directories(${GAMEENGINE_DIR}/include/Core/Entity/Pool)

include_directories(${GAMEENGINE_DIR}/include/utils)

include_directories(${GAMEENGINE_DIR}/include/Core/Systems)
include_directories(${GAMEENGINE_DIR}/include/Core/Systems/Manager)

include_directories(${GAMEENGINE_DIR}/include/Core/Scenes)
include_directories(${GAMEENGINE_DIR}/include/Core/Scenes/Manager)

include_directories(${GAMEENGINE_DIR}/loguru)

target_link_libraries(${NAME} gameEngine)


## RAYLIB
add_subdirectory(${PROJECT_SOURCE_DIR}/lib/raylibCpp)
set(RAYLIB_DIR ${PROJECT_SOURCE_DIR}/lib/raylibCpp)
include_directories(${RAYLIB_DIR}/include)
target_link_libraries(${NAME} raylibcpp)
