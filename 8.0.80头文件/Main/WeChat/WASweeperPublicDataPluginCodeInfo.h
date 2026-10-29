@interface WASweeperPublicDataPluginCodeInfo : NSObject
{
    unsigned long long _pluginCodeCacheSize; // +0x8
    unsigned long long _pluginCodeCacheSizeIn7Days; // +0x10
    unsigned long long _pluginCodeCacheSizeIn14Days; // +0x18
    unsigned long long _pluginCodeCacheSizeIn30Days; // +0x20
    unsigned long long _pluginCodeCacheSizeIn60Days; // +0x28
}
- (id)description;
- (unsigned long long)pluginCodeCacheSize;
- (void)setPluginCodeCacheSize:(unsigned long long)arg1;
- (unsigned long long)pluginCodeCacheSizeIn7Days;
- (void)setPluginCodeCacheSizeIn7Days:(unsigned long long)arg1;
- (unsigned long long)pluginCodeCacheSizeIn14Days;
- (void)setPluginCodeCacheSizeIn14Days:(unsigned long long)arg1;
- (unsigned long long)pluginCodeCacheSizeIn30Days;
- (void)setPluginCodeCacheSizeIn30Days:(unsigned long long)arg1;
- (unsigned long long)pluginCodeCacheSizeIn60Days;
- (void)setPluginCodeCacheSizeIn60Days:(unsigned long long)arg1;
@end
