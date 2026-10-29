@interface MMLiveRewardGiftNewCustomizationMagicRewardMemoryManager : NSObject <MMLiveTaskMgrExt>
{
    BOOL _hasResMemoryLoaded; // +0x8
    NSMutableDictionary * _monitorTaskDict; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)initDefaultData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)monitorMagicResMemoryWithView:(id)arg1 enableAutoUnLoad:(BOOL)arg2;
- (void)cancelMonitor:(id)arg1;
- (BOOL)isCurrentHasResMemoryLoaded;
- (id)createMonitorTaskForRewardView:(id)arg1 enableAutoUnLoad:(BOOL)arg2;
- (id)getUniqueKeyForView:(id)arg1;
- (double)getRecentAverageFootPrintMemoryPercent:(id)arg1;
- (double)getMonitorTimeWithFootPrintMemoryPercent:(double)arg1;
- (void)updateResMemoryLoadedState;
- (BOOL)getCurrentResMemoryLoadedState;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (id)monitorTaskDict;
- (void)setMonitorTaskDict:(id)arg1;
- (BOOL)hasResMemoryLoaded;
- (void)setHasResMemoryLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
