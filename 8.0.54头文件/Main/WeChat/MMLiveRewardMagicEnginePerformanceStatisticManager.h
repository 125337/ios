@interface MMLiveRewardMagicEnginePerformanceStatisticManager : NSObject <LiveGiftMRHandlerListener, _TtP6WeChat18IMRViewResListener_, _TtP6WeChat15IMRViewListener_, MMLiveTaskMgrExt>
{
    MMLiveTaskId * _taskId; // +0x8
    MMLiveMetricsInfoRecordInfo * _latestMetricsRecordInfo; // +0x10
    NSMutableDictionary * _performanceRecordTaskDict; // +0x18
    MMLiveMagicEnginePerformanceRecordTask * _currRecordTask; // +0x20
}
+ (BOOL)enablePerformanceStatistic;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)monitorPerformanceForMagicRewardHandler:(id)arg1;
- (void)cancelMonitorForMagicRewardHandler:(id)arg1;
- (void)reportPerformance;
- (void)extractMedianPerformanceData:(id /* block */)arg1;
- (void)registerRecordTaskWithMagicRewardHandlerIfNeed:(id)arg1;
- (void)notifyRecordTaskCancelMonitorForMagicRewardHandler:(id)arg1;
- (id)createPerformanceRecordTaskWithGiftName:(id)arg1 productId:(id)arg2;
- (id)createUniqueKeyWithGiftName:(id)arg1 productId:(id)arg2;
- (void)updateLatestMetricsRecordInfo:(id)arg1;
- (void)updateCurrRecordTask:(id)arg1;
- (id)getRecordTaskWithHandler:(id)arg1;
- (BOOL)isRecording;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (void)onAnimationPreparePlayWithHandler:(id)arg1 actionInfo:(id)arg2;
- (void)onAnimationPrepareEditWithHandler:(id)arg1 actionInfo:(id)arg2;
- (void)tryStartPerformanceRecordWithHandler:(id)arg1 scene:(unsigned long long)arg2;
- (void)onResLoadedWithHandler:(id)arg1;
- (void)onAnimationCancelWithHandler:(id)arg1;
- (void)onAnimationEndWithWithHandler:(id)arg1;
- (void)onAnimationTimeoutWithHandler:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)latestMetricsRecordInfo;
- (void)setLatestMetricsRecordInfo:(id)arg1;
- (id)performanceRecordTaskDict;
- (void)setPerformanceRecordTaskDict:(id)arg1;
- (id)currRecordTask;
- (void)setCurrRecordTask:(id)arg1;
- (void).cxx_destruct;
@end

