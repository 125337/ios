@interface OMJResourceCacheCleanupOptions : NSObject
{
    long long _cacheSizeLimit; // +0x8
    long long _cleanupThreshold; // +0x10
}
- (id)initWithCacheSizeLimit:(long long)arg1;
- (id)initWithCacheSizeLimit:(long long)arg1 cleanupThreshold:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)cacheSizeLimit;
- (long long)cleanupThreshold;
@end

