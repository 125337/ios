@interface WCFinderMinimizeMgr : MMUserService <WCFinderFeedListTransitionHelperDelegate, IMinimizeTaskDelegateInterface, WCFinderMinimizeTransitioningDelegate, WCFinderMinimizeFloatingViewDelegate, WCFinderFeedListTransitionHelperDelegate, IMMFontMgrExt, IMMLanguageMgrExt, MMLimitedModeExt, MinimizeTaskContainerInfoDelegate, MMMusicMVMinimizationExt, ISysCallCheckExt, WCFinderMinimizePlayCtrlPlayNotifyExtDelegate, WCFinderZoomAnimatorBehavior, WCFinderFeedListTransitionHelperExt, MMServiceProtocol>
{
    BOOL _isPresentingPage; // +0x8
    BOOL _limitModeOn; // +0x9
    MiniAudioTaskContentView * _taskContentView; // +0x10
    WCFinderMinimizeFloatingView * _minimizeFloatingView; // +0x18
    WCFinderMinimizeLogic * _currentLogic; // +0x20
    NSHashTable * _pendingTransactions; // +0x28
    WCFinderTransaction * _currentMinimizeActionTransaction; // +0x30
    NSString * _currentMinimizeCoverUrl; // +0x38
    UIImage * _currentMinimizeCoverSnap; // +0x40
    NSDictionary * _tmpReportUDFKV; // +0x48
    WCFinderMinimizeSilenceMonitor * _silenceMonitor; // +0x50
}
+ (BOOL)pausePlay;
+ (BOOL)resumePlay;
+ (void)removeAllMinimize:(id)arg1;
+ (CGRect)expandFloatingViewRectForFeedId:(id)arg1 image:(id)arg2 containerView:(id)arg3;
+ (CGRect)expandFloatingViewRectForFeedId:(id)arg1 imageSize:(CGSize)arg2 containerView:(id)arg3;
- (BOOL)shouldShowMinimizeQuickSwapeEntranceForVC:(id)arg1 userInfo:(id)arg2;
- (void)onTransitionHelperWillClousureFromVC:(id)arg1 toVC:(id)arg2 userInfo:(id)arg3;
- (void)onTransitionHelperCancelClousureForVC:(id)arg1 userInfo:(id)arg2;
- (void)onTransitionHelperDoClosureForVC:(id)arg1 userInfo:(id)arg2;
- (void)onTransitionTriggerMininize:(id)arg1 userInfo:(id)arg2 giveUpClose:(BOOL *)arg3;
- (void)onTransitionHelperWillExpandFromVC:(id)arg1 toVC:(id)arg2 userInfo:(id)arg3;
- (BOOL)shouldGestureClosureAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldTransitionProvider:(id)arg1 requestFailedToOther:(id)arg2;
- (BOOL)hasCustomAnimationFromVC:(id)arg1 toVC:(id)arg2 type:(long long)arg3 userInfo:(id)arg4;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)init;
- (void)floatingClicked;
- (BOOL)supportFloating;
- (BOOL)enableVideoFloat;
- (id)floatingView;
- (id)currentReportUDFKV;
- (void)updatePageInfo:(id)arg1 forLogic:(id)arg2;
- (void)updatePageInfoFromOldLogic:(id)arg1;
- (BOOL)updateDisplayFloatingViewWithContentVM:(id)arg1;
- (BOOL)displayFloatingViewForLogic:(id)arg1 autoPlay:(int)arg2;
- (BOOL)resolveExternalConflicts:(BOOL)arg1 ignorePhoneCalling:(BOOL)arg2 outMsg:(id *)arg3;
- (id)logicForVC:(id)arg1 delegate:(id)arg2 bizKey:(id)arg3;
- (BOOL)isFinderMinimizingForKey:(id)arg1;
- (BOOL)isMinimizePresentVC:(id)arg1;
- (BOOL)isPageMinimized:(id)arg1;
- (BOOL)isMinimizingPage;
- (BOOL)hasMinimizePlaying;
- (BOOL)existsMinimize;
- (BOOL)existsVideoPlayViewMinimize;
- (void)closeMinimize:(BOOL)arg1 reason:(id)arg2;
- (id)dataFromVC:(id)arg1 key:(id)arg2;
- (id)getCurrentMinimizeTaskFloatingView;
- (void)floatingViewOnClickCloseButton:(id)arg1 restoreView:(id)arg2;
- (void)floatingViewDidClickMiniWindow:(id)arg1 restoreView:(id)arg2;
- (void)floatingViewSizeDidChanged:(id)arg1;
- (void)onFloatingViewPlayStateChanged:(BOOL)arg1;
- (void)expandMinimizeTaskView;
- (id)zoomAnimator:(id)arg1 chooseWithOther:(id /* block */)arg2;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (id)createTaskContentViewWithFrame:(CGRect)arg1 isClosure:(BOOL)arg2;
- (id)genNewImageViewWithView:(id)arg1;
- (BOOL)zoomAnimatorUseTranSnapViewWithSnapAgain;
- (void)onAnimatorAnimationWillStart:(id)arg1;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (void)minimizePage:(id)arg1;
- (void)minimizePageWithoutQuit:(id)arg1;
- (void)minimizeInnerPage:(id)arg1;
- (void)minimizeUndisplayPage:(id)arg1;
- (id)willMinimizePage:(id)arg1;
- (id)willMinimizePage:(id)arg1 newMinimize:(BOOL)arg2 requestStop:(BOOL)arg3 reportEid:(id)arg4 createType:(id)arg5;
- (void)cancelOldMinimizeTransition:(id)arg1;
- (BOOL)_hiddenMiniminiFloatingViewWhenEnterPage:(id)arg1 restore:(BOOL)arg2;
- (id)hiddenCurrentMinimizeWhenEnterPage:(id)arg1;
- (void)didEndMinimizeTransition;
- (void)restorePlayerToVC:(id)arg1;
- (id)minimizeDelegateFromVC:(id)arg1;
- (id)bizKeyForPage:(id)arg1;
- (void)ensureBckItemAction:(id)arg1 newNav:(id)arg2;
- (void)onRecoverTaskData:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (BOOL)isMinimizeTaskPlaying:(id)arg1;
- (void)minimizeWindowWillShow:(BOOL)arg1;
- (void)minimizeWindowWillHide:(BOOL)arg1;
- (void)onMMMusicMVMinimizationMgrWillAddMinimizeTask;
- (void)removeMinimizeByOther:(id)arg1;
- (void)onLimitedModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)_onLimitModeChanged;
- (BOOL)forbidenForLimitMode;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)BeginInterruption;
- (void)EndInterruption;
- (void)onMinimizePlayPauseByInterrupt;
- (void)onMinimizePlayStartPlayReport;
- (void)onMinimizePlayStopPlayReport;
- (void)onMinimizePlayPlayByResume;
- (void)onMinimizePlayStateChanged:(id)arg1;
- (void)updateMinimizeFloatContent:(id)arg1;
- (id)minimizePageInfoKey;
- (BOOL)fetchGlobalResumePlayForFeed:(id)arg1 playPosition:(double *)arg2 forView:(id)arg3;
- (void)onMinimizeablePageDidAppear:(id)arg1;
- (BOOL)couldReminimizeForUserInfo:(id)arg1;
- (id)createAnimation:(BOOL)arg1 forVC:(id)arg2 alwaysReturn:(BOOL)arg3;
- (void)manualNotifyVCExpand:(id)arg1;
- (void)onCloseCurrentMinimize;
- (BOOL)shouldSilencePlayOtherFeed:(id)arg1 target:(id)arg2 wakeupAction:(SEL)arg3 monitor:(id *)arg4;
- (id)taskContentView;
- (void)setTaskContentView:(id)arg1;
- (id)minimizeFloatingView;
- (void)setMinimizeFloatingView:(id)arg1;
- (id)currentLogic;
- (void)setCurrentLogic:(id)arg1;
- (id)pendingTransactions;
- (void)setPendingTransactions:(id)arg1;
- (id)currentMinimizeActionTransaction;
- (void)setCurrentMinimizeActionTransaction:(id)arg1;
- (id)currentMinimizeCoverUrl;
- (void)setCurrentMinimizeCoverUrl:(id)arg1;
- (id)currentMinimizeCoverSnap;
- (void)setCurrentMinimizeCoverSnap:(id)arg1;
- (BOOL)isPresentingPage;
- (void)setIsPresentingPage:(BOOL)arg1;
- (BOOL)limitModeOn;
- (void)setLimitModeOn:(BOOL)arg1;
- (id)tmpReportUDFKV;
- (void)setTmpReportUDFKV:(id)arg1;
- (id)silenceMonitor;
- (void)setSilenceMonitor:(id)arg1;
- (void).cxx_destruct;
@end

