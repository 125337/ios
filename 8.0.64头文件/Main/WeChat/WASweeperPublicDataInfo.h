@interface WASweeperPublicDataInfo : NSObject
{
    unsigned long long _pluginCodeCacheSize; // +0x8
    unsigned long long _cronetCacheSize; // +0x10
    unsigned long long _videoCacheSize; // +0x18
    unsigned long long _renderCacheSize; // +0x20
    unsigned long long _codeCacheSize; // +0x28
    unsigned long long _predownloadCacheSize; // +0x30
    unsigned long long _predownloadCacheCount; // +0x38
}
- (unsigned long long)pluginCodeCacheSize;
- (void)setPluginCodeCacheSize:(unsigned long long)arg1;
- (unsigned long long)cronetCacheSize;
- (void)setCronetCacheSize:(unsigned long long)arg1;
- (unsigned long long)videoCacheSize;
- (void)setVideoCacheSize:(unsigned long long)arg1;
- (unsigned long long)renderCacheSize;
- (void)setRenderCacheSize:(unsigned long long)arg1;
- (unsigned long long)codeCacheSize;
- (void)setCodeCacheSize:(unsigned long long)arg1;
- (unsigned long long)predownloadCacheSize;
- (void)setPredownloadCacheSize:(unsigned long long)arg1;
- (unsigned long long)predownloadCacheCount;
- (void)setPredownloadCacheCount:(unsigned long long)arg1;
@end
