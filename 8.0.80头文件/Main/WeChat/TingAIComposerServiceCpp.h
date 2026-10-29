@interface TingAIComposerServiceCpp : UnitRCObjcBaseProxyClass <TingAIComposerService>
- (id)createComposer;
- (id)createComposerWithUUID:(id)arg1;
- (id)getAllComposers;
- (BOOL)addListener:(id)arg1;
- (BOOL)removeListener:(id)arg1;
- (id)timbreService;
- (void)onAIComposerStatusChanged:(id)arg1 statusInfo:(id)arg2;
- (void)onAIComposerDataUpdate:(id)arg1;
@end
