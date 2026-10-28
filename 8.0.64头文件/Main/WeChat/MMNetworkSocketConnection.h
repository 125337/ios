@interface MMNetworkSocketConnection : NSObject
{
    int _sockfd; // +0x8
    void * _sockaddr; // +0x10
    unsigned long long _interfaceType; // +0x18
}
- (id)initWithSockfd:(int)arg1;
- (void)dealloc;
- (void)setSockaddr:(const void *)arg1 addrlen:(unsigned int)arg2;
- (int)sockfd;
- (void)setSockfd:(int)arg1;
- (void *)sockaddr;
- (unsigned long long)interfaceType;
- (void)setInterfaceType:(unsigned long long)arg1;
@end
