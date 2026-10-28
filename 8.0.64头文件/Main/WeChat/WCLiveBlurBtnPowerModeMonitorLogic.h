@interface WCLiveBlurBtnPowerModeMonitorLogic : NSObject <MMLiveTaskMgrExt, MMLiveViewExt, IExptServiceExt>
{
    BOOL _isMonitering; // +0x8
    long long _defaultAdjustStrategyParamLevel; // +0x10
    unsigned long long _blurPowerModeSwitch; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    NSMutableDictionary * _monitorTaskDict; // +0x28
    NSMutableSet * _snapShotPendingTaskSet; // +0x30
    NSMutableDictionary * _suspendMonitorTaskDict; // +0x38
    unsigned long long _monitorId; // +0x40
    NSArray * _adjustStrategyParamList; // +0x48
    NSArray * _adjustStrategyParamLevelList; // +0x50
    long long _currentAdjustStrategyParamLevel; // +0x58
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)initDefaultData;
- (void)registerPowerModeMonitorForBlurBtn:(id)arg1;
- (void)unRegisterPowerModeMonitorForBlurBtn:(id)arg1;
- (BOOL)hasBlurBtnRegisterPowerModeMonitor;
- (BOOL)isSupportBlurBtnPowerMode;
- (id)createMonitorTaskWithBlurBtn:(id)arg1;
- (BOOL)checkBlurBackHostViewValid;
- (BOOL)checkBlurBackHostViewValidForMonitorTask:(id)arg1;
- (BOOL)isMonitorTaskEnableActive:(id)arg1;
- (void)increaseMonitorId;
- (void)handleMonitorTask:(id)arg1 forStateChanged:(unsigned long long)arg2;
- (void)checkAndUpdateAllMonitorTasksStateIfNeeded:(unsigned long long)arg1;
- (void)changeAdjustStrategyParamLevel:(long long)arg1;
- (void)updateBlurPowerModeSwitch;
- (void)closeBlurPowerModeMonitorService;
- (void)checkMonitorTaskDictIsEmpty;
- (void)startMonitor;
- (void)stopMonitor;
- (void)monitorPixelColor;
- (void)handleRequestARGBColorCallbackInMainThread:(unsigned long long)arg1 pixelColorInfo:(id)arg2;
- (void)onMonitorDone:(BOOL)arg1 result:(id)arg2 monitorId:(unsigned long long)arg3;
- (void)continueMonitor;
- (void)checkSnapShotPendingTaskSetIsEmpty;
- (void)onMonitorTaskWillPendingToSnapShot:(id)arg1;
- (void)onMonitorTaskPendingToSnapShot:(id)arg1;
- (void)pendingToSnapShot;
- (void)cancelSnapShot;
- (void)catchSnapShot;
- (BOOL)checkEnableCatchSnapShot;
- (void)endCatchSnapShot:(BOOL)arg1 snapShot:(id)arg2;
- (id)monitorTaskDict;
- (id)suspendMonitorTaskDict;
- (id)snapShotPendingTaskSet;
- (id)rootLiveVC;
- (double)monitorScheduleTime;
- (id)currentAdjustStrategyParam;
- (unsigned long long)currMonitorTaskCnt;
- (void)onMinimizeWindowAttachLiveView:(id)arg1;
- (void)onHomePageBottomPlayerAttachLiveView:(id)arg1;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3 showTip:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 isAudienceLocalAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(BOOL)arg2;
- (void)onLiveTaskAnchorAudioModeBackgroundPlayerVMChanged:(id)arg1;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (void)onExptItemListChange;
- (long long)defaultAdjustStrategyParamLevel;
- (void)setDefaultAdjustStrategyParamLevel:(long long)arg1;
- (unsigned long long)blurPowerModeSwitch;
- (void)setBlurPowerModeSwitch:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setMonitorTaskDict:(id)arg1;
- (void)setSnapShotPendingTaskSet:(id)arg1;
- (void)setSuspendMonitorTaskDict:(id)arg1;
- (BOOL)isMonitering;
- (void)setIsMonitering:(BOOL)arg1;
- (unsigned long long)monitorId;
- (void)setMonitorId:(unsigned long long)arg1;
- (id)adjustStrategyParamList;
- (void)setAdjustStrategyParamList:(id)arg1;
- (id)adjustStrategyParamLevelList;
- (void)setAdjustStrategyParamLevelList:(id)arg1;
- (long long)currentAdjustStrategyParamLevel;
- (void)setCurrentAdjustStrategyParamLevel:(long long)arg1;
- (void).cxx_destruct;
@end
