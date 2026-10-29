@interface WCFinderLiveNexusReporter : NSObject
{
    MMFinderLiveTask * _liveTask; // +0x8
    WCFinderLiveCompletePageReporter * _pageReporter; // +0x10
}
- (void)handleReport:(id)arg1;
- (void)p_handle21919:(id)arg1;
- (void)report23057:(id)arg1 kv:(id)arg2;
- (void)report23059:(id)arg1 kv:(id)arg2;
- (void)reportElement:(id)arg1 kv:(id)arg2 actionType:(unsigned long long)arg3;
- (id)stringKvFrom:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)pageReporter;
- (void)setPageReporter:(id)arg1;
- (void).cxx_destruct;
@end
