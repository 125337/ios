@interface WARequestConfig : WANetworkConfigBase <WANetworkConfigBaseDataSource>
{
    unsigned int _requestMaxConcurrentCount; // +0x18
}
- (void)loadConfig:(id)arg1;
- (id)configDomainList;
- (unsigned int)configMaxTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configDefaultTimeoutMS;
- (unsigned int)requestMaxConcurrentCount;
- (void)setRequestMaxConcurrentCount:(unsigned int)arg1;
@end
