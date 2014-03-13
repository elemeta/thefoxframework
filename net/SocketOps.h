#ifndef _THEFOX_NET_SOCKET_H_
#define _THEFOX_NET_SOCKET_H_

#include <Winsock2.h>

namespace thefox
{
namespace net
{

class InetAddress;

class Socket
{
public:
    static SOCKET Create();
	explicit Socket(SOCKET s);
	~Socket(void);

	void listen(const InetAddress &listenAddr);
	struct sockaddr_in getLocalAddr();
    operator SOCKET()
	{
		return _s;
	}
private:
	SOCKET _s;
};

} // namespace thefox
} // namespace net

#endif // _THEFOX_NET_SOCKET_H_