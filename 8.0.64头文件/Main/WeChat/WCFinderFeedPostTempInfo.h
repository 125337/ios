@interface WCFinderFeedPostTempInfo : NSObject
{
    BOOL _isOnPostLoading; // +0x8
    RecommendedMusicInfo * _musicInfo; // +0x10
}
- (BOOL)isOnPostLoading;
- (void)setIsOnPostLoading:(BOOL)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (void).cxx_destruct;
@end
