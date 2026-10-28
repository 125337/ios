@interface WCStoryNewDnsObj : NSObject
{
    BOOL _bUseDCIP; // +0x8
    unsigned int _lastNewDNSTime; // +0xc
    NSString * _host; // +0x10
    NSArray * _iplist; // +0x18
}
- (BOOL)isNeedUpdateIpList;
- (void)doNewDns;
- (id)host;
- (void)setHost:(id)arg1;
- (id)iplist;
- (void)setIplist:(id)arg1;
- (BOOL)bUseDCIP;
- (void)setBUseDCIP:(BOOL)arg1;
- (unsigned int)lastNewDNSTime;
- (void)setLastNewDNSTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
