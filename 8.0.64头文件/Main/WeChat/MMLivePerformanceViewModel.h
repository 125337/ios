@interface MMLivePerformanceViewModel : NSObject <MMLiveTaskMgrExt>
{
    MMLiveTaskId * _taskId; // +0x8
    id <MMLivePerformanceViewModelDelegate> _delegate; // +0x10
    NSArray * _performanceKeys; // +0x18
    NSMutableDictionary * _performanceTexts; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (id)performanceKeysForTaskId:(id)arg1;
- (void)notifyUpdate;
- (void)prepareNotifyUpdate;
- (void)updateMetricsInfo:(id)arg1 liveTask:(id)arg2;
- (void)updateGPUInfo;
- (void)updateGPUInfoWithGPUUtilization:(id)arg1;
- (void)updateThermalDescription:(id)arg1;
- (void)updateEnergyModeWithLiveTask:(id)arg1;
- (void)onLiveTask:(id)arg1 statistics:(id)arg2;
- (void)onLiveTask:(id)arg1 netStatus:(id)arg2 p2pStatus:(id)arg3;
- (void)onLiveTask:(id)arg1 pushNetStatus:(id)arg2;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (void)onLiveTask:(id)arg1 trtcAudioFrameCostTime:(long long)arg2 userId:(id)arg3 business:(long long)arg4;
- (id)transferBusinessTypeToName:(long long)arg1;
- (id)getNickName:(id)arg1 userId:(id)arg2;
- (BOOL)needPrintTrtcAudioFrameCostTimeFromUser:(id)arg1 business:(long long)arg2 liveTask:(id)arg3;
- (id)taskId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)performanceKeys;
- (void)setPerformanceKeys:(id)arg1;
- (id)performanceTexts;
- (void)setPerformanceTexts:(id)arg1;
- (void).cxx_destruct;
@end
