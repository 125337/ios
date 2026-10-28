@interface MMFinderLiveOlyBarrageContainerView : UIView <MMFinderLiveOlyBarragePubbleDisplayExt, MMLiveTaskMgrExt>
{
    BOOL _hasStartDisplay; // +0x8
    BOOL _isEnableDisplay; // +0x9
    BOOL _isShowMinimizeWindow; // +0xa
    BOOL _isLandscape; // +0xb
    BOOL _isInBackground; // +0xc
    MMFinderLiveActivityTaskId * _taskId; // +0x10
    MMFinderLiveOlyBarrageFloatingContainerView * _barrageFloatingContainerView; // +0x18
    NSMutableArray * _displayingContentViewList; // +0x20
    NSMutableArray * _preparingBarrageTravelRouteList; // +0x28
    MMFinderLiveOlyBarragePubbleMgr * _barragePubbleMgr; // +0x30
    long long _currentLayoutStyleIndex; // +0x38
    CGSize _currSelfSize; // +0x40
    struct _currLiveCircle; // +0x50
}
- (id)initWithTaskId:(id)arg1;
- (void)registerExtensions;
- (void)initNotifications;
- (void)initData;
- (void)initBarragePubbleMgr;
- (void)updateResourceWithTask:(id)arg1;
- (double)outerInnerRoundScalePercent;
- (void)startDisplay;
- (id)requestBarrageHitTestViewWithConvertedPoint:(CGPoint)arg1;
- (void)refreshDisplayingBarragePubblesForLightTorch;
- (void)updateBackgroundTorchOutlineCircle:(struct)arg1;
- (void)updateCurrLiveCircle:(struct)arg1;
- (void)layoutSubviews;
- (void)invokeDisplay;
- (id)getNextTravelRouteConfig;
- (void)createBarrageFloatingContainerView;
- (void)clearBarrageContents;
- (void)clearBarrageContentViews;
- (void)unableDisplay;
- (void)enableDisplay;
- (id)getFinderLiveTask;
- (double)barrageContainerTopMargin;
- (double)barrageContainerBottomMargin;
- (void)configDefaultLiveCircle;
- (BOOL)hasValidLiveCircle;
- (id)displayingContentViewList;
- (id)preparingBarrageTravelRouteList;
- (void)onFinderLiveOlyBarragePubblePreparedForDisplay:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onDismissMinimizeWindowDidEnd:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)onCollapseAnimationWillStart:(id)arg1;
- (void)onShowMinimizeWindowWillStart:(id)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (struct)currLiveCircle;
- (void)setCurrLiveCircle:(struct)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)barrageFloatingContainerView;
- (void)setBarrageFloatingContainerView:(id)arg1;
- (void)setDisplayingContentViewList:(id)arg1;
- (void)setPreparingBarrageTravelRouteList:(id)arg1;
- (id)barragePubbleMgr;
- (void)setBarragePubbleMgr:(id)arg1;
- (BOOL)hasStartDisplay;
- (void)setHasStartDisplay:(BOOL)arg1;
- (BOOL)isEnableDisplay;
- (void)setIsEnableDisplay:(BOOL)arg1;
- (long long)currentLayoutStyleIndex;
- (void)setCurrentLayoutStyleIndex:(long long)arg1;
- (CGSize)currSelfSize;
- (void)setCurrSelfSize:(CGSize)arg1;
- (BOOL)isShowMinimizeWindow;
- (void)setIsShowMinimizeWindow:(BOOL)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end
