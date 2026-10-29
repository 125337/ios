@interface TingAIComposerCpp : UnitRCObjcBaseProxyClass <TingAIComposer>
- (int)getStatus;
- (id)getResult;
- (void)start:(id)arg1;
- (BOOL)addListener:(id)arg1;
- (BOOL)removeListener:(id)arg1;
- (void)generateMusicInfo:(id)arg1 callback:(id /* block */)arg2;
@end
