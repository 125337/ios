@interface WCMomentsPlayerSourceCache : MMUserService <MMCleanCacheMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _sourceStatusCache; // +0x8
}
- (id)init;
- (id)sourceStatusCache;
- (void)updateSourceStatus:(long long)arg1 forMediaItem:(id)arg2;
- (long long)getSourceStatusForMediaItem:(id)arg1;
- (void)onCacheMgrCleanCacheWarning;
- (void).cxx_destruct;
@end

