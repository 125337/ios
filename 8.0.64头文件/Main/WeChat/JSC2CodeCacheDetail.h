@interface JSC2CodeCacheDetail : NSObject
{
    BOOL _injectUseCodeCache; // +0x8
    unsigned int _codeCacheSizeInBytes; // +0xc
    unsigned int _codeCacheVersion; // +0x10
}
- (BOOL)injectUseCodeCache;
- (void)setInjectUseCodeCache:(BOOL)arg1;
- (unsigned int)codeCacheSizeInBytes;
- (void)setCodeCacheSizeInBytes:(unsigned int)arg1;
- (unsigned int)codeCacheVersion;
- (void)setCodeCacheVersion:(unsigned int)arg1;
@end
