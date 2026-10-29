@interface WAGameDirectPlayBoxView : UIView <UIScrollViewDelegate, WAGameDirectPlayBoxSharedGameListMgrDelegate, WAGameDirectPlayBoxMessageHost>
{
    BOOL _didSetup; // +0x8
    BOOL _frontendAudioPaused; // +0x9
    BOOL _isDragging; // +0xa
    BOOL _dragEagerLoadTriggered; // +0xb
    BOOL _deallocGateWaiting; // +0xc
    BOOL _boxDeallocating; // +0xd
    BOOL _didTeardown; // +0xe
    BOOL _isSelfHealingCurrentPage; // +0xf
    unsigned int _viewId; // +0x10
    NSString * _userData; // +0x18
    WAGameViewController * _ownerGameViewController; // +0x20
    WAGameDirectPlayBoxMaskPlaceholderConfig * _maskPlaceholderConfig; // +0x28
    UIScrollView * _scrollView; // +0x30
    NSMutableArray * _pages; // +0x38
    long long _mode; // +0x40
    NSArray * _displayGames; // +0x48
    long long _currentIndex; // +0x50
    long long _lastSettledIndex; // +0x58
    NSString * _task2AppId; // +0x60
    long long _projectedPageIndex; // +0x68
    long long _projectSeq; // +0x70
    UIView * _projectedLiveView; // +0x78
    UIView * _savedLiveSuperview; // +0x80
    long long _savedLiveSubviewIndex; // +0x88
    UIView * _task2EmbedHost; // +0x90
    NSString * _preloadAppId; // +0x98
    long long _preloadPageIndex; // +0xa0
    long long _preloadState; // +0xa8
    long long _preloadSeq; // +0xb0
    UIView * _preloadEmbedHost; // +0xb8
    long long _preloadProjectedPageIndex; // +0xc0
    UIView * _preloadProjectedLiveView; // +0xc8
    UIView * _preloadSavedLiveSuperview; // +0xd0
    long long _preloadSavedLiveSubviewIndex; // +0xd8
    NSMutableArray * _pendingMessages; // +0xe0
    long long _idleCleanupSeq; // +0xe8
    NSString * _ephemeralPinAppId; // +0xf0
    NSString * _nativeMaskSuppressedAppId; // +0xf8
    double _dragBeginOffsetY; // +0x100
    long long _dragBeginIndex; // +0x108
    NSMutableSet * _maskReadyAppIds; // +0x110
    NSMutableSet * _firstFrameAppIds; // +0x118
    NSMutableDictionary * _launchStartTimesBySeq; // +0x120
    NSMapTable * _deallocPendingTasks; // +0x128
    NSMapTable * _deallocPendingRuntimes; // +0x130
    NSMutableDictionary * _deallocPendingStartTime; // +0x138
    NSMutableDictionary * _deallocGateTimeoutLogged; // +0x140
    id /* block */ _pendingOpenAction; // +0x148
    long long _pendingOpenPageIndex; // +0x150
    long long _deallocGatePollCount; // +0x158
    NSString * _hostAppIdSnapshot; // +0x160
    NSString * _preloadDeferredAppIdByMemory; // +0x168
    NSMutableSet * _frontendMutedAppIds; // +0x170
    CGRect _savedLiveFrame; // +0x178
    CGRect _preloadSavedLiveFrame; // +0x198
    CGAffineTransform _savedLiveTransform; // +0x1b8
    CGAffineTransform _preloadSavedLiveTransform; // +0x1e8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)applyMode:(long long)arg1;
- (void)onProjectionTaskFirstFrameNotification:(id)arg1;
- (void)layoutSubviews;
- (void)layoutPages;
- (BOOL)isPageContentActuallyReadyAtIndex:(long long)arg1;
- (void)updateViewportContentForCurrentOffset;
- (void)setup;
- (void)teardown;
- (void)teardownWithReason:(id)arg1;
- (id)hostAppId;
- (void)computeDisplayGames;
- (void)rebuildPages;
- (void)realignPreloadAfterListChange;
- (id)aliveGameTaskAppIds;
- (BOOL)isCurrentGameReady;
- (BOOL)canOpenNewGameTaskForAppId:(id)arg1 reason:(id)arg2;
- (void)auditAndReclaimOrphanGameTasksWithReason:(id)arg1;
- (void)auditAndReclaimStaleHostSubviewsWithReason:(id)arg1;
- (void)recoverCurrentPageAfterLiveViewVanishedWithReason:(id)arg1;
- (void)trackDeallocPendingForAppId:(id)arg1;
- (id)jitRuntimeForTask:(id)arg1;
- (BOOL)wa_canStartPreloadByMemoryForResume:(BOOL)arg1 outAvailableMB:(long long *)arg2;
- (void)wa_retryPreloadIfDeferredByMemory;
- (void)onAppWillEnterForegroundForTaskReconcile;
- (void)onDidReceiveMemoryWarningForPreload;
- (void)releaseOffscreenImageResourcesForMemoryWarning;
- (id)deallocPendingAppIds;
- (BOOL)canOpenNewGameNowWithReason:(id *)arg1;
- (void)runOpenActionWhenAllDeallocated:(id /* block */)arg1 pageIndex:(long long)arg2 reason:(id)arg3;
- (void)startDeallocGatePollingIfNeeded;
- (BOOL)isTaskAliveForAppId:(id)arg1;
- (id)gameContentViewForAppId:(id)arg1;
- (id)projectionRootViewForAppId:(id)arg1;
- (void)switchTask2ToIndex:(long long)arg1;
- (void)switchTask2ToIndex:(long long)arg1 preservePreload:(BOOL)arg2;
- (void)scheduleProjectTask2Attempt:(long long)arg1 seq:(long long)arg2 targetIndex:(long long)arg3 appId:(id)arg4;
- (void)projectTask2ToPageAtIndex:(long long)arg1;
- (void)onProjectionTaskFirstFrameReady:(id)arg1;
- (void)refreshDirectPlayBoxAudioWithReason:(id)arg1;
- (void)applyBoxAudioMuted:(BOOL)arg1 forTask:(id)arg2 reason:(id)arg3;
- (void)setAudioMuted:(BOOL)arg1 forAppId:(id)arg2 reason:(id)arg3;
- (BOOL)wa_isBoxInForeground;
- (void)setFrontendAudioPaused:(BOOL)arg1;
- (void)handleUpdateAction:(id)arg1 appId:(id)arg2;
- (long long)updateTargetForAppId:(id)arg1;
- (id)nameForUpdateTarget:(long long)arg1;
- (long long)pageIndexForAppId:(id)arg1;
- (BOOL)isMaskReadyForAppId:(id)arg1;
- (BOOL)isFirstFrameReadyForAppId:(id)arg1;
- (BOOL)canRevealPageContentForAppId:(id)arg1;
- (void)markLaunchStartForSeq:(long long)arg1 appId:(id)arg2 index:(long long)arg3;
- (double)takeLaunchElapsedForSeq:(long long)arg1;
- (BOOL)markFirstFrameReadyForAppId:(id)arg1 reason:(id)arg2 confirmed:(BOOL)arg3;
- (void)clearMaskReadyForAppId:(id)arg1 reason:(id)arg2;
- (void)handleMaskReadyForAppId:(id)arg1 target:(long long)arg2;
- (id)pageAtIndex:(long long)arg1 matchingAppId:(id)arg2 reason:(id)arg3;
- (void)restoreNativeMaskForPageAtIndex:(long long)arg1 reason:(id)arg2;
- (void)applyMaskStateForPageAtIndex:(long long)arg1 appId:(id)arg2 reason:(id)arg3;
- (id)currentTask2GameViewController;
- (void)pauseGameEngineForAppId:(id)arg1;
- (void)resumeGameEngineForAppId:(id)arg1;
- (id)appIdAtCurrentPage;
- (id)pinAnchorAppIdForNewPin;
- (BOOL)isNativeMaskSuppressedForAppId:(id)arg1;
- (void)setNativeMaskSuppressedAppId:(id)arg1 reason:(id)arg2;
- (void)handlePinGameWithAppId:(id)arg1;
- (BOOL)consumeEphemeralPinIfNeededAtSettledIndex:(long long)arg1;
- (void)cleanupEphemeralPinWithReason:(id)arg1;
- (void)handleJumpTeardownWithReason:(id)arg1;
- (id)directPlayBoxOwnerWebViewController;
- (id)directPlayBoxCurrentGameAppId;
- (BOOL)directPlayBoxCurrentGameProjected;
- (id)directPlayBoxPreloadGameAppId;
- (BOOL)directPlayBoxEnqueuePendingMessageType:(id)arg1 data:(id)arg2 extra:(id)arg3;
- (void)onAppDidBecomeActiveForAudio;
- (void)onAppWillResignActiveForAudio;
- (void)didMoveToWindow;
- (void)hideTask2CapsuleWithReason:(id)arg1;
- (void)hideCapsuleForAppId:(id)arg1 reason:(id)arg2;
- (void)restoreLiveProjection;
- (void)closeTask2IfNeeded;
- (BOOL)demoteCurrentToPreloadIfSwipingBackToIndex:(long long)arg1;
- (void)preloadNextGameAfterIndex:(long long)arg1;
- (void)schedulePreloadReadyAttempt:(long long)arg1 seq:(long long)arg2 appId:(id)arg3;
- (void)onPreloadTaskFirstFrameReady:(id)arg1;
- (void)markPreloadReadyAndProject:(id)arg1 seq:(long long)arg2;
- (void)projectPreloadGameToPage:(long long)arg1 appId:(id)arg2;
- (void)restorePreloadProjection;
- (void)teardownPreloadWithReason:(id)arg1;
- (id)gameViewControllerForAppId:(id)arg1;
- (void)promotePreloadToCurrentAtIndex:(long long)arg1;
- (void)adoptLaunchingPreloadAsCurrentAtIndex:(long long)arg1 suppressNativeMask:(BOOL)arg2;
- (BOOL)enqueuePendingMessageType:(id)arg1 data:(id)arg2 extra:(id)arg3;
- (void)flushPendingMessagesForProjectedSeq:(long long)arg1;
- (void)logMemorySnapshotWithReason:(id)arg1;
- (void)scheduleIdleDeepCleanup;
- (void)performIdleDeepCleanup;
- (void)shrinkMaskResourcesToCurrentWindowWithReason:(id)arg1;
- (void)reportLeakSuspectsWithReason:(id)arg1;
- (void)handleSettle;
- (void)reconcileMaskStateForSettledIndex:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)tryEagerLoadDuringDrag;
- (void)sharedGameListMgrDidUpdateGameList:(id)arg1;
- (void)sharedGameListMgr:(id)arg1 didFailWithError:(id)arg2;
- (void)handleWindowChangeForHostExitDetection;
- (void)confirmHostAliveOrTeardown;
- (void)dealloc;
- (unsigned int)viewId;
- (void)setViewId:(unsigned int)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)ownerGameViewController;
- (void)setOwnerGameViewController:(id)arg1;
- (id)maskPlaceholderConfig;
- (void)setMaskPlaceholderConfig:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)pages;
- (void)setPages:(id)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)displayGames;
- (void)setDisplayGames:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (long long)lastSettledIndex;
- (void)setLastSettledIndex:(long long)arg1;
- (BOOL)didSetup;
- (void)setDidSetup:(BOOL)arg1;
- (BOOL)frontendAudioPaused;
- (id)task2AppId;
- (void)setTask2AppId:(id)arg1;
- (long long)projectedPageIndex;
- (void)setProjectedPageIndex:(long long)arg1;
- (long long)projectSeq;
- (void)setProjectSeq:(long long)arg1;
- (id)projectedLiveView;
- (void)setProjectedLiveView:(id)arg1;
- (id)savedLiveSuperview;
- (void)setSavedLiveSuperview:(id)arg1;
- (long long)savedLiveSubviewIndex;
- (void)setSavedLiveSubviewIndex:(long long)arg1;
- (CGRect)savedLiveFrame;
- (void)setSavedLiveFrame:(CGRect)arg1;
- (CGAffineTransform)savedLiveTransform;
- (void)setSavedLiveTransform:(CGAffineTransform)arg1;
- (id)task2EmbedHost;
- (void)setTask2EmbedHost:(id)arg1;
- (id)preloadAppId;
- (void)setPreloadAppId:(id)arg1;
- (long long)preloadPageIndex;
- (void)setPreloadPageIndex:(long long)arg1;
- (long long)preloadState;
- (void)setPreloadState:(long long)arg1;
- (long long)preloadSeq;
- (void)setPreloadSeq:(long long)arg1;
- (id)preloadEmbedHost;
- (void)setPreloadEmbedHost:(id)arg1;
- (long long)preloadProjectedPageIndex;
- (void)setPreloadProjectedPageIndex:(long long)arg1;
- (id)preloadProjectedLiveView;
- (void)setPreloadProjectedLiveView:(id)arg1;
- (id)preloadSavedLiveSuperview;
- (void)setPreloadSavedLiveSuperview:(id)arg1;
- (long long)preloadSavedLiveSubviewIndex;
- (void)setPreloadSavedLiveSubviewIndex:(long long)arg1;
- (CGRect)preloadSavedLiveFrame;
- (void)setPreloadSavedLiveFrame:(CGRect)arg1;
- (CGAffineTransform)preloadSavedLiveTransform;
- (void)setPreloadSavedLiveTransform:(CGAffineTransform)arg1;
- (id)pendingMessages;
- (void)setPendingMessages:(id)arg1;
- (long long)idleCleanupSeq;
- (void)setIdleCleanupSeq:(long long)arg1;
- (id)ephemeralPinAppId;
- (void)setEphemeralPinAppId:(id)arg1;
- (id)nativeMaskSuppressedAppId;
- (void)setNativeMaskSuppressedAppId:(id)arg1;
- (double)dragBeginOffsetY;
- (void)setDragBeginOffsetY:(double)arg1;
- (long long)dragBeginIndex;
- (void)setDragBeginIndex:(long long)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (BOOL)dragEagerLoadTriggered;
- (void)setDragEagerLoadTriggered:(BOOL)arg1;
- (id)maskReadyAppIds;
- (void)setMaskReadyAppIds:(id)arg1;
- (id)firstFrameAppIds;
- (void)setFirstFrameAppIds:(id)arg1;
- (id)launchStartTimesBySeq;
- (void)setLaunchStartTimesBySeq:(id)arg1;
- (id)deallocPendingTasks;
- (void)setDeallocPendingTasks:(id)arg1;
- (id)deallocPendingRuntimes;
- (void)setDeallocPendingRuntimes:(id)arg1;
- (id)deallocPendingStartTime;
- (void)setDeallocPendingStartTime:(id)arg1;
- (id)deallocGateTimeoutLogged;
- (void)setDeallocGateTimeoutLogged:(id)arg1;
- (id /* block */)pendingOpenAction;
- (void)setPendingOpenAction:(id /* block */)arg1;
- (long long)pendingOpenPageIndex;
- (void)setPendingOpenPageIndex:(long long)arg1;
- (BOOL)deallocGateWaiting;
- (void)setDeallocGateWaiting:(BOOL)arg1;
- (long long)deallocGatePollCount;
- (void)setDeallocGatePollCount:(long long)arg1;
- (BOOL)boxDeallocating;
- (void)setBoxDeallocating:(BOOL)arg1;
- (BOOL)didTeardown;
- (void)setDidTeardown:(BOOL)arg1;
- (BOOL)isSelfHealingCurrentPage;
- (void)setIsSelfHealingCurrentPage:(BOOL)arg1;
- (id)hostAppIdSnapshot;
- (void)setHostAppIdSnapshot:(id)arg1;
- (id)preloadDeferredAppIdByMemory;
- (void)setPreloadDeferredAppIdByMemory:(id)arg1;
- (id)frontendMutedAppIds;
- (void)setFrontendMutedAppIds:(id)arg1;
- (void).cxx_destruct;
@end
