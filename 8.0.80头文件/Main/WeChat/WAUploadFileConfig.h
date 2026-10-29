@interface WAUploadFileConfig : WANetworkConfigBase <WANetworkConfigBaseDataSource>
{
    unsigned int _uploadFileMaxConcurrentCount; // +0x18
}
- (void)loadConfig:(id)arg1;
- (id)configDomainList;
- (unsigned int)configMaxTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configDefaultTimeoutMS;
- (unsigned int)uploadFileMaxConcurrentCount;
- (void)setUploadFileMaxConcurrentCount:(unsigned int)arg1;
@end
