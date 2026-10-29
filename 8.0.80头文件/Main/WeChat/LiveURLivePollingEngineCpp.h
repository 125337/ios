@interface LiveURLivePollingEngineCpp : UnitRCObjcBaseProxyClass <LiveURLivePollingEngine>
+ (id)create:(id)arg1 configuration:(id)arg2 observer:(id)arg3;
- (void)addTasks:(id)arg1;
- (void)executeTasks:(id)arg1;
- (void)removeTask:(unsigned long long)arg1;
- (void)clearTasks;
- (void)stop;
@end
