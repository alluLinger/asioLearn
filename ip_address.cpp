//
// Created by Linger on 2020/9/28.
//

#include "3rdParty/asio/asio/include/asio.hpp"

#include <iostream>
#include <string>

int main() {
    using namespace asio;
    ip::address_v4 addr_v4 = ip::address_v4::from_string("192.168.1.1");
    ip::address addr_v6 = ip::address::from_string("::1");
    ip::address addr_v4_loopback = ip::address_v4::loopback(); // 127.0.0.1 localhost

    auto addr_v4_broadcast = ip::address_v4::broadcast(addr_v4,
                                  ip::address_v4::from_string("255.255.255.0"));
    std::string host_name = ip::host_name();

    std::cout << "addr_v4: " << addr_v4 << std::endl;
    std::cout << "addr_v4_broadcast: " << addr_v4_broadcast << std::endl;
    std::cout << "addr_v4_loopback" << addr_v4_loopback << std::endl;
    std::cout << "addr_v6: " << addr_v6 << std::endl;
    std::cout << "host_name" << host_name << std::endl;

    return 0;
}