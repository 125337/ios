@interface MMFinderLiveScreenRecordCustomPIPHandler : MMFinderLiveCustomPIPHandler <WCFinderLiveExt, MMLiveTaskMgrExt>
{
    BOOL _isGameLiveAccessoryLiteAppCardVCInitating; // +0x8
    BOOL _isAudioSessionInterrupted; // +0x9
    BOOL _isAppResignActive; // +0xa
    MMUIView * _gameLiveAccessoryContainerView; // +0x10
    FinderJumpInfo * _gameLiveAccessoryViewJumpInfo; // +0x18
    MMLiteAppViewController * _gameLiveAccessoryLiteAppCardVC; // +0x20
    unsigned long long _gameLiveAccessoryRenderStyle; // +0x28
    MMGameLiveAccessoryTipView * _gameLiveAccessoryTipView; // +0x30
    CGSize _pipRenderSize; // +0x38
}
+ (BOOL)isPIPRenderSizeValid:(CGSize)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultData;
- (id)getPIPHandleLogic;
- (void)onPictureInPictureStart;
- (id)getPIPStartParam;
- (void)registerExtensions;
- (void)tryToManualStartPictureInPicture;
- (BOOL)updateAudioSessionInterrupted:(BOOL)arg1;
- (void)updateIsAppResignActive:(BOOL)arg1;
- (unsigned long long)getCurrAppropriateRenderStyle;
- (void)updateGameLiveAccessoryRenderStyle:(unsigned long long)arg1;
- (void)createGameLiveAccessoryTipView;
- (void)notifyChangeGameLiveAccessoryRenderStyleIfNeed;
- (void)listenLiteAppEvent:(id /* block */)arg1;
- (BOOL)refreshGameLiveAccessoryView:(id)arg1;
- (void)openGameLiveAccessoryViewWithJumpInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)createGameLiveAccessoryLiteAppCard:(id /* block */)arg1;
- (void)destroyGameLiveAccessoryViews;
- (void)debug_configPIPRenderSizeIfNeed;
- (BOOL)configPIPRenderSize:(CGSize)arg1;
- (id)generateFinalQueryWithJumpInfo:(id)arg1;
- (void)notifyAudioSessionInterruptedToLiteApp;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)onGetFinderLiveAlertInfoWithTaskId:(id)arg1 alertInfo:(id)arg2;
- (void)onGameRecordLiveActiveAudioSession:(id)arg1 src:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 sysCallInterrupted:(BOOL)arg2;
- (void)onLivePausedByVerifyBegin:(id)arg1;
- (void)onLivePausedByVerifyEnd:(id)arg1;
- (void)onLiveAlertEnd:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)didChangeScreenCapture:(id)arg1;
- (void)sendRecordEvent;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)onPIPStartChange:(BOOL)arg1;
- (void)openGameLiveAccessoryView:(id /* block */)arg1;
- (CGSize)pipRenderSize;
- (void)setPipRenderSize:(CGSize)arg1;
- (id)gameLiveAccessoryContainerView;
- (void)setGameLiveAccessoryContainerView:(id)arg1;
- (id)gameLiveAccessoryViewJumpInfo;
- (void)setGameLiveAccessoryViewJumpInfo:(id)arg1;
- (id)gameLiveAccessoryLiteAppCardVC;
- (void)setGameLiveAccessoryLiteAppCardVC:(id)arg1;
- (BOOL)isGameLiveAccessoryLiteAppCardVCInitating;
- (void)setIsGameLiveAccessoryLiteAppCardVCInitating:(BOOL)arg1;
- (BOOL)isAudioSessionInterrupted;
- (void)setIsAudioSessionInterrupted:(BOOL)arg1;
- (BOOL)isAppResignActive;
- (void)setIsAppResignActive:(BOOL)arg1;
- (unsigned long long)gameLiveAccessoryRenderStyle;
- (void)setGameLiveAccessoryRenderStyle:(unsigned long long)arg1;
- (id)gameLiveAccessoryTipView;
- (void)setGameLiveAccessoryTipView:(id)arg1;
- (void).cxx_destruct;
@end
