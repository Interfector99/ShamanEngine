cmake_minimum_required(VERSION 3.10)
project(ShamanEngine VERSION 1.0 DESCRIPTION "A simple boiler-plate code for a game engine using C++ 20")

# Setting C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

include_directories(include)

# Set output directory based on OS and architecture
if(WIN32)
  set(OS_FOLDER "Windows")
else()
  if(APPLE)
    set(OS_FOLDER "macOS")
  else()
    set(OS_FOLDER "Linux")
  endif()
endif()

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
  set(ARCH_FOLDER "x64")
else()
  set(ARCH_FOLDER "x86")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/${OS_FOLDER}/${ARCH_FOLDER}/${CMAKE_BUILD_TYPE})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/${OS_FOLDER}/${ARCH_FOLDER}/${CMAKE_BUILD_TYPE})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/${OS_FOLDER}/${ARCH_FOLDER}/${CMAKE_BUILD_TYPE})

# Intermediate directory
set(CMAKE_INTERMEDIATE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/${OS_FOLDER}/${ARCH_FOLDER}/${CMAKE_BUILD_TYPE}/intermediate)

# Add the executable
file(GLOB SOURCE_FILES src/*.cpp) # Ensure this matches your file extensions
add_executable(ShamanEngine ${SOURCE_FILES})

# Link the executable to the libraries
target_link_libraries(ShamanEngine)
if(UNIX AND NOT APPLE)
    target_link_libraries(ShamanEngine m)
endif()
