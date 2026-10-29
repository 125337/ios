@interface MMFinderLiveBottomButtonStyleManager : NSObject <MMFinderLiveResPathManagerProtocol>
{
    id <MMFinderLiveBottomButtonStyleManagerDelegate> _delegate; // +0x8
    MMFinderLiveBottomButtonBackgroundColorConfig * _colorConfig; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMLiveResourceFetcherLegacyApiAdapter * _downloadMgr; // +0x20
    FinderLiveButtonInfo * _currentButtonInfo; // +0x28
    NSMutableArray * _pendingAnimationItems; // +0x30
    MMFinderLiveBottomButtonAnimationItem * _playingAnimationItem; // +0x38
    MMTimer * _animationCountdownTimer; // +0x40
    NSString * _liveShoppingButtonBubblePAGPath; // +0x48
}
- (id)init;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (id)liveTask;
- (void)reloadButtonBGAndIconWithType:(unsigned int)arg1;
- (void)reloadAllButtonBGAndIcon;
- (void)handleButtonInfo:(id)arg1;
- (void)loadButtonIconAndBGResource:(id)arg1;
- (void)loadGlobalIconResource:(id)arg1;
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
- (id)taskId;
- (void)setTaskId:(id)arg1;
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
