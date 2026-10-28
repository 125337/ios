@interface WAJSContextPlugin_userAccount : WAJSContextPluginBase
{
    NSMutableArray * _arrEvent; // +0x8
    NSObject<WAJSContextPlugin_userAccountProtocol> * _runningEvent; // +0x10
}
- (id)init;
- (void)addUserAccountJSEvent:(id)arg1 param:(id)arg2;
- (void)removeUserAccountJSEvent:(id)arg1;
- (void)reportPerformanceForEvent:(id)arg1;
- (id)getDescriptionForDataPipeType:(unsigned long long)arg1;
- (void)checkRunJSEvent;
- (void)mainThread_checkRunJSEvent;
- (void)addJSEvent:(id)arg1;
- (void)removeAllJSEvent;
- (id)getNextRunningJSEventIfNotHave;
- (void)resetRunningEvent:(id)arg1;
- (void)addConcurrentUserAccountJSEvent:(id)arg1 param:(id)arg2;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)arrEvent;
- (void)setArrEvent:(id)arg1;
- (id)runningEvent;
- (void)setRunningEvent:(id)arg1;
- (void).cxx_destruct;
@end
