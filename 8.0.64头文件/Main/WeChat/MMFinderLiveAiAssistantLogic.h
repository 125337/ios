@interface MMFinderLiveAiAssistantLogic : NSObject <WCFinderLiveExt, MMFinderLiveAiAssistantExt, MMFinderLiveMusicSettingReportDelegate>
{
    BOOL _isAiAssistantEnabled; // +0x8
    BOOL _hasCheckedIsShowingFirstTime; // +0x9
    BOOL _hasReportedFirstExposeInLive; // +0xa
    MMFinderLiveTaskId * _taskId; // +0x10
    id <MMFinderLiveAiAssistantLogicDelegate> _delegate; // +0x18
    FinderLiveAiAssistantNotification * _currentAiAssistantInfo; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)_init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)onJoinLive;
- (void)checkIsShowingFirstTime;
- (void)checkAndSetAiAssistantEnabled;
- (void)onCheckedAiAssistantEnableStatus;
- (BOOL)checkAiAssistantInfoWithdrawn:(id)arg1;
- (BOOL)checkAiAssistantInfoShouldBeDisposed:(id)arg1;
- (void)processFeatureGuide:(id)arg1;
- (void)processJumpInfo:(id)arg1;
- (void)onReportMusicSettingActionType:(long long)arg1 songIdList:(id)arg2;
- (void)onAiAssistantActionClickedWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2;
- (void)onAiAssistantInfoUpdatedWithTaskId:(id)arg1 aiAssistantInfo:(id)arg2;
- (id)liveTask;
- (id)liveOperationView;
- (id)liveJumpInfo;
- (void)reportWithdrawn;
- (void)reportFirstExposeInLive;
- (void)mockAiAssistantInfoIfNeeded;
- (id)mockMusic;
- (id)mockLiveTheme;
- (id)taskId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentAiAssistantInfo;
- (void)setCurrentAiAssistantInfo:(id)arg1;
- (BOOL)isAiAssistantEnabled;
- (void)setIsAiAssistantEnabled:(BOOL)arg1;
- (BOOL)hasCheckedIsShowingFirstTime;
- (void)setHasCheckedIsShowingFirstTime:(BOOL)arg1;
- (BOOL)hasReportedFirstExposeInLive;
- (void)setHasReportedFirstExposeInLive:(BOOL)arg1;
- (void).cxx_destruct;
@end
