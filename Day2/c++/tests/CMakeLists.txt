cmake_minimum_required(VERSION 3.10)

add_executable(adventcode2_tests.exe)

target_sources(adventcode2_tests.exe
	PRIVATE
	tests_main.cpp
	tests.cpp	
)

target_link_libraries(adventcode2_tests.exe
	PRIVATE
	${Day2Functions}
	gtest_main
	gmock_main
)

target_include_directories(adventcode2_tests.exe
	PRIVATE
	${PROJECT_SOURCE_DIR}/src	
)

include(CTest)
include(GoogleTest)
gtest_discover_tests(adventcode2_tests.exe)
