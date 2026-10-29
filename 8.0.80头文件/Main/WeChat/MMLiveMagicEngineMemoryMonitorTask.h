@interface MMLiveMagicEngineMemoryMonitorTask : MMLiveMagicRewardMemoryMonitorTask
{
    id /* block */ _finalCheckEnableFreeMemoryCallback; // +0x8
}
- (void)checkMemory;
- (id /* block */)finalCheckEnableFreeMemoryCallback;
- (void)setFinalCheckEnableFreeMemoryCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
