@interface WCLiveBlurBtnPowerModeMonitorTask : NSObject
{
    BOOL _isSuspendingForObserve; // +0x8
    BOOL _isPreparingEnterStaticBlur; // +0x9
    WCLiveBlurButton * _monitorBtn; // +0x10
    id /* block */ _checkBlurBackHostViewValidBlock; // +0x18
    id /* block */ _checkEnableActiveBlock; // +0x20
    id /* block */ _willPendingToCatchSnapshotBlock; // +0x28
    id /* block */ _pendingToCatchSnapshotBlock; // +0x30
    id /* block */ _requestRootLiveVCBlock; // +0x38
    id /* block */ _startMonitorBlock; // +0x40
    id /* block */ _stateChangeBlock; // +0x48
    MMLiveTaskId * _liveTaskId; // +0x50
    unsigned long long _currentState; // +0x58
    unsigned long long _monitorPointAlignStyle; // +0x60
    NSMutableArray * _monitoredCoordinateList; // +0x68
    MonitorResult * _currentMonitorResult; // +0x70
    NSMutableArray * _recentMonitorResultList; // +0x78
    NSMutableArray * _recentRecordColorDisResultList; // +0x80
    MonitorResult * _staticBlurMonitorResult; // +0x88
    MonitorResult * _realTimeCurrStandardMonitorResult; // +0x90
    unsigned long long _currPowerModeStyle; // +0x98
    WCLiveBlurPowerModeAdjustStrategy * _adjustStrategy; // +0xa0
    double _staticBlurEnterTime; // +0xa8
}
+ (id)getSubLiveViewFromLiveVC:(id)arg1;
+ (id)getSubOperationViewFromLiveVC:(id)arg1;
+ (id)cropImageInRect:(CGRect)arg1 fromSrcImage:(id)arg2;
- (id)initWithMonitorBtn:(id)arg1 liveTaskId:(id)arg2 adjustStrategyParam:(id)arg3;
- (void)initDefaultData;
- (void)createAdjustStrategy:(id)arg1;
- (void)startMonitor;
- (void)stopMonitor;
- (BOOL)checkEnableCatchSnapShot;
- (BOOL)checkMainVideoFrameContainMonitorBtnRect;
- (void)onFinishCatchSnapShot:(BOOL)arg1 snapShot:(id)arg2;
- (id)getNormalizedCoordinatesToMonitor:(unsigned long long)arg1;
- (void)onFinishMonitor:(id)arg1 monitorId:(unsigned long long)arg2;
- (void)updateAdjustStrategyParam:(id)arg1;
- (id)getAdjustStrategy;
- (void)prepareToEnterStaticBlurMode;
- (void)enterStaticBlurMode;
- (BOOL)staticBlurModeRefreshBackView;
- (void)endStaticBlurModeRefresh:(id)arg1;
- (void)pauseStaticBlurModeRefresh;
- (void)enterRealTimeBlurMode;
- (void)analyzeRecentMonitorResult:(id)arg1;
- (void)analyzeRecentMonitorResultsForEnterStaticBlur:(id)arg1;
- (void)analyzeRecentMonitorResultsForEnterRealTimeBlur:(id)arg1;
- (void)checkRecentMonitorResultListOverLimit;
- (void)adjustStrategyIfNeeded;
- (void)enterSuspend:(unsigned long long)arg1;
- (void)resignActive:(unsigned long long)arg1;
- (CGRect)getMonitorBtnNormalizedFrame;
- (void)clearAllStates;
- (void)suspendForObserve;
- (void)recoverForRetry;
- (void)updateMonitorPointAlignStyleIfNeeded;
- (unsigned long long)getCurrentMonitorPointAlignStyle;
- (void)onMonitorBtnSizeChanged;
- (void)onMonitorBtnFrameChanged;
- (void)onMonitorBtnContainerFrameChanged;
- (id)rootLiveVC;
- (id)monitoredCoordinateList;
- (id)recentMonitorResultList;
- (id)recentRecordColorDisResultList;
- (double)suspendPersistTime;
- (unsigned long long)recentMonitorResultMaxCnt;
- (id)monitorBtn;
- (void)setMonitorBtn:(id)arg1;
- (id /* block */)checkBlurBackHostViewValidBlock;
- (void)setCheckBlurBackHostViewValidBlock:(id /* block */)arg1;
- (id /* block */)checkEnableActiveBlock;
- (void)setCheckEnableActiveBlock:(id /* block */)arg1;
- (id /* block */)willPendingToCatchSnapshotBlock;
- (void)setWillPendingToCatchSnapshotBlock:(id /* block */)arg1;
- (id /* block */)pendingToCatchSnapshotBlock;
- (void)setPendingToCatchSnapshotBlock:(id /* block */)arg1;
- (id /* block */)requestRootLiveVCBlock;
- (void)setRequestRootLiveVCBlock:(id /* block */)arg1;
- (id /* block */)startMonitorBlock;
- (void)setStartMonitorBlock:(id /* block */)arg1;
- (id /* block */)stateChangeBlock;
- (void)setStateChangeBlock:(id /* block */)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (unsigned long long)currentState;
- (void)setCurrentState:(unsigned long long)arg1;
- (BOOL)isSuspendingForObserve;
- (void)setIsSuspendingForObserve:(BOOL)arg1;
- (unsigned long long)monitorPointAlignStyle;
- (void)setMonitorPointAlignStyle:(unsigned long long)arg1;
- (void)setMonitoredCoordinateList:(id)arg1;
- (id)currentMonitorResult;
- (void)setCurrentMonitorResult:(id)arg1;
- (void)setRecentMonitorResultList:(id)arg1;
- (void)setRecentRecordColorDisResultList:(id)arg1;
- (id)staticBlurMonitorResult;
- (void)setStaticBlurMonitorResult:(id)arg1;
- (id)realTimeCurrStandardMonitorResult;
- (void)setRealTimeCurrStandardMonitorResult:(id)arg1;
- (unsigned long long)currPowerModeStyle;
- (void)setCurrPowerModeStyle:(unsigned long long)arg1;
- (BOOL)isPreparingEnterStaticBlur;
- (void)setIsPreparingEnterStaticBlur:(BOOL)arg1;
- (id)adjustStrategy;
- (void)setAdjustStrategy:(id)arg1;
- (double)staticBlurEnterTime;
- (void)setStaticBlurEnterTime:(double)arg1;
- (void).cxx_destruct;
@end

