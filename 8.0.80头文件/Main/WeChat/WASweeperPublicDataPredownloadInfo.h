@interface WASweeperPublicDataPredownloadInfo : NSObject
{
    unsigned long long _predownloadCacheSize; // +0x8
    unsigned long long _predownloadCacheCount; // +0x10
    unsigned long long _unusedExpiredPredownloadCacheSize; // +0x18
    unsigned long long _unusedExpiredPredownloadCacheCount; // +0x20
}
- (unsigned long long)predownloadCacheSize;
- (void)setPredownloadCacheSize:(unsigned long long)arg1;
- (unsigned long long)predownloadCacheCount;
- (void)setPredownloadCacheCount:(unsigned long long)arg1;
- (unsigned long long)unusedExpiredPredownloadCacheSize;
- (void)setUnusedExpiredPredownloadCacheSize:(unsigned long long)arg1;
- (unsigned long long)unusedExpiredPredownloadCacheCount;
- (void)setUnusedExpiredPredownloadCacheCount:(unsigned long long)arg1;
@end
