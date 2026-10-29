@interface WCFinderLikeEasterEggLoader : NSObject <IStoreEmotionSingleDownloadMgrExt>
{
    NSString * _currentMd5; // +0x8
    id /* block */ _completion; // +0x10
}
+ (BOOL)localCacheAvailableForIdentifier:(id)arg1;
+ (void)preloadCacheForInfo:(id)arg1;
- (void)dealloc;
- (void)consumeEmojiInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidate;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)currentMd5;
- (void)setCurrentMd5:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
