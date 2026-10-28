@interface MJAIAssetCacheManager : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _uploadResultCache; // +0x8
}
- (id)init;
- (void)cacheUploadResult:(id)arg1 forFileKey:(id)arg2;
- (id)getCachedUploadResultForFileKey:(id)arg1;
- (id)uploadResultCache;
- (void)setUploadResultCache:(id)arg1;
- (void).cxx_destruct;
@end
