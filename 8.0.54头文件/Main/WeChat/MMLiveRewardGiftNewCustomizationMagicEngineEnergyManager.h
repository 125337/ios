@interface MMLiveRewardGiftNewCustomizationMagicEngineEnergyManager : NSObject <MMLiveTaskMgrExt>
{
    unsigned int _currFrameRate; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    NSMutableDictionary * _energyAdjustTaskDict; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)monitorEnergyForRewardView:(id)arg1;
- (void)cancelMonitorEnergy:(id)arg1;
- (double)getAnimationInterval;
- (unsigned long long)getCurrentPowerMode;
- (void)onHasRewardViewMonitoredEnergy;
- (void)initSettingMagicFrameRate;
- (void)initSettingQuailtyLevelForEnergyTask:(id)arg1;
- (void)initSettingPixelRatioForEnergyTask:(id)arg1;
- (id)createEnergyAdjustTaskForRewardView:(id)arg1;
- (id)getUniqueKeyForView:(id)arg1;
- (id)getLiveTask;
- (long long)getQuailtyLevelWithMetricsInfo:(id)arg1;
- (double)getPixelRatioWithMetricsInfo:(id)arg1 forEnergyTask:(id)arg2;
- (unsigned int)getFrameRateWithMetricsInfo:(id)arg1;
- (id)getCurrentActiveAdjustTask;
- (unsigned long long)getCurrentPowerModeWithMetricsInfo:(id)arg1;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (void)updateQuailtyLevelWithMetericsInfo:(id)arg1;
- (void)updateFrameRateWithMetricsInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)energyAdjustTaskDict;
- (void)setEnergyAdjustTaskDict:(id)arg1;
- (unsigned int)currFrameRate;
- (void)setCurrFrameRate:(unsigned int)arg1;
- (void).cxx_destruct;
@end

