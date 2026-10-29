@interface TXCIPCTunnelEndPoint : NSObject
{
    NSURL * _url; // +0x8
    NSString * _host; // +0x10
    long long _type; // +0x18
    long long _port; // +0x20
}
- (id)initWithAppGroup:(id)arg1;
- (id)initWithPort:(long long)arg1;
- (id)url;
- (id)host;
- (long long)type;
- (long long)port;
- (void).cxx_destruct;
@end
