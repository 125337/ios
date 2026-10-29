@interface WCFinderJustWatchContoller : NSObject
{
    BOOL _isLoading; // +0x8
    BOOL _feedPageSelectTag; // +0x9
    BOOL _showAnyBanner; // +0xa
    BOOL _hiddenJustWatchBanner; // +0xb
    NSString * _justWatchTid; // +0x10
    NSString * _notifykey; // +0x18
    long long _watchIndex; // +0x20
    long long _state; // +0x28
}
+ (id)controllerWithNotifyKey:(id)arg1;
- (void)setFeedPageSelectTag:(BOOL)arg1;
- (void)loadJustWtachRespCtrl:(id)arg1 tid:(id)arg2;
- (void)onFinishLoadShowAnyJustWatch:(id)arg1;
- (void)onProfileTabChangeTriggeJustWatch;
- (void)_triggleJustWatchDisplay;
- (void)onHalfJumpFullScreenTryPost;
- (BOOL)isJustWatchingFeed:(id)arg1;
- (void)onClickJumpToFeed;
- (void)notifyJustWatchCellDisplayed;
- (void)cleanJustWatch;
- (id)justWatchTid;
- (void)setJustWatchTid:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)feedPageSelectTag;
- (BOOL)showAnyBanner;
- (void)setShowAnyBanner:(BOOL)arg1;
- (id)notifykey;
- (void)setNotifykey:(id)arg1;
- (long long)watchIndex;
- (void)setWatchIndex:(long long)arg1;
- (BOOL)hiddenJustWatchBanner;
- (void)setHiddenJustWatchBanner:(BOOL)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (void).cxx_destruct;
@end

