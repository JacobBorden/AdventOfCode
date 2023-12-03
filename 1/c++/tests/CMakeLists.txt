cmake_minimum_required(VERSION 3.10)

add_executable(adventcode1_tests.exe)

target_sources(adventcode1_tests.exe
	PRIVATE
	tests_main.cpp
	tests.cpp	
)

target_link_libraries(adventcode1_tests.exe
	PRIVATE
	${Main}
	gtest_main
	gmock_main
)

target_include_directories(adventcode1_tests.exe
	PRIVATE
	${PROJECT_SOURCE_DIR}/src	
)

include(CTest)
include(GoogleTest)
gtest_discover_tests(adventcode1_tests.exe)
add_test(NAME adventcode1_tests.exe COMMAND adventcode1_tests.exe)
