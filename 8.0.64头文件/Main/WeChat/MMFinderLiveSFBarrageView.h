@interface MMFinderLiveSFBarrageView : UIView <MMFinderLiveLandscapeBarrageSettingUpdateExt, CdnNotifyDelegate, MMFinderLiveSFBarrageViewModelDelegate, MMFinderLiveOperationViewExt, WCFinderLiveExt, MMLiveCommentDataExt, MMLiveTaskMgrExt, MMLiveViewExt, MMFinderLiveSFBarrageViewExt>
{
    BOOL _isDisappearing; // +0x8
    BOOL _isCurrentHasBarrage; // +0x9
    BOOL _isInBackground; // +0xa
    BOOL _isBarrageEnableDisplay; // +0xb
    BOOL _isCommentDisabled; // +0xc
    BOOL _isHighDevice; // +0xd
    BOOL _cpuAnimationSwitch; // +0xe
    BOOL _faceDetectRenderSwitch; // +0xf
    BOOL _maskDataInterrupt; // +0x10
    BOOL _enableRenderFaceDetectMask; // +0x11
    BOOL _maskDataNoSegmentPersion; // +0x12
    BOOL _maskDataNotNeedFaceDetectHandle; // +0x13
    BOOL _maskDataNotNeedDisplay; // +0x14
    BOOL _cpuAnimationDisable; // +0x15
    UIView * _barrageContainerView; // +0x18
    long long _faceDetectMaskOptions; // +0x20
    NSArray * _barrageTrackPosYPercentList; // +0x28
    unsigned long long _barrageSeqNum; // +0x30
    UITapGestureRecognizer * _tapGesture; // +0x38
    unsigned long long _layoutOrientation; // +0x40
    long long _faceDetectRenderMode; // +0x48
    CADisplayLink * _animationDisplayLink; // +0x50
    long long _currMaskRenderType; // +0x58
    MMLiveTextureBuffer * _currMaskTexBuffer; // +0x60
    MMFinderLiveTaskId * _finderTaskId; // +0x68
    id <MMFinderLiveSFBarrageViewDelegate> _barrageDelegate; // +0x70
    UIView * _gradientBackView; // +0x78
    CAGradientLayer * _gradientLayer; // +0x80
    MMFinderLiveSFBarrageViewModel * _viewModel; // +0x88
    MMFinderLiveSFBarrageTracksInfo * _barrageTrackInfo; // +0x90
    UIView * _barrageMaskRenderView; // +0x98
    UIView * _faceDetectRenderView; // +0xa0
    UIView * _testContentView; // +0xa8
    long long _thermalState; // +0xb0
    NSMutableArray * _cpuAnimationRecentMetricList; // +0xb8
    NSMutableArray * _cpuAnimationRecentAnalysisResults; // +0xc0
}
+ (double)estimateBarrageCellLineHeight:(id)arg1;
+ (BOOL)isHighDevicePerf;
+ (double)getBarrageDisplayDurationWithLiveTask:(id)arg1 isPortrait:(BOOL)arg2;
- (id)getLandscapeBarrageTrackPosYPercentList;
- (BOOL)updateLandscapeBarrageStartState;
- (id)getLandscapeBarrageTrackPosYPercentListInFullRange;
- (id)getLandscapeBarrageTrackPosYPercentListInRangePercent:(double)arg1 from:(id)arg2 minCnt:(unsigned long long)arg3 maxCnt:(unsigned long long)arg4;
- (void)beginDisappearTransition;
- (void)finishDisappearTransition;
- (void)beginBarrageCellsDisappearTransition:(id /* block */)arg1;
- (void)onLandscapeBarrageSettingEnableDisplayBarrageChanged:(BOOL)arg1 taskId:(id)arg2;
- (void)onLandscapeBarrageSettingEnableBarrageChanged:(BOOL)arg1 taskId:(id)arg2;
- (void)handleForEnableDisplayLandscapeBarrageChanged;
- (void)onLandscapeBarrageSettingDisplayRangeChanged:(double)arg1 taskId:(id)arg2;
- (void)onLandscapeBarrageSettingDisplayAlphaChanged:(double)arg1 taskId:(id)arg2;
- (void)onFaceDetectSegmentMaskTextureRefresh:(id)arg1;
- (void)updateMaskRenderType:(long long)arg1;
- (void)removeFaceDetectMaskViews;
- (void)layoutFaceDetectRenderView;
- (CGRect)getFaceDetectRenderRect;
- (void)updateFaceDetectMaskRenderEnabled;
- (void)updateFaceDetectMaskDisplayNormalizeRect;
- (CGRect)getFaceDetectMaskDisplayNormalizeRect;
- (void)onLivePixelBufferRefreshForFaceDetect:(__CVBuffer *)arg1;
- (BOOL)isCurrMaskRenderSrcLocal;
- (void)unDisplayFaceDetectViewsIfNeed;
- (void)clearCurrFaceDetectViews;
- (void)updateMaskDataNotNeedFaceDetectHandle:(BOOL)arg1 noSegmentPersion:(BOOL)arg2;
- (void)updateMaskDataNotNeedDisplay;
- (void)updateMaskDataInterrupt:(BOOL)arg1;
- (void)onMaskDataUpdated;
- (void)updateBarrageContainerMaskWithImage:(id)arg1;
- (void)updateBarrageContainerMaskWithTextureId:(unsigned int)arg1 size:(CGSize)arg2;
- (void)updateBarrageContainerMaskWithTextureBuff:(char *)arg1 size:(CGSize)arg2;
- (void)updateFaceDetectMaskTexture:(unsigned int)arg1 originRenderFrame:(id)arg2;
- (void)updateFaceDetectRenderMaskTexBuff:(char *)arg1 maskTexSize:(CGSize)arg2;
- (void)updateFaceDetectRenderWithSrcPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)isFaceDetectMaskRenderEnabled;
- (void)configBarrageContainerMaskViewIfNeed;
- (void)addFaceDetectRenderViewIfNeed;
- (void)createFaceDetectRenderView;
- (void)createBarrageMaskRenderView;
- (void)createFaceDetectTestContentView;
- (id)createBarrageContainerMaskImage:(CGSize)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onOutputWeEffectProcessedRenderFrame:(id)arg1;
- (void)onRenderFpsUpdate:(int)arg1;
- (void)onCPUAnimationInvoke;
- (void)clearCPUAnimationAllRecords;
- (void)clearCPUAnimationMetrics;
- (void)checkCPUAnimAnalysisResultsExpired;
- (void)recordCurrCPUAnimMetric;
- (BOOL)analyzeRecentCPUAnimMetricsIfNeed;
- (long long)getAnalysisResultFromRecentMetrics;
- (void)checkAndAdjustStrategy;
- (BOOL)checkCPUAnimationEnable;
- (BOOL)checkCPUAnimationDisable;
- (void)checkAnalysisResultsOverLimit;
- (double)worstDurationValue;
- (double)badDurationValue;
- (double)qualifiedDurationValue;
- (unsigned long long)cpuAnimationEnableCheckCnt;
- (unsigned long long)cpuAnimationDisableCheckCnt;
- (unsigned long long)maxAnalysisCacheCnt;
- (double)expireTime;
- (void)logRecentAnalysisResults:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 barrageDelegate:(id)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initNotifications;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)initDatas;
- (void)layoutUI;
- (BOOL)checkLayoutOrientationChanged;
- (unsigned long long)getLayoutOrientation;
- (void)onBarrageLayoutOrientationStyleChanged;
- (void)onBarrageContainerHeightChanged;
- (void)layoutBarrageContainerView:(BOOL *)arg1;
- (void)layoutGradientBackView;
- (void)updateBarrageContainerRect:(CGRect)arg1;
- (void)invokeVisibleCellsReRun;
- (void)tryAddBarrageItem;
- (void)filterUnableDisplayCellList:(id)arg1;
- (id)tryAddBarrageItemFromBarrageCellList:(id)arg1;
- (unsigned long long)defaultOnceBarrageTryAddCount;
- (unsigned long long)getValidTrackCount;
- (BOOL)checkBarrageCell:(id)arg1 enableMoveAtTrack:(id)arg2 extraNeedWaitTime:(double *)arg3;
- (id)tryStartAnimateBarrageCell:(id)arg1 withPositionY:(double)arg2;
- (id)createBarrageItemForBarrageCell:(id)arg1;
- (void)invokeAnimationForBarrrageItem:(id)arg1 duration:(double)arg2;
- (void)animateTappedBarrageItem:(id)arg1;
- (void)removeBarrageItem:(id)arg1;
- (void)removeBarrageItem:(id)arg1 cleared:(BOOL)arg2;
- (void)startAnimationDisplayLinkIfNeed;
- (void)refreshAnimationWithDisplayLink:(id)arg1;
- (void)checkBarragesCPUAnimationCompleted;
- (void)checkAnimationDisplayLinkRunningState;
- (void)stopAnimationDisplayLinkIfNeed;
- (void)updateCPUAnimationDisable:(BOOL)arg1;
- (void)onMMFinderLiveSFBarrageItemInfoTappedCell:(id)arg1;
- (void)onMMFinderLiveSFBarrageItemInfoInvokeAction:(id)arg1 actionType:(long long)arg2;
- (void)recoverAnimateStateForCurrentTappedBarrageItem;
- (CGRect)getCurrentStayAdjustedFrame:(CGRect)arg1;
- (void)onTapped:(id)arg1;
- (BOOL)isHitViewHasGestureRecognizer:(id)arg1;
- (BOOL)checkSuperViewsOfHitView:(id)arg1 hasGestureCanConsumePoint:(CGPoint)arg2;
- (id)redirectHitTestIfNeeded:(CGPoint)arg1 event:(id)arg2 fromOperationView:(id)arg3 originHitView:(id)arg4;
- (void)showGradientBackViewIfNeeded;
- (void)hideGradientBackView;
- (void)fadeGradientBackView:(double)arg1;
- (BOOL)isTapPointHitInValidAreaOfBarrageContainer:(CGPoint)arg1;
- (id)tryGetHitBarrageItemForPubbleTap:(CGPoint)arg1;
- (id)tryGetHitBarrageItemForLikeBtnTap:(CGPoint)arg1;
- (id)getFinderLiveBoxIdList;
- (id)getLastValidCommentItem:(id)arg1;
- (id)requestRecentLoadedCommentItemList:(unsigned long long)arg1 boxId:(id)arg2 requiredMsgTypeList:(id)arg3 requiredMsgSubTypeList:(id)arg4;
- (void)onFinderLiveSFBarrageTriggerCallback;
- (void)onFinderLiveSFBarrageNewDataItemAvailable;
- (BOOL)isAllTracksAvailable;
- (BOOL)isCurrentLandscapeLayout;
- (unsigned long long)requestBarrageMaxAddCountOnce;
- (void)onFinderLiveSFBarrageHasData:(BOOL)arg1;
- (void)startBarrage;
- (void)stopBarrage;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (BOOL)currEnableFaceDetectMask;
- (void)updateEnableFaceDetectMask;
- (void)updateFaceDetectRenderSwitch:(BOOL)arg1;
- (void)updateCommentDisabled:(BOOL)arg1;
- (void)onCommentRefreshConfigUpdated;
- (void)onLivePixelBufferRefresh:(__CVBuffer *)arg1;
- (void)updateFaceDetectMaskOptions:(long long)arg1;
- (long long)getCurrFaceDetectRenderMode;
- (void)updateFaceDetectRenderMode:(long long)arg1 forceNotify:(BOOL)arg2;
- (long long)currFaceDetectRenderMode;
- (long long)askMaxDesireRenderFps;
- (BOOL)checkTrackHasBarrage:(unsigned long long)arg1;
- (BOOL)isCurrEnableRenderFaceDetectMask;
- (void)updateThermalState:(long long)arg1 forceUpdate:(BOOL)arg2;
- (BOOL)preferCPUAnimation;
- (BOOL)useCPUAnimation;
- (BOOL)isCurrentInOffScreenMode;
- (void)createBarrageTracksInfo;
- (double)getBarrageMoveSpeed:(id)arg1;
- (double)getBarrageMoveDuration;
- (BOOL)isCurrentPortrait;
- (BOOL)checkCurrentAnimatingBarrageCellsOverLimit;
- (BOOL)checkCurrentAnimatingBarrageCellsOverLimitWithAddedCnt:(unsigned long long)arg1;
- (unsigned long long)maxAnimatingBarrageCnt;
- (BOOL)checkCurrentHasAvailableTrack;
- (unsigned long long)getNextBarrageSeqNum;
- (void)updateTrackPositionYPercentList;
- (unsigned int)getFloatMsgMaxTrackCount;
- (id)getBarrageTrackPosYPercentList;
- (id)getPortraitBarrageTrackPosYPercentList;
- (CGRect)getBarrageContainerRect;
- (void)updateIsDisappearing:(BOOL)arg1;
- (void)updateBarrageEnableDisplay;
- (BOOL)getBarrageEnableDisplayState;
- (void)checkCurrentHasBarrage;
- (BOOL)requestCurrentHasBarrage;
- (void)onFaceDetectMaskRenderEnabledChanged;
- (void)onFaceDetectMaskRenderTypeChanged;
- (void)addBarrageItemToTrackBarrageList:(id)arg1;
- (void)removeBarrageItemFromTrackBarrageList:(id)arg1;
- (void)updateCurrTappedBarrageItem:(id)arg1;
- (id)finderLiveTask;
- (BOOL)isStartLandscapeBarrage;
- (void)updateBarrageContainerAlpha;
- (unsigned long long)cpuAnimFrameRate;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onMMFinderLiveOperationView:(id)arg1 backViewDidTapped:(unsigned long long)arg2;
- (void)onSelfMMLiveCommentDataCompleted:(id)arg1 forTaskId:(id)arg2;
- (void)onMMLiveCommentDataItemLikeInfoUpdate:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)xonPostFinderLiveAppMessageSuccess:(id)arg1 boxId:(id)arg2 serverMsgId:(unsigned long long)arg3 localClientMsgId:(id)arg4 userInfo:(id)arg5;
- (void)onGetFinderLiveAppMsgListWithTaskId:(id)arg1 appMsgList:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (id)getBarrageItemForInitialCommentIfVisible:(id)arg1;
- (void)onLiveTask:(id)arg1 floatBarrageEnableDisplay:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(BOOL)arg2;
- (void)onMinimizeWindowWillDisplay:(id)arg1;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (void)onBarrageFaceDetectMaskOptionsAdd:(long long)arg1 taskId:(id)arg2;
- (void)onBarrageFaceDetectMaskOptionsSub:(long long)arg1 taskId:(id)arg2;
- (void)onMatrixPerfWarning:(id)arg1;
- (BOOL)isDisappearing;
- (void)setIsDisappearing:(BOOL)arg1;
- (id)barrageContainerView;
- (void)setBarrageContainerView:(id)arg1;
- (long long)faceDetectMaskOptions;
- (void)setFaceDetectMaskOptions:(long long)arg1;
- (BOOL)isCurrentHasBarrage;
- (void)setIsCurrentHasBarrage:(BOOL)arg1;
- (id)barrageTrackPosYPercentList;
- (void)setBarrageTrackPosYPercentList:(id)arg1;
- (unsigned long long)barrageSeqNum;
- (void)setBarrageSeqNum:(unsigned long long)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)isBarrageEnableDisplay;
- (void)setIsBarrageEnableDisplay:(BOOL)arg1;
- (BOOL)isCommentDisabled;
- (void)setIsCommentDisabled:(BOOL)arg1;
- (unsigned long long)layoutOrientation;
- (void)setLayoutOrientation:(unsigned long long)arg1;
- (long long)faceDetectRenderMode;
- (void)setFaceDetectRenderMode:(long long)arg1;
- (id)animationDisplayLink;
- (void)setAnimationDisplayLink:(id)arg1;
- (BOOL)isHighDevice;
- (void)setIsHighDevice:(BOOL)arg1;
- (BOOL)cpuAnimationSwitch;
- (void)setCpuAnimationSwitch:(BOOL)arg1;
- (long long)currMaskRenderType;
- (void)setCurrMaskRenderType:(long long)arg1;
- (id)currMaskTexBuffer;
- (void)setCurrMaskTexBuffer:(id)arg1;
- (id)finderTaskId;
- (void)setFinderTaskId:(id)arg1;
- (id)barrageDelegate;
- (void)setBarrageDelegate:(id)arg1;
- (id)gradientBackView;
- (void)setGradientBackView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)barrageTrackInfo;
- (void)setBarrageTrackInfo:(id)arg1;
- (id)barrageMaskRenderView;
- (void)setBarrageMaskRenderView:(id)arg1;
- (id)faceDetectRenderView;
- (void)setFaceDetectRenderView:(id)arg1;
- (id)testContentView;
- (void)setTestContentView:(id)arg1;
- (BOOL)faceDetectRenderSwitch;
- (void)setFaceDetectRenderSwitch:(BOOL)arg1;
- (BOOL)maskDataInterrupt;
- (void)setMaskDataInterrupt:(BOOL)arg1;
- (BOOL)enableRenderFaceDetectMask;
- (void)setEnableRenderFaceDetectMask:(BOOL)arg1;
- (BOOL)maskDataNoSegmentPersion;
- (void)setMaskDataNoSegmentPersion:(BOOL)arg1;
- (BOOL)maskDataNotNeedFaceDetectHandle;
- (void)setMaskDataNotNeedFaceDetectHandle:(BOOL)arg1;
- (BOOL)maskDataNotNeedDisplay;
- (void)setMaskDataNotNeedDisplay:(BOOL)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
- (BOOL)cpuAnimationDisable;
- (void)setCpuAnimationDisable:(BOOL)arg1;
- (id)cpuAnimationRecentMetricList;
- (void)setCpuAnimationRecentMetricList:(id)arg1;
- (id)cpuAnimationRecentAnalysisResults;
- (void)setCpuAnimationRecentAnalysisResults:(id)arg1;
- (void).cxx_destruct;
@end
