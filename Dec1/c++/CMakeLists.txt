cmake_minimum_required(VERSION 3.10)
project(AdventCode1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_THREAD_PREFER_PTHREAD ON)
set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Threads)
include(CTest)
include(FetchContent)

FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB Functions
	src/functions.cpp
	)

add_executable(Dec1.exe)

target_sources(Dec1.exe
	PRIVATE
	${Functions}
	src/main.cpp
	)

enable_testing()
add_subdirectory(tests)
