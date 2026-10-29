@interface WXTalkDNSController : NSObject
{
    unsigned int _netType; // +0x8
    unsigned int relayPort; // +0xc
    NSString * relayIP; // +0x10
    NSArray * relayIPList; // +0x18
}
- (id)init;
- (void)dealloc;
- (id)relayIP;
- (void)setRelayIP:(id)arg1;
- (unsigned int)relayPort;
- (void)setRelayPort:(unsigned int)arg1;
- (id)relayIPList;
- (void)setRelayIPList:(id)arg1;
- (void).cxx_destruct;
@end

