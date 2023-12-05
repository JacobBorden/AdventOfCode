cmake_minimum_required(VERSION 3.10)
project(AdventCode2)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_THREAD_PREFER_PTHREAD ON)
set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Threads)
include(CTest)
include(FetchContent)

FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

FetchContent_MakeAvailable(googletest)

file(GLOB Day2Functions
	src/functions.cpp
	)

add_executable(Day2.exe)
target_sources(Day2.exe
	PRIVATE
	${Day2Functions}
	src/main.cpp
	)

enable_testing()
add_subdirectory(tests)
