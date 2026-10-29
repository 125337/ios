@interface TingAIProducerCpp : UnitRCObjcBaseProxyClass <TingAIProducer>
- (id)getProcessors;
- (BOOL)addListener:(id)arg1;
- (BOOL)removeListener:(id)arg1;
- (void)onProjectStatusChanged:(id)arg1 status:(int)arg2;
@end
