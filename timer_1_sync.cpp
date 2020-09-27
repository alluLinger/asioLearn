//
// Created by Linger on 2020/9/27.
//

#include <iostream>
#include "3rdParty/asio/asio/include/asio.hpp"

int main() {
    asio::io_context io;
    asio::steady_timer t(io, asio::chrono::seconds(5));
    t.wait();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
