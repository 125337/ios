@interface TingPlayerShutdownControllerCpp : UnitRCObjcBaseProxyClass <TingPlayerShutdownController>
- (void)setPlayTaskController:(id)arg1;
- (int)getShutdownType;
- (unsigned long long)getShutdownMinLater;
- (unsigned long long)getShutdownTargetTimeMs;
- (void)setShutdown:(int)arg1 minLater:(unsigned long long)arg2;
- (void)addShutdownListener:(id)arg1;
- (void)removeShutdownListener:(id)arg1;
- (void)onPlayingTaskChanged:(id)arg1;
@end

