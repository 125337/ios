@interface WCTimelineEmoticonManager : NSObject
{
    BOOL _enableUpdateCommentEmoticon; // +0x8
    NSCache * _memoryCache; // +0x10
    NSString * _cacheDirectory; // +0x18
    long long _cachedExpirationInterval; // +0x20
    long long _fileCountLimit; // +0x28
}
- (id)init;
- (id)getCacheDirectory;
- (id)cachePathForMd5:(id)arg1;
- (id)getObjectForMd5:(id)arg1;
- (void)setObject:(id)arg1 forMd5:(id)arg2;
- (void)setExpiredObjectToCache:(id)arg1 forMd5:(id)arg2;
- (void)clearExpiredCache;
- (BOOL)isCacheExpired:(id)arg1;
- (BOOL)shouldFetchObjectFromNetwork:(id)arg1;
- (id)snsEmojiInfoObjFromCacheOrComment:(id)arg1;
- (id)memoryCache;
- (void)setMemoryCache:(id)arg1;
- (id)cacheDirectory;
- (void)setCacheDirectory:(id)arg1;
- (long long)cachedExpirationInterval;
- (void)setCachedExpirationInterval:(long long)arg1;
- (long long)fileCountLimit;
- (void)setFileCountLimit:(long long)arg1;
- (BOOL)enableUpdateCommentEmoticon;
- (void)setEnableUpdateCommentEmoticon:(BOOL)arg1;
- (void).cxx_destruct;
@end
