#include <boost/asio.hpp>
#include <udp_server.h>
#include <cstdint>

namespace net = boost::asio;

int main()
{
    uint16_t tcpPort = 9002, udpPort = 9003;

    net::io_context ioc;
    auto udp = std::make_shared<UdpServer>(ioc, udpPort);
    udp->start();
    ioc.run();
    return 0;
}