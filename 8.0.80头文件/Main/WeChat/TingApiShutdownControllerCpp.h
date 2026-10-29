@interface TingApiShutdownControllerCpp : UnitRCObjcBaseProxyClass <TingApiShutdownController>
- (int)getShutdownType;
- (unsigned long long)getShutdownMinLater;
- (unsigned long long)getShutdownTargetTimeMs;
- (void)setShutdown:(int)arg1 minLater:(unsigned long long)arg2;
- (void)addShutdownListener:(id)arg1;
- (void)removeShutdownListener:(id)arg1;
@end
