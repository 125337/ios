@interface MMLiveCustomRenderPIPHandleLogic : NSObject <MMLiveTaskMgrExt, MMFinderLiveReplayViewExt, MMLiveViewExt, MMSceneDelegateExt, AVPictureInPictureControllerDelegate>
{
    BOOL _isHandling; // +0x8
    BOOL _isPlayerAbnormalPaused; // +0x9
    BOOL _isRestoreUserInterface; // +0xa
    BOOL _isLiveVCAppear; // +0xb
    BOOL _isShowCloseBtn; // +0xc
    BOOL _isShowPauseBtn; // +0xd
    BOOL _isAutoStopPIP; // +0xe
    BOOL _isResignActive; // +0xf
    BOOL _isPIPDisable; // +0x10
    BOOL _needAutoHandlePIPForEnterForeground; // +0x11
    BOOL _needAutoActivePIPForEnterForeground; // +0x12
    BOOL _isHideLiveMinimizeView; // +0x13
    BOOL _needTemporaryIgnoreMainVideoViewFrameChanged; // +0x14
    BOOL _isSystemPIPStarted; // +0x15
    BOOL _isInBackground; // +0x16
    BOOL _isAutoPausePlayer; // +0x17
    BOOL _isAutoResumePlayer; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    id /* block */ _getCustomRenderViewBlock; // +0x28
    id /* block */ _getPIPStartParamBlock; // +0x30
    id /* block */ _getPIPRenderViewFrameBlock; // +0x38
    id /* block */ _getPIPRenderSizeHWPercentBlock; // +0x40
    id /* block */ _getPIPEnableStartBlock; // +0x48
    id /* block */ _checkPIPLogicConfigedBlock; // +0x50
    id /* block */ _notifyWillAutoStopPIPBlock; // +0x58
    id /* block */ _notifyEnterForegroundWithPIPActivelock; // +0x60
    id /* block */ _onDestroyedCallback; // +0x68
    UIView<MMLiveCustomRenderPIPViewProtocol> * _attachedContentView; // +0x70
    id /* block */ _notifyWillRestoreUserInterfacePIPBlock; // +0x78
    id /* block */ _notifyPIPWillStartBlock; // +0x80
    id /* block */ _notifyPIPDidStopBlock; // +0x88
    UIView * _testView; // +0x90
    unsigned long long _currentPIPStartScene; // +0x98
    CGSize _videoSize; // +0xa0
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)initNotifications;
- (BOOL)enableStartPictureInPicture;
- (void)startHandle;
- (void)stopHandle;
- (void)attachRenderView:(id)arg1;
- (void)updateRenderSize;
- (void)updateRenderViewFrame;
- (void)updateRenderViewFrame:(CGRect)arg1;
- (CGRect)getRenderViewFrame;
- (CGSize)getRenderSize;
- (CGRect)getAbsoluteRenderViewFrame;
- (double)getRenderSizeHWPercent;
- (CGRect)getHandledMainVideoViewFrameForMultiScene:(CGRect)arg1;
- (CGSize)getFloorNormalizedSize:(CGSize)arg1;
- (BOOL)isLiveCurrentCDNPlay;
- (void)destroy;
- (void)startLoading;
- (void)stopLoading;
- (void)onCurrentActivePIPTaskBeRemoved;
- (void)onPlayerTimeControlStatusChanged:(long long)arg1;
- (void)tryPauseLiveByPIPForPlayerStatusPaused;
- (void)tryResumeLiveByPIPForPlayerStatusPlaying;
- (void)delayReportForPausePIP;
- (void)delayReportForResumePIP;
- (void)onStartPIP;
- (void)onStopPIP;
- (void)checkNeedResumeLiveAndStartTracingForPIP;
- (void)onCustomViewAttach:(id)arg1;
- (void)onCustomViewDeAttach:(id)arg1;
- (void)tagTemporaryIgnoreMainVideoViewFrameChanged;
- (void)unTagTemporaryIgnoreMainVideoViewFrameChanged;
- (void)clearTemporaryIgnoreMainVideoViewFrameChangeTag;
- (void)onPIPAuthorityOccupied;
- (void)onPIPAuthorityAchieved;
- (BOOL)checkCurrHasPIPAuthority;
- (void)updateVideoSize:(CGSize)arg1 cdn:(BOOL)arg2;
- (void)setIndicatorState:(unsigned long long)arg1;
- (BOOL)supportUpdatePIPControlStyle;
- (unsigned long long)preferPIPAutoStopType;
- (void)tagSystemPIPStarted;
- (void)enableBackgroundDecoding:(BOOL)arg1;
- (void)enableBackgroundRendering:(BOOL)arg1;
- (void)resetTagsBeforeStart;
- (void)clearLastPIPRunningTags;
- (void)hideLiveMinimizeView;
- (void)showLiveMinimizeView;
- (void)showCloseButton;
- (void)hideCloseButton;
- (void)updateIsShowCloseBtn:(BOOL)arg1;
- (void)showPauseButton;
- (void)hidePauseButton;
- (void)updateIsShowPauseBtn:(BOOL)arg1;
- (void)checkNeedAutoPausePlayer;
- (void)checkNeedAutoResumePlayer;
- (BOOL)isLiveCurrentPlaying;
- (BOOL)checkRootLiveIsCurrentLive;
- (void)attachContentViewToCustomView:(id)arg1;
- (void)deAttachContentViewFromCustomView:(id)arg1;
- (id)getCustomContentView;
- (id)getPIPStartParam;
- (void)attachContentView:(id)arg1 toContainer:(id)arg2;
- (void)deAttachContentView;
- (void)onLiveReplayViewPlayerFrameChanged:(id)arg1 liveTaskId:(id)arg2 newPlayerFrame:(CGRect)arg3;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (void)onLiveViewConnectMicViewFrameChanged:(id)arg1 newConnectMicViewFrame:(CGRect)arg2;
- (void)onLiveView:(id)arg1 cdnPlayerViewAppearanceChanged:(BOOL)arg2;
- (void)onLiveView:(id)arg1 enableShowLiveRoomCoverImageViewChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 cdnPlayRemoteVideoSizeChanged:(CGSize)arg2;
- (void)onLiveTask:(id)arg1 replayRemoteVideoSizeChanged:(CGSize)arg2;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 appSceneChanged:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 isAudienceLocalAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3 showTip:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 minimizeWindowDidClosed:(BOOL)arg2 pipMode:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 livePlayStatusForAudienceChanged:(long long)arg2;
- (void)onLivePlayingForAudienceChanged:(BOOL)arg1;
- (void)onLiveViewControllerDidAppear:(id)arg1;
- (void)onLiveViewControllerDidAppear;
- (void)onLiveViewControllerWillDisappear:(id)arg1;
- (void)onLiveViewControllerWillDisappear;
- (void)onLiveTask:(id)arg1 isAssistantValueChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 isSyndicateParticipantValueChanged:(BOOL)arg2;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onLiveMinimizedWindowExtendFromCollapse;
- (void)onLiveTaskMinimizedWindowDismiss:(id)arg1;
- (void)checkAndUpdateRenderSizeForVideoSizeChanged;
- (void)onMainSceneSizeChangedFrom:(CGSize)arg1 to:(CGSize)arg2;
- (CGRect)inner_getAbsoluteRenderViewFrame;
- (CGRect)getLocalAudioModeAbsoluteRenderViewFrame;
- (CGRect)getAbsoluteMainVideoViewFrame;
- (CGRect)getNormalizedMainVideoViewFrame;
- (double)getVideoContainerWHPercent;
- (CGSize)getAbsoluteWindowSizeForCurrUIOrientation;
- (CGRect)getAbsoluteVideoContainerViewFrame;
- (CGRect)getAbsoluteTrtcConnectMicViewFrame;
- (void)willEnterForeground:(id)arg1;
- (void)resumeLiveIfNeedWhenEnterForeground;
- (void)autoProcessPIPForEnterForeground;
- (void)didEnterBackground:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (BOOL)checkNeedAutoStopPIPForEnterForeground;
- (BOOL)checkNeedAutoActivePIPForEnterForeground;
- (void)autoHandlePIPForEnterForeground;
- (void)autoStopPIP:(unsigned long long)arg1;
- (void)autoActivePIPForEnterForeground;
- (BOOL)checkNeedAutoRestorePIPForEnterForeground;
- (BOOL)checkNeedAutoRestartPIPForEnterForeground;
- (void)autoRestartPIPForEnterForeground;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)invokeRestoreCompletion:(id /* block */)arg1 restore:(BOOL)arg2;
- (id)finderLiveViewController;
- (id)finderLiveTask;
- (CGSize)videoSize;
- (CGSize)currLiveVideoSize;
- (BOOL)isMinimizeWindowCurrShowPauseBtn;
- (BOOL)isOpeningLivePIPMinimizeWindow;
- (BOOL)checkMinimizeWindowModeUnvalid;
- (BOOL)needOpenLivePIP;
- (BOOL)isReplayLive;
- (id)currentReplayController;
- (BOOL)openTestMode;
- (BOOL)isInLiveRoom;
- (BOOL)isPIPStart;
- (void)attachTestViewToCustomView:(id)arg1;
- (void)deAttachTestViewFromCustomView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isHandling;
- (void)setIsHandling:(BOOL)arg1;
- (BOOL)isPlayerAbnormalPaused;
- (void)setIsPlayerAbnormalPaused:(BOOL)arg1;
- (BOOL)isRestoreUserInterface;
- (void)setIsRestoreUserInterface:(BOOL)arg1;
- (BOOL)isLiveVCAppear;
- (void)setIsLiveVCAppear:(BOOL)arg1;
- (id /* block */)getCustomRenderViewBlock;
- (void)setGetCustomRenderViewBlock:(id /* block */)arg1;
- (id /* block */)getPIPStartParamBlock;
- (void)setGetPIPStartParamBlock:(id /* block */)arg1;
- (id /* block */)getPIPRenderViewFrameBlock;
- (void)setGetPIPRenderViewFrameBlock:(id /* block */)arg1;
- (id /* block */)getPIPRenderSizeHWPercentBlock;
- (void)setGetPIPRenderSizeHWPercentBlock:(id /* block */)arg1;
- (id /* block */)getPIPEnableStartBlock;
- (void)setGetPIPEnableStartBlock:(id /* block */)arg1;
- (id /* block */)checkPIPLogicConfigedBlock;
- (void)setCheckPIPLogicConfigedBlock:(id /* block */)arg1;
- (id /* block */)notifyWillAutoStopPIPBlock;
- (void)setNotifyWillAutoStopPIPBlock:(id /* block */)arg1;
- (id /* block */)notifyEnterForegroundWithPIPActivelock;
- (void)setNotifyEnterForegroundWithPIPActivelock:(id /* block */)arg1;
- (id /* block */)onDestroyedCallback;
- (void)setOnDestroyedCallback:(id /* block */)arg1;
- (id)attachedContentView;
- (void)setAttachedContentView:(id)arg1;
- (BOOL)isShowCloseBtn;
- (void)setIsShowCloseBtn:(BOOL)arg1;
- (BOOL)isShowPauseBtn;
- (void)setIsShowPauseBtn:(BOOL)arg1;
- (id /* block */)notifyWillRestoreUserInterfacePIPBlock;
- (void)setNotifyWillRestoreUserInterfacePIPBlock:(id /* block */)arg1;
- (id /* block */)notifyPIPWillStartBlock;
- (void)setNotifyPIPWillStartBlock:(id /* block */)arg1;
- (id /* block */)notifyPIPDidStopBlock;
- (void)setNotifyPIPDidStopBlock:(id /* block */)arg1;
- (BOOL)isAutoStopPIP;
- (void)setIsAutoStopPIP:(BOOL)arg1;
- (BOOL)isResignActive;
- (void)setIsResignActive:(BOOL)arg1;
- (BOOL)isPIPDisable;
- (void)setIsPIPDisable:(BOOL)arg1;
- (BOOL)needAutoHandlePIPForEnterForeground;
- (void)setNeedAutoHandlePIPForEnterForeground:(BOOL)arg1;
- (BOOL)needAutoActivePIPForEnterForeground;
- (void)setNeedAutoActivePIPForEnterForeground:(BOOL)arg1;
- (BOOL)isHideLiveMinimizeView;
- (void)setIsHideLiveMinimizeView:(BOOL)arg1;
- (BOOL)needTemporaryIgnoreMainVideoViewFrameChanged;
- (void)setNeedTemporaryIgnoreMainVideoViewFrameChanged:(BOOL)arg1;
- (void)setVideoSize:(CGSize)arg1;
- (id)testView;
- (void)setTestView:(id)arg1;
- (unsigned long long)currentPIPStartScene;
- (void)setCurrentPIPStartScene:(unsigned long long)arg1;
- (BOOL)isSystemPIPStarted;
- (void)setIsSystemPIPStarted:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)isAutoPausePlayer;
- (void)setIsAutoPausePlayer:(BOOL)arg1;
- (BOOL)isAutoResumePlayer;
- (void)setIsAutoResumePlayer:(BOOL)arg1;
- (void).cxx_destruct;
@end
