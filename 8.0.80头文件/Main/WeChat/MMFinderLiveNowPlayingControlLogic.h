@interface MMFinderLiveNowPlayingControlLogic : NSObject <MMLiveTaskMgrExt, MMFinderLiveTaskExt>
{
    BOOL _isInBackground; // +0x8
    BOOL _isStart; // +0x9
    BOOL _isResignActive; // +0xa
    BOOL _isProtectedDataStatusAvaliable; // +0xb
    BOOL _isPendingTagControlConditionAppForeground; // +0xc
    BOOL _isInNowPlayingControl; // +0xd
    BOOL _isNowPlayingLiveModule; // +0xe
    NSDictionary * _nowPlayingInfo; // +0x10
    MMLiveTaskId * _nowPlayingTaskId; // +0x18
    long long _controlConditions; // +0x20
    MMFinderLiveNowPlayingSessionInfo * _session; // +0x28
}
+ (id)genNowPlayingArtworkForImage:(id)arg1;
- (void)addControlCondition:(long long)arg1;
- (void)clearControlCondition:(long long)arg1;
- (void)onNowPlayingInfoCenterChanged;
- (void)onNowPlayingPlayCommandInvoke;
- (void)onNowPlayingPauseCommandInvoke;
- (void)delayOnControlConditionsChanged;
- (void)onControlConditionsChanged;
- (BOOL)checkCurrInLiveNowPlayingControl;
- (void)delayOnNowPlayingIsLiveModuleChanged;
- (void)onNowPlayingIsLiveModuleChanged;
- (void)enterNowPlayingControl;
- (void)exitNowPlayingControl;
- (id)getReportExtraParams;
- (id)init;
- (void)registerExtensions;
- (void)addNotifications;
- (void)initDefaultDatas;
- (void)startNowPlayingControl:(id)arg1;
- (void)stopNowPlayingControl;
- (void)updateNowPlayingInfoForcely:(BOOL)arg1;
- (BOOL)checkCurrentNowPlayingIsLiveModule;
- (id)moduleId;
- (BOOL)checkCurrNowPlayingInfoModuleConflict;
- (BOOL)checkNowPlayingInfo:(id)arg1 identityMatch:(id)arg2;
- (BOOL)isNowPlayingControlPlayingStatus;
- (void)resetRemoteControlAndPlayingInfo;
- (void)resetNowPlayingInfo;
- (void)updateNowPlayingInfo:(id)arg1;
- (void)resetRemoteControl;
- (void)registerCommandCenterActions;
- (void)updateAnchorNoticeToNowPlayingInfo:(id)arg1;
- (void)updateAnchorDisplayNameToNowPlayingInfo:(id)arg1;
- (void)updateLiveCoverImageToNowPlayingInfo:(id)arg1;
- (void)updateLiveCoverImageToNowPlayingInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)updateLiveStatusToNowPlayingInfo:(id)arg1;
- (long long)handleRemoteCommand:(id)arg1;
- (long long)handleReceivePlayCommand;
- (long long)handleReceivePauseCommand;
- (long long)handleReceiveTogglePlayPauseCommand;
- (void)applicationEnterForeground;
- (void)applicationDidBecomeActive;
- (void)applicationEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationProtectedDataStatusAvaliable;
- (void)applicationProtectedDataStatusUnAvaliable;
- (void)updateResignActive:(BOOL)arg1 checkEqual:(BOOL)arg2;
- (void)tryTagControlConditionAppUnActive;
- (void)updateIsInBackground:(BOOL)arg1 checkEqual:(BOOL)arg2;
- (void)tryTagControlConditionAppForeground;
- (void)updateProtectedDataStatusAvaliable:(BOOL)arg1 checkEqual:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 livePlayStatusForAudienceChanged:(long long)arg2;
- (void)onLiveTask:(id)arg1 liveClosed:(BOOL)arg2;
- (void)onLiveTaskEnterLive:(id)arg1;
- (void)onFinderLiveTaskDataItemUpdated:(id)arg1;
- (id)nowPlayingLiveTask;
- (id)finderLiveTaskId;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (id)nowPlayingTaskId;
- (void)setNowPlayingTaskId:(id)arg1;
- (BOOL)isResignActive;
- (void)setIsResignActive:(BOOL)arg1;
- (BOOL)isProtectedDataStatusAvaliable;
- (void)setIsProtectedDataStatusAvaliable:(BOOL)arg1;
- (BOOL)isPendingTagControlConditionAppForeground;
- (void)setIsPendingTagControlConditionAppForeground:(BOOL)arg1;
- (long long)controlConditions;
- (void)setControlConditions:(long long)arg1;
- (BOOL)isInNowPlayingControl;
- (void)setIsInNowPlayingControl:(BOOL)arg1;
- (BOOL)isNowPlayingLiveModule;
- (void)setIsNowPlayingLiveModule:(BOOL)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (void).cxx_destruct;
@end
