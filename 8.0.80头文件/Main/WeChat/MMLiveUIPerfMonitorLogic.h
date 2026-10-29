@interface MMLiveUIPerfMonitorLogic : NSObject <MMLiveTaskMgrExt, MMFinderLiveOperationViewExt>
{
    BOOL _checkMonitorObjValid; // +0x8
    BOOL _isPauseMonitor; // +0x9
    MMLiveTaskId * _taskId; // +0x10
    long long _monitorPauseOptions; // +0x18
    NSMutableDictionary * _pagAnimPerfMonitorDict; // +0x20
    NSMutableArray * _pagAnimPerfStatResultList; // +0x28
    MMLivePAGAnimationPerfStatisticResult * _currPAGAnimPerfStatResult; // +0x30
    NSMutableDictionary * _uiAnimPerfMonitorDict; // +0x38
    NSMutableArray * _uiAnimPerfStatResultList; // +0x40
    MMLiveUIAnimationPerfStatisticResult * _currUIAnimPerfStatResult; // +0x48
    NSMutableDictionary * _blurPerfMonitorDict; // +0x50
    NSMutableArray * _blurPerfStatResultList; // +0x58
    MMLiveBlurPerfStatisticResult * _currBlurPerfStatResult; // +0x60
}
+ (id)getLayerAnimations:(id)arg1;
+ (id)getViewDesc:(id)arg1;
- (void)observeBlurEffectUI;
- (void)unObserveBlurEffectUI;
- (void)observeAnimationEvent;
- (void)unObserveAnimationEvent;
- (void)monitorPageSheetBlurPerfIfNeed:(id)arg1;
- (void)unMonitorPageSheetBlurPerfIfNeed:(id)arg1;
- (void)monitorHalfScreenBlurPerfIfNeed:(id)arg1;
- (void)unMonitorHalfScreenBlurPerfIfNeed:(id)arg1;
- (void)checkBlurBtnNeedMonitorBlurPerf:(id)arg1;
- (void)monitorPAGAnimationPerf:(id)arg1;
- (void)startUIAnimationPerfMonitorRecords;
- (id)getUIAnimationPerfMonitorRecord:(id)arg1;
- (void)registerUIAnimationPerfMonitorRecord:(id)arg1 atLayer:(id)arg2 inView:(id)arg3;
- (id)createUIAnimationPerfMonitorRecord:(id)arg1 atLayer:(id)arg2 inView:(id)arg3;
- (void)unRegisterUIAnimationPerfMonitorRecordsWithKeys:(id)arg1;
- (void)collectUIAnimationPerfMonitorRecords;
- (void)checkUIAnimationPerfMonitorObjsValid;
- (void)addUIAnimationMonitorRecordToStatResult:(id)arg1;
- (void)recordUIAnimationMonitorStatResult;
- (void)updateCurrUIAnimPerfStatResult;
- (void)startUIAnimationPerfStatisticMonitor;
- (void)stopUIAnimationPerfStatisticMonitor;
- (BOOL)hasUIAnimationPerfMonitorRecords;
- (void)startPAGAnimationPerfMonitorRecords;
- (id)getPAGAnimationPerfMonitorRecord:(id)arg1;
- (BOOL)clearPrePAGAnimationPerfMonitorRecordIfNeed:(id)arg1;
- (void)registerPAGAnimationPerfMonitorRecord:(id)arg1;
- (id)createPAGAnimationPerfMonitorRecord:(id)arg1;
- (void)unRegisterPAGAnimationPerfMonitorRecordsWithKeys:(id)arg1;
- (void)collectPAGAnimationPerfMonitorRecords;
- (void)checkPAGAnimationPerfMonitorObjsValid;
- (void)addPAGAnimationMonitorRecordToStatResult:(id)arg1;
- (void)recordPAGAnimationMonitorStatResult;
- (void)updateCurrPAGAnimPerfStatResult;
- (void)startPAGAnimationPerfStatisticMonitor;
- (void)stopPAGAnimationPerfStatisticMonitor;
- (BOOL)hasPAGAnimationPerfMonitorRecords;
- (void)startBlurPerfMonitorRecords;
- (BOOL)startBlurMonitor:(id)arg1;
- (BOOL)stopBlurMonitor:(id)arg1;
- (id)getBlurPerfMonitorRecord:(id)arg1;
- (void)registerBlurPerfMonitorRecord:(id)arg1;
- (id)createBlurPerfMonitorRecord:(id)arg1;
- (void)unRegisterBlurPerfMonitorRecordsWithKeys:(id)arg1;
- (void)collectBlurPerfMonitorRecords;
- (void)checkBlurPerfMonitorObjsValid;
- (void)addBlurMonitorRecordToStatResult:(id)arg1;
- (void)recordBlurMonitorStatResult;
- (void)updateCurrBlurPerfStatResult;
- (void)startBlurPerfStatisticMonitor;
- (void)stopBlurPerfStatisticMonitor;
- (BOOL)hasBlurPerfMonitorRecords;
- (BOOL)startAnimationMonitor:(id)arg1;
- (BOOL)stopAnimationMonitor:(id)arg1;
- (BOOL)hasAnimationPerfMonitorRecords;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (id)scheduleCollectStatisticPeriodResult;
- (void)onViewWithBlurEffectDisplay:(id)arg1;
- (void)onViewWithBlurEffectUnDisplay:(id)arg1;
- (void)onViewStartUIAnimation:(id)arg1;
- (void)onViewStartUIAnimation:(id)arg1 atLayer:(id)arg2;
- (void)onViewStartPAGAnimation:(id)arg1;
- (void)onLiveVCDidAppear;
- (void)onLiveVCDidDisappear;
- (void)updateComposeRectForMonitorRecord:(id)arg1;
- (CGRect)getCurrPlayerRectInLiveVC;
- (CGRect)getViewRectInLiveVC:(id)arg1 rect:(CGRect)arg2;
- (void)checkNeedPauseMonitor;
- (void)updateIsPauseMonitor:(BOOL)arg1;
- (void)startPerfStatisticMonitor;
- (void)stopPerfStatisticMonitor;
- (id)collectPeriodStatisticResult;
- (BOOL)hasPerfMonitorRecords;
- (void)scheduleCheckPerfMonitorObjsValid;
- (void)startPerfMonitorObjsValidCheck;
- (void)stopPerfMonitorObjsValidCheck;
- (id)liveTask;
- (id)currentLiveViewController;
- (double)scheduleCheckInterval;
- (void)onMinimizeWindowWillDisplay:(id)arg1;
- (void)onMinimizeWindowDidHide:(id)arg1;
- (void)onMMFinderLiveOperationView:(id)arg1 clearScreenChanged:(BOOL)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)monitorPauseOptions;
- (void)setMonitorPauseOptions:(long long)arg1;
- (BOOL)checkMonitorObjValid;
- (void)setCheckMonitorObjValid:(BOOL)arg1;
- (id)pagAnimPerfMonitorDict;
- (void)setPagAnimPerfMonitorDict:(id)arg1;
- (id)pagAnimPerfStatResultList;
- (void)setPagAnimPerfStatResultList:(id)arg1;
- (id)currPAGAnimPerfStatResult;
- (void)setCurrPAGAnimPerfStatResult:(id)arg1;
- (id)uiAnimPerfMonitorDict;
- (void)setUiAnimPerfMonitorDict:(id)arg1;
- (id)uiAnimPerfStatResultList;
- (void)setUiAnimPerfStatResultList:(id)arg1;
- (id)currUIAnimPerfStatResult;
- (void)setCurrUIAnimPerfStatResult:(id)arg1;
- (id)blurPerfMonitorDict;
- (void)setBlurPerfMonitorDict:(id)arg1;
- (id)blurPerfStatResultList;
- (void)setBlurPerfStatResultList:(id)arg1;
- (id)currBlurPerfStatResult;
- (void)setCurrBlurPerfStatResult:(id)arg1;
- (BOOL)isPauseMonitor;
- (void)setIsPauseMonitor:(BOOL)arg1;
- (void).cxx_destruct;
@end
