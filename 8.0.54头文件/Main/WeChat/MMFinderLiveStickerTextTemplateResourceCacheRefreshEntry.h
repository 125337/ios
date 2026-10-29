@interface MMFinderLiveStickerTextTemplateResourceCacheRefreshEntry : NSObject
{
    NSString * _resourceMd5Hash; // +0x8
    NSString * _extractedResourcePath; // +0x10
    unsigned long long _lastRefreshUnixEpochTimeInMilliseconds; // +0x18
}
- (id)resourceMd5Hash;
- (void)setResourceMd5Hash:(id)arg1;
- (id)extractedResourcePath;
- (void)setExtractedResourcePath:(id)arg1;
- (unsigned long long)lastRefreshUnixEpochTimeInMilliseconds;
- (void)setLastRefreshUnixEpochTimeInMilliseconds:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

