@interface WCImageCache : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * m_WCImagesOfType; // +0x8
}
+ (BOOL)couldCacheImage:(id)arg1;
- (id)init;
- (id)getImage:(id)arg1 ofType:(long long)arg2;
- (void)setImage:(id)arg1 forMedia:(id)arg2 ofType:(long long)arg3;
- (void)clearAllCaches;
- (void)onServiceMemoryWarning;
- (unsigned long long)onServiceCleanCache;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void).cxx_destruct;
@end

