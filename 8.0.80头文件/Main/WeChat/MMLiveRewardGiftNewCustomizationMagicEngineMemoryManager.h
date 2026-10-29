@interface MMLiveRewardGiftNewCustomizationMagicEngineMemoryManager : NSObject
{
    MMLiveMagicEngineMemoryMonitorTask * _magicEngineMemMonitorTask; // +0x8
    MMLiveRewardGiftNewCustomizationMagicRewardMemoryManager * _currRewardMemoryManager; // +0x10
    MMLiveRewardGiftNewCustomizationMagicRewardResManager * _currRewardResManager; // +0x18
}
- (id)init;
- (void)initData;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)updateCurrentRewardMemoryManager:(id)arg1;
- (void)updateCurrentRewardResManager:(id)arg1;
- (void)checkMagicEngineMemory;
- (void)createEngineMemoryMonitorTask;
- (double)getRecentAverageFootPrintMemoryPercent:(id)arg1;
- (double)getMonitorTimeWithFootPrintMemoryPercent:(double)arg1;
- (void)updateMagicEngineMemoryUseState;
- (long long)getCurrentMagicEngineMemoryUseState;
- (void)checkListeningRewardManagers;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (void)onAllMagicRewardResourceStateCheckFinished;
- (void)onHasMagicRewardResourceStateChecking;
- (void)onAllMagicRewardResMemoryUnLoaded;
- (void)onHasMagicRewardResMemoryLoaded;
- (id)magicEngineMemMonitorTask;
- (void)setMagicEngineMemMonitorTask:(id)arg1;
- (id)currRewardMemoryManager;
- (void)setCurrRewardMemoryManager:(id)arg1;
- (id)currRewardResManager;
- (void)setCurrRewardResManager:(id)arg1;
- (void).cxx_destruct;
@end
