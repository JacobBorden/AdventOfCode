if(EXISTS "/home/jacob/code/advent_of_code/1/c++/tests/adventcode1_tests.exe[1]_tests.cmake")
  include("/home/jacob/code/advent_of_code/1/c++/tests/adventcode1_tests.exe[1]_tests.cmake")
else()
  add_test(adventcode1_tests.exe_NOT_BUILT adventcode1_tests.exe_NOT_BUILT)
endif()