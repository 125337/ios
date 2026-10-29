@interface WAWebSocketConfig : WANetworkConfigBase <WANetworkConfigBaseDataSource>
{
    BOOL _TLSSkipHostnameCheck; // +0x18
    unsigned int _webSocketMaxConcurrentCount; // +0x1c
}
- (void)loadConfig:(id)arg1;
- (id)configDomainList;
- (unsigned int)configMaxTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configDefaultTimeoutMS;
- (unsigned int)webSocketMaxConcurrentCount;
- (void)setWebSocketMaxConcurrentCount:(unsigned int)arg1;
- (BOOL)TLSSkipHostnameCheck;
- (void)setTLSSkipHostnameCheck:(BOOL)arg1;
@end

