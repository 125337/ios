@interface MMFinderLivePIPCustomHandleLogic : WCPIPCustomHandleLogic <WCLoopMetricsCollectorDelegate, MMLiveViewExt, MMLiveTaskMgrExt, MMLiveViewDirtyNotifyExt, MMSceneDelegateExt, MMFinderLivePIPCustomHandleExt, MMFinderLiveReplayViewExt>
{
    BOOL _isLiveVCAppear; // +0x8
    BOOL _isLivePlayerNeedStopRenderPixel; // +0x9
    BOOL _isInBackground; // +0xa
    BOOL _isResignActive; // +0xb
    BOOL _is; // +0xc
    BOOL _isPauseLiveForClosePIP; // +0xd
    BOOL _isPauseLiveForPausePIP; // +0xe
    BOOL _isHideLiveMinimizeView; // +0xf
    BOOL _needAutoHandlePIPForEnterForeground; // +0x10
    BOOL _isAutoStopPIP; // +0x11
    BOOL _isSystemPIPStarted; // +0x12
    BOOL _unablePIP; // +0x13
    BOOL _isLiveContentUnDisplayed; // +0x14
    BOOL _isAutoPausePlayer; // +0x15
    BOOL _isAutoResumePlayer; // +0x16
    BOOL _needTemporaryIgnoreMainVideoViewFrameChanged; // +0x17
    BOOL _tryShowSwitchGuide; // +0x18
    BOOL _hasRenderedLiveFramePixel; // +0x19
    int _sourceIndex; // +0x1c
    int _lastLogSourceIndex; // +0x20
    int _sourceUpdateIndex; // +0x24
    int _lastLogSourceUpdateIndex; // +0x28
    int _unvalidSourceCnt; // +0x2c
    MMFinderLiveTaskId * _taskId; // +0x30
    id /* block */ _switchGuideTryShowCallback; // +0x38
    unsigned long long _currentPIPStartScene; // +0x40
    NSObject<OS_dispatch_semaphore> * _refreshLock; // +0x48
    MMFinderLivePictureInPictureReporter * _reporter; // +0x50
    WCPIPTextStateDescription * _liveStateDescription; // +0x58
    WCLoopMetricsCollector * _sourceRefreshMetricsCollector; // +0x60
    WCLoopMetricsCollector * _pipRenderMetricsCollector; // +0x68
    MMFinderLivePIPPerformanceReportObj * _performanceReportObj; // +0x70
    MMFinderLivePIPRenderSpaceObject * _liveSpaceObj; // +0x78
    MMFinderLivePIPRenderSpaceObject * _operationSpaceObj; // +0x80
    MMFinderLivePIPRenderSpaceObject * _floatingSpaceObj; // +0x88
    NSMutableDictionary * _renderObjDict; // +0x90
    NSObject<OS_dispatch_semaphore> * _renderIdLock; // +0x98
    NSObject<OS_dispatch_semaphore> * _renderObjLock; // +0xa0
    double _lastRefreshTimeInterval; // +0xa8
    NSMutableArray * _refreshOverTimeList; // +0xb0
    NSMutableArray * _updateOverTimeList; // +0xb8
    double _refreshOverTimeLimitValue; // +0xc0
    double _updateOverTimeLimitValue; // +0xc8
    unsigned long long _logCnt; // +0xd0
    unsigned long long _sourceUpdateLogCnt; // +0xd8
    unsigned long long _lastRefreshSourceTime; // +0xe0
    CGSize _videoSize; // +0xe8
}
+ (id)getFillImageForVideoFrame:(id)arg1 renderSize:(CGSize)arg2;
+ (CGRect)getDisplayRectWithNormalizedFrame:(CGRect)arg1 renderSize:(CGSize)arg2;
- (void)initRenderDefaultSource;
- (BOOL)innerInsertRenderId:(id)arg1 belowAnyRenderObjWithBusinessNames:(id)arg2 inSpace:(long long)arg3;
- (BOOL)innerInsertRenderId:(id)arg1 aboveAnyRenderObjWithBusinessNames:(id)arg2 inSpace:(long long)arg3;
- (BOOL)innerInsertRenderId:(id)arg1 belowRenderObjWithBusinessIds:(id)arg2 inSpace:(long long)arg3;
- (BOOL)innerInsertRenderId:(id)arg1 aboveRenderObjWithBusinessIds:(id)arg2 inSpace:(long long)arg3;
- (BOOL)innerInsertStaticFirstRenderId:(id)arg1 inSpace:(long long)arg2;
- (BOOL)innerAddStaticLastRenderId:(id)arg1 inSpace:(long long)arg2;
- (BOOL)innerInsertRenderId:(id)arg1 inSpace:(long long)arg2;
- (BOOL)innerAddRenderId:(id)arg1 inSpace:(long long)arg2;
- (BOOL)innerRemoveRenderId:(id)arg1;
- (long long)innerCheckIsContainRenderId:(id)arg1;
- (BOOL)innerClearAllRenderIds;
- (id)innerGetTempRenderIdList;
- (id)innerGetRenderIdListDescription;
- (BOOL)innerClearUnValidRenderIdList;
- (BOOL)innerUpdateRenderObject:(id)arg1;
- (BOOL)innerRemoveRenderObject:(id)arg1;
- (BOOL)innerClearAllRenderObjects;
- (BOOL)innerClearRenderObjects:(long long)arg1;
- (BOOL)innerClearUnValidRenderObjects:(long long)arg1;
- (id)innerGetTempRenderObjDict;
- (id)innerGetTempRenderObjDictWithType:(long long)arg1;
- (void)onRenderObjWillUpdated:(id)arg1;
- (void)onRenderObjChanged:(long long)arg1;
- (id)getRenderSpaceObj:(long long)arg1;
- (void)initPerformanceDefaultSource;
- (void)createMetricsCollectors;
- (void)reportPerformance;
- (void)checkVideoFrameRefreshOverTime;
- (void)checkVideoFrameUpdateToCacheOverTime;
- (void)startLogForSourcePixelBuffer;
- (void)contineLogForSourcePixelBuffer;
- (void)stopLogForSourcePixelBuffer;
- (void)logForSourcePixelBuffer;
- (void)increaseSourceIndex;
- (void)increaseSourceUpdateIndex;
- (void)increateUnvalidSourceCnt;
- (double)getRefreshOverTimeLimitValue;
- (double)getUpdateOverTimeLimitValue;
- (void)onBeginRefreshSourcePixel;
- (void)onEndRefreshSourcePixel;
- (void)onBeginRenderPixel;
- (void)onEndRenderPixel;
- (void)onBeginNewRenderBuffer;
- (void)onEndNewRenderBuffer:(CGSize)arg1;
- (void)onBeginAttachWidgets;
- (void)onEndAttachWidgets:(unsigned long long)arg1;
- (void)onBeginRenderBuffer;
- (void)onEndRenderBuffer:(CGSize)arg1;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)createPerformanceReportObj;
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultSource;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)initNotifications;
- (void)createReporter;
- (BOOL)enableStartPictureInPicture;
- (CGSize)getRenderSize;
- (CGSize)getCurrRenderSize;
- (CGSize)getFloorNormalizedSize:(CGSize)arg1;
- (CGSize)getCurrentVideoFrameSize;
- (BOOL)isLiveCurrentCDNPlay;
- (id)getVideoSrcId;
- (id)getCurrentBusinessId;
- (void)startHandle;
- (void)stopHandle;
- (void)resetTagsForStartHandle;
- (CGRect)getRenderViewFrame;
- (CGRect)getHandledMainVideoViewFrameForMultiScene:(CGRect)arg1;
- (void)clearAttachSources;
- (void)handlePixelBufferRefresh:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)invokeRestoreCompletion:(id /* block */)arg1 restore:(BOOL)arg2;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)displayLiveContent;
- (void)unDisplayLiveContent;
- (void)onPlayerTimeControlStatusChanged:(long long)arg1;
- (void)delayReportForPausePIP;
- (void)delayReportForResumePIP;
- (BOOL)isRenderObjUnValid:(id)arg1;
- (BOOL)isVideoFrameUnValid:(id)arg1;
- (BOOL)isAttachWidgetUnValid:(id)arg1;
- (BOOL)isRenderIdUnValid:(id)arg1;
- (void)onStartCustomPixelTransfer;
- (void)onStopCustomPixelTransfer;
- (void)checkNeedResumeLiveAndStartTracingForPIP;
- (void)onCurrentActivePIPTaskBeRemoved;
- (void)refresh:(id)arg1 sourceId:(id)arg2;
- (void)clearVideoFrames;
- (id)currentRenderObjDict;
- (id)currentRenderIdList;
- (void)tagPixelBufferRenderCompleted;
- (void)tagAttachWidgetRenderCompleted;
- (void)checkNeedAutoPausePlayer;
- (void)checkNeedAutoResumePlayer;
- (BOOL)needCollectSrcPixelBuffer;
- (BOOL)needSaveSrcIfPossible;
- (void)tagTemporaryIgnoreMainVideoViewFrameChanged;
- (void)unTagTemporaryIgnoreMainVideoViewFrameChanged;
- (void)clearTemporaryIgnoreMainVideoViewFrameChangeTag;
- (id)getLiveStateTextDescription;
- (void)showPIPSwitchGuideIfNeed;
- (void)onPIPAuthorityOccupied;
- (void)onPIPAuthorityAchieved;
- (BOOL)checkCurrHasPIPAuthority;
- (id)finderLiveViewController;
- (id)finderLiveTask;
- (id)replayLiveTask;
- (CGSize)videoSize;
- (void)setIsLivePlayerNeedStopRenderPixel:(BOOL)arg1;
- (void)updateVideoSize:(CGSize)arg1 cdn:(BOOL)arg2;
- (void)synchronizeLivePicState;
- (BOOL)isLiveCurrentPlaying;
- (BOOL)isMinimizeWindowCurrShowPauseBtn;
- (void)handleForAttachWidgetsInLiveView:(id)arg1;
- (void)handleForAttachWidgetsInOperationView:(id)arg1;
- (void)handleForAttachWidgetsInReplayView:(id)arg1;
- (BOOL)isOpeningLivePIPMinimizeWindow;
- (BOOL)checkMinimizeWindowModeUnvalid;
- (BOOL)needOpenLivePIP;
- (BOOL)isReplayLive;
- (id)currentReplayController;
- (void)onLiveView:(id)arg1 videoViewAppearanceChanged:(BOOL)arg2;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (void)onLiveViewConnectMicViewFrameChanged:(id)arg1 newConnectMicViewFrame:(CGRect)arg2;
- (void)updateRenderViewFrame;
- (void)onLiveView:(id)arg1 cdnPlayerViewAppearanceChanged:(BOOL)arg2;
- (void)onLiveView:(id)arg1 enableShowLiveRoomCoverImageViewChanged:(BOOL)arg2;
- (void)onLiveViewAdvertisementVideoPlayFinished:(id)arg1;
- (void)destroy;
- (void)onLiveReplayViewPlayerFrameChanged:(id)arg1 liveTaskId:(id)arg2 newPlayerFrame:(CGRect)arg3;
- (void)onFinderLivePIPStateTextRefreshWithLiveId:(unsigned long long)arg1;
- (void)onLiveTask:(id)arg1 cdnPlayRemoteVideoSizeChanged:(CGSize)arg2;
- (void)onLiveTask:(id)arg1 trtcMainRemoteVideoSizeChanged:(CGSize)arg2;
- (void)onLiveTask:(id)arg1 trtcLocalVideoSizeChanged:(CGSize)arg2;
- (void)onLiveTask:(id)arg1 replayRemoteVideoSizeChanged:(CGSize)arg2;
- (void)checkAndUpdateRenderSizeForVideoSizeChanged:(id)arg1;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 videoFPSChanged:(unsigned int)arg2;
- (void)onLiveTask:(id)arg1 appSceneChanged:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 minimizeWindowDidClosed:(BOOL)arg2 pipMode:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 isAudienceLocalAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3 showTip:(BOOL)arg4;
- (void)onLiveViewControllerWillAppear:(id)arg1;
- (void)onLiveViewControllerDidAppear:(id)arg1;
- (void)onLiveViewControllerWillDisappear:(id)arg1;
- (void)onLiveViewControllerDidBePopedOrDismissed:(id)arg1;
- (void)onLiveTask:(id)arg1 isAssistantValueChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 trtcHasVideoSrcChanged:(BOOL)arg2;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onLiveTaskMinimizedWindowDismiss:(id)arg1;
- (void)onLiveTask:(id)arg1 livePlayStatusForAudienceChanged:(long long)arg2;
- (void)onMainSceneSizeChangedFrom:(CGSize)arg1 to:(CGSize)arg2;
- (void)onLiveViewDirtyNotify:(id)arg1;
- (void)handleForAudioMicFromOtherAudienceUserViewRefresh:(id)arg1;
- (void)handleForAudioModeCoverImageRefresh:(id)arg1;
- (void)handleForAudioMicFromAudienceUserOperationViewRefresh:(id)arg1;
- (void)handleForAudioMicFromOtherAnchorCoverImageRefresh:(id)arg1;
- (void)handleForAudioMicFromOtherAnchorVideoBackgroundRefresh:(id)arg1;
- (void)handleForAnchorBlurBackgroundViewRefresh:(id)arg1;
- (void)handleForTrialTimeOutMaskViewRefresh:(id)arg1;
- (void)handleForLiveStateTextRefreshWithLiveId:(unsigned long long)arg1;
- (void)handleForCDNContainerViewRefresh:(id)arg1;
- (void)handleForAdvertisementPlayerViewRefresh:(id)arg1;
- (void)handleForAudioModeBackPlayerViewRefresh:(id)arg1;
- (void)handleForTRTCContainerViewRefresh:(id)arg1;
- (void)handleForHLSPlayerViewRefresh:(id)arg1;
- (void)handleForReplayStopgapViewRefresh:(id)arg1;
- (void)handleForPkAtmosphereBackgroundViewRefresh:(id)arg1;
- (BOOL)hasWidgetImageForAttach;
- (void)updateRenderSizeFitMode;
- (void)startLoading;
- (void)stopLoading;
- (CGRect)getAbsoluteRenderViewFrame;
- (CGRect)getLocalAudioModeAbsoluteRenderViewFrame;
- (CGRect)getAbsoluteMainVideoViewFrame;
- (CGRect)getNormalizedMainVideoViewFrame;
- (double)getVideoContainerWHPercent;
- (CGSize)getAbsoluteWindowSizeForCurrUIOrientation;
- (CGRect)getAbsoluteVideoContainerViewFrame;
- (CGRect)getAbsoluteTrtcConnectMicViewFrame;
- (void)willEnterForeground:(id)arg1;
- (void)clearTags;
- (void)didEnterBackground:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (BOOL)checkNeedAutoRestorePIPForEnterForeground;
- (void)autoHandlePIPForEnterForeground;
- (void)autoRestartPIPForEnterForeground;
- (void)cancelHandlePIPInForeground;
- (BOOL)checkNeedAutoStopPIPForEnterForeground;
- (BOOL)checkNeedAutoRestartPIPForEnterForeground;
- (BOOL)checkNeedStartPIPTracking;
- (void)hideLiveMinimizeView;
- (void)showLiveMinimizeView;
- (void)notifyWidgetsEnterForeground;
- (void)notifyWidgetsEnterBackground;
- (void)notifyWidgetsRootViewDidAppear;
- (void)notifyWidgetsRootViewWillDisappear;
- (void)handleVideoFrame:(id)arg1;
- (void)updateRenderObject:(id)arg1;
- (void)clearRenderObjects:(long long)arg1;
- (void)checkRenderObjectsValid:(long long)arg1;
- (void)checkRenderIdsValid;
- (BOOL)insertRenderId:(id)arg1 belowAnyRenderObjWithBusinessNames:(id)arg2 inSpace:(long long)arg3;
- (BOOL)insertRenderId:(id)arg1 aboveAnyRenderObjWithBusinessNames:(id)arg2 inSpace:(long long)arg3;
- (BOOL)insertRenderId:(id)arg1 belowRenderObjWithBusinessIds:(id)arg2 inSpace:(long long)arg3;
- (BOOL)insertRenderId:(id)arg1 aboveRenderObjWithBusinessIds:(id)arg2 inSpace:(long long)arg3;
- (BOOL)insertStaticFirstRenderId:(id)arg1 inSpace:(long long)arg2;
- (BOOL)addStaticLastRenderId:(id)arg1 inSpace:(long long)arg2;
- (BOOL)insertRenderId:(id)arg1 inSpace:(long long)arg2;
- (BOOL)addRenderId:(id)arg1 inSpace:(long long)arg2;
- (BOOL)removeRenderId:(id)arg1;
- (BOOL)clearAllRenderIds;
- (long long)isContainRenderId:(id)arg1;
- (BOOL)isLiveVCAppear;
- (void)setIsLiveVCAppear:(BOOL)arg1;
- (BOOL)isLivePlayerNeedStopRenderPixel;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id /* block */)switchGuideTryShowCallback;
- (void)setSwitchGuideTryShowCallback:(id /* block */)arg1;
- (unsigned long long)currentPIPStartScene;
- (void)setCurrentPIPStartScene:(unsigned long long)arg1;
- (void)setVideoSize:(CGSize)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)isResignActive;
- (void)setIsResignActive:(BOOL)arg1;
- (BOOL)is;
- (void)setIs:(BOOL)arg1;
- (BOOL)isPauseLiveForClosePIP;
- (void)setIsPauseLiveForClosePIP:(BOOL)arg1;
- (BOOL)isPauseLiveForPausePIP;
- (void)setIsPauseLiveForPausePIP:(BOOL)arg1;
- (BOOL)isHideLiveMinimizeView;
- (void)setIsHideLiveMinimizeView:(BOOL)arg1;
- (BOOL)needAutoHandlePIPForEnterForeground;
- (void)setNeedAutoHandlePIPForEnterForeground:(BOOL)arg1;
- (BOOL)isAutoStopPIP;
- (void)setIsAutoStopPIP:(BOOL)arg1;
- (BOOL)isSystemPIPStarted;
- (void)setIsSystemPIPStarted:(BOOL)arg1;
- (BOOL)unablePIP;
- (void)setUnablePIP:(BOOL)arg1;
- (BOOL)isLiveContentUnDisplayed;
- (void)setIsLiveContentUnDisplayed:(BOOL)arg1;
- (id)refreshLock;
- (void)setRefreshLock:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)liveStateDescription;
- (void)setLiveStateDescription:(id)arg1;
- (BOOL)isAutoPausePlayer;
- (void)setIsAutoPausePlayer:(BOOL)arg1;
- (BOOL)isAutoResumePlayer;
- (void)setIsAutoResumePlayer:(BOOL)arg1;
- (BOOL)needTemporaryIgnoreMainVideoViewFrameChanged;
- (void)setNeedTemporaryIgnoreMainVideoViewFrameChanged:(BOOL)arg1;
- (BOOL)tryShowSwitchGuide;
- (void)setTryShowSwitchGuide:(BOOL)arg1;
- (id)sourceRefreshMetricsCollector;
- (void)setSourceRefreshMetricsCollector:(id)arg1;
- (id)pipRenderMetricsCollector;
- (void)setPipRenderMetricsCollector:(id)arg1;
- (id)performanceReportObj;
- (void)setPerformanceReportObj:(id)arg1;
- (BOOL)hasRenderedLiveFramePixel;
- (void)setHasRenderedLiveFramePixel:(BOOL)arg1;
- (id)liveSpaceObj;
- (void)setLiveSpaceObj:(id)arg1;
- (id)operationSpaceObj;
- (void)setOperationSpaceObj:(id)arg1;
- (id)floatingSpaceObj;
- (void)setFloatingSpaceObj:(id)arg1;
- (id)renderObjDict;
- (void)setRenderObjDict:(id)arg1;
- (id)renderIdLock;
- (void)setRenderIdLock:(id)arg1;
- (id)renderObjLock;
- (void)setRenderObjLock:(id)arg1;
- (double)lastRefreshTimeInterval;
- (void)setLastRefreshTimeInterval:(double)arg1;
- (id)refreshOverTimeList;
- (void)setRefreshOverTimeList:(id)arg1;
- (id)updateOverTimeList;
- (void)setUpdateOverTimeList:(id)arg1;
- (double)refreshOverTimeLimitValue;
- (void)setRefreshOverTimeLimitValue:(double)arg1;
- (double)updateOverTimeLimitValue;
- (void)setUpdateOverTimeLimitValue:(double)arg1;
- (int)sourceIndex;
- (void)setSourceIndex:(int)arg1;
- (int)lastLogSourceIndex;
- (void)setLastLogSourceIndex:(int)arg1;
- (unsigned long long)logCnt;
- (void)setLogCnt:(unsigned long long)arg1;
- (int)sourceUpdateIndex;
- (void)setSourceUpdateIndex:(int)arg1;
- (int)lastLogSourceUpdateIndex;
- (void)setLastLogSourceUpdateIndex:(int)arg1;
- (unsigned long long)sourceUpdateLogCnt;
- (void)setSourceUpdateLogCnt:(unsigned long long)arg1;
- (int)unvalidSourceCnt;
- (void)setUnvalidSourceCnt:(int)arg1;
- (unsigned long long)lastRefreshSourceTime;
- (void)setLastRefreshSourceTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
