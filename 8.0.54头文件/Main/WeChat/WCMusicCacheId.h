@interface WCMusicCacheId : NSObject <PBCoding>
{
    BOOL _ignoreCache; // +0x8
    NSString * _innerCacheId; // +0x10
    NSString * _musicId; // +0x18
}
+ (void)PBArrayAdd_innerCacheId;
+ (void)PBArrayAdd_ignoreCache;
+ (void)PBArrayAdd_musicId;
+ (void)initialize;
+ (id)cacheIdWithInnerCacheId:(id)arg1 cacheUrl:(id)arg2 dataUrl:(id)arg3;
+ (id)hashForUrl:(id)arg1;
+ (id)cacheIdFromKSCacheId:(id)arg1;
+ (id)safeFileNameFromBase64String:(id)arg1;
+ (id)base64StringFromSafeFileName:(id)arg1;
+ (id)replacedStringWithInput:(id)arg1 charMap:(id)arg2;
- (id)getPBPropertyTable;
- (id)generateKSCacheId;
- (id)innerCacheId;
- (void)setInnerCacheId:(id)arg1;
- (BOOL)ignoreCache;
- (void)setIgnoreCache:(BOOL)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (void).cxx_destruct;
@end

