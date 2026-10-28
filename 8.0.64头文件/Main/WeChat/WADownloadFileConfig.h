@interface WADownloadFileConfig : WANetworkConfigBase <WANetworkConfigBaseDataSource>
{
    unsigned int _downloadFileMaxConcurrentCount; // +0x18
    unsigned long long _downloadFileMaxFileSize; // +0x20
}
- (void)loadConfig:(id)arg1;
- (id)configDomainList;
- (unsigned int)configMaxTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configDefaultTimeoutMS;
- (unsigned int)downloadFileMaxConcurrentCount;
- (void)setDownloadFileMaxConcurrentCount:(unsigned int)arg1;
- (unsigned long long)downloadFileMaxFileSize;
- (void)setDownloadFileMaxFileSize:(unsigned long long)arg1;
@end
