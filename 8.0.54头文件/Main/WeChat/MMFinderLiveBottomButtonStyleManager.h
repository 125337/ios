@interface MMFinderLiveBottomButtonStyleManager : NSObject <MMFinderLiveResPathManagerProtocol>
{
    id <MMFinderLiveBottomButtonStyleManagerDelegate> _delegate; // +0x8
    MMFinderLiveBottomButtonBackgroundColorConfig * _colorConfig; // +0x10
    MMLiveResourceFetcherLegacyApiAdapter * _downloadMgr; // +0x18
    FinderLiveButtonInfo * _currentButtonInfo; // +0x20
    NSMutableArray * _pendingAnimationItems; // +0x28
    MMFinderLiveBottomButtonAnimationItem * _playingAnimationItem; // +0x30
    MMTimer * _animationCountdownTimer; // +0x38
    NSString * _liveShoppingButtonBubblePAGPath; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)reloadButtonBGAndIconWithType:(unsigned int)arg1;
- (void)reloadAllButtonBGAndIcon;
- (void)handleButtonInfo:(id)arg1;
- (void)loadButtonIconAndBGResource:(id)arg1;
- (id)updateLocalLoopsWithRemotes:(id)arg1;
- (void)addNewAnimationInfos:(id)arg1;
- (void)delayShoppingButtonLoopAnimations:(unsigned long long)arg1;
- (BOOL)isString:(id)arg1 equalToOther:(id)arg2;
- (void)handleButtonIconInfoResReady:(id)arg1 iconPath:(id)arg2 bgPath:(id)arg3;
- (void)onAnimationDownloadFailed:(id)arg1;
- (void)onAnimationDownloadSuccess:(id)arg1 localFilePath:(id)arg2;
- (void)tryPlayPendingAnimation;
- (void)addCurrentAnimationAgainIfLoop;
- (void)scheduleAnimationTimerIfNeeded;
- (void)onAnimationTimerFired;
- (void)refreshResourceUsageAtPath:(id)arg1;
- (void)cleanUnusedResources;
- (id)liveShoppingButtonBubblePAGPath;
- (id)cacheFolder;
- (id)cachePath:(id)arg1;
- (id)zipPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)colorConfig;
- (void)setColorConfig:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (id)currentButtonInfo;
- (void)setCurrentButtonInfo:(id)arg1;
- (id)pendingAnimationItems;
- (void)setPendingAnimationItems:(id)arg1;
- (id)playingAnimationItem;
- (void)setPlayingAnimationItem:(id)arg1;
- (id)animationCountdownTimer;
- (void)setAnimationCountdownTimer:(id)arg1;
- (void)setLiveShoppingButtonBubblePAGPath:(id)arg1;
- (void).cxx_destruct;
@end

