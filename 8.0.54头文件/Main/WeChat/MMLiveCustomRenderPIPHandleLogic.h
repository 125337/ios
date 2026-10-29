@interface MMLiveCustomRenderPIPHandleLogic : NSObject <MMLiveTaskMgrExt, AVPictureInPictureControllerDelegate>
{
    BOOL _isHandling; // +0x8
    BOOL _isPlayerAbnormalPaused; // +0x9
    BOOL _isRestoreUserInterface; // +0xa
    BOOL _isLiveVCAppear; // +0xb
    BOOL _isShowCloseBtn; // +0xc
    BOOL _isAutoStopPIP; // +0xd
    BOOL _isResignActive; // +0xe
    BOOL _isPIPDisable; // +0xf
    BOOL _needAutoHandlePIPForEnterForeground; // +0x10
    BOOL _needAutoActivePIPForEnterForeground; // +0x11
    BOOL _isHideLiveMinimizeView; // +0x12
    BOOL _isSystemPIPStarted; // +0x13
    BOOL _isInBackground; // +0x14
    MMFinderLiveTaskId * _taskId; // +0x18
    id /* block */ _getCustomRenderViewBlock; // +0x20
    id /* block */ _getPIPStartParamBlock; // +0x28
    UIView<MMLiveCustomRenderPIPViewProtocol> * _attachedContentView; // +0x30
    UIView * _testView; // +0x38
    unsigned long long _currentPIPStartScene; // +0x40
}
- (id)initWithTaskId:(id)arg1;
- (void)registerExtensions;
- (void)initNotifications;
- (BOOL)enableStartPictureInPicture;
- (void)startHandle;
- (void)stopHandle;
- (void)attachRenderView:(id)arg1;
- (void)updateRenderSize;
- (void)updateRenderViewFrame;
- (CGRect)getRenderViewFrame;
- (CGSize)getRenderSize;
- (CGRect)getHandledMainVideoViewFrameForMultiScene:(CGRect)arg1;
- (void)destroy;
- (void)startLoading;
- (void)stopLoading;
- (void)onCurrentActivePIPTaskBeRemoved;
- (void)onPlayerTimeControlStatusChanged:(long long)arg1;
- (void)onStartPIP;
- (void)onStopPIP;
- (void)checkNeedResumeLiveAndStartTracingForPIP;
- (void)onCustomViewAttach:(id)arg1;
- (void)onCustomViewDeAttach:(id)arg1;
- (void)onPIPAuthorityOccupied;
- (void)onPIPAuthorityAchieved;
- (BOOL)checkCurrHasPIPAuthority;
- (void)setIndicatorState:(unsigned long long)arg1;
- (void)resetTagsBeforeStart;
- (void)clearLastPIPRunningTags;
- (void)hideLiveMinimizeView;
- (void)showLiveMinimizeView;
- (void)showCloseButton;
- (void)hideCloseButton;
- (void)updateIsShowCloseBtn:(BOOL)arg1;
- (void)attachContentViewToCustomView:(id)arg1;
- (void)deAttachContentViewFromCustomView:(id)arg1;
- (id)getCustomContentView;
- (id)getPIPStartParam;
- (void)attachContentViewToContainer:(id)arg1;
- (void)deAttachContentView;
- (void)onLiveTask:(id)arg1 minimizeWindowDidClosed:(BOOL)arg2 pipMode:(BOOL)arg3;
- (void)onLiveViewControllerDidAppear:(id)arg1;
- (void)onLiveViewControllerWillDisappear:(id)arg1;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onLiveTaskMinimizedWindowDismiss:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (BOOL)checkNeedAutoStopPIPForEnterForeground;
- (BOOL)checkNeedAutoActivePIPForEnterForeground;
- (void)autoHandlePIPForEnterForeground;
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
- (BOOL)isMinimizeWindowCurrShowPauseBtn;
- (BOOL)isOpeningLivePIPMinimizeWindow;
- (BOOL)checkMinimizeWindowModeUnvalid;
- (BOOL)needOpenLivePIP;
- (BOOL)openTestMode;
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
- (id)attachedContentView;
- (void)setAttachedContentView:(id)arg1;
- (BOOL)isShowCloseBtn;
- (void)setIsShowCloseBtn:(BOOL)arg1;
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
- (id)testView;
- (void)setTestView:(id)arg1;
- (unsigned long long)currentPIPStartScene;
- (void)setCurrentPIPStartScene:(unsigned long long)arg1;
- (BOOL)isSystemPIPStarted;
- (void)setIsSystemPIPStarted:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end

