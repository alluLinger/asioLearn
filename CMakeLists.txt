cmake_minimum_required(VERSION 3.17)
project(asioLearn)

include_directories(3rdParty/asio/asio/include/)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}" -DASIO_STANDALONE -pthread)

add_executable(timer1 timer_1_sync.cpp)
add_executable(timer2 timer_2_async.cpp)
add_executable(ipaddress1 ip_address.cpp)