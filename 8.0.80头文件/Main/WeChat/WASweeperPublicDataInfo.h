@interface WASweeperPublicDataInfo : NSObject
{
    unsigned long long _cronetCacheSize; // +0x8
    unsigned long long _videoCacheSize; // +0x10
    unsigned long long _renderCacheSize; // +0x18
    unsigned long long _codeCacheSize; // +0x20
    WASweeperPublicDataPredownloadInfo * _predownloadInfo; // +0x28
    WASweeperPublicDataPluginCodeInfo * _pluginCodeInfo; // +0x30
}
- (unsigned long long)cronetCacheSize;
- (void)setCronetCacheSize:(unsigned long long)arg1;
- (unsigned long long)videoCacheSize;
- (void)setVideoCacheSize:(unsigned long long)arg1;
- (unsigned long long)renderCacheSize;
- (void)setRenderCacheSize:(unsigned long long)arg1;
- (unsigned long long)codeCacheSize;
- (void)setCodeCacheSize:(unsigned long long)arg1;
- (id)predownloadInfo;
- (void)setPredownloadInfo:(id)arg1;
- (id)pluginCodeInfo;
- (void)setPluginCodeInfo:(id)arg1;
- (void).cxx_destruct;
@end
