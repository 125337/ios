@interface WCGeneralExposeMonitor : MMUserService <MMServiceProtocol>
- (void)addMonitorView:(id)arg1 exposeBlock:(id /* block */)arg2 exposeRate:(double)arg3 exposeMinTime:(unsigned long long)arg4;
- (void)removeMonitorViewBlock:(id)arg1;
- (void)forceChangeExpState:(id)arg1 isExp:(BOOL)arg2;
@end
