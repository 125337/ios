@interface TingMusicSquarePreloadCpp : UnitRCObjcBaseProxyClass <TingMusicSquarePreload>
+ (id)sharedInstance;
- (void)preload:(id)arg1;
- (void)discard:(id)arg1;
- (id)getAndClearPreloadResponse;
- (id)readPreloadResponse;
- (void)onClientInsertionReceived:(id)arg1;
- (void)readClientInsertionPatch:(id)arg1 callback:(id /* block */)arg2;
- (void)clearClientInsertionPatch;
- (void)applyClientInsertionPatchIfNeeded:(id)arg1 discoverResponse:(id)arg2 callback:(id /* block */)arg3;
@end
