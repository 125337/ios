@interface TingAIComposerTimbreServiceCpp : UnitRCObjcBaseProxyClass <TingAIComposerTimbreService>
- (void)fetchTimbreList:(id /* block */)arg1;
- (id)getTimbreList;
- (void)selectTimbre:(id)arg1 timbre:(id)arg2;
- (id)getCurrentSelectedTimbre:(id)arg1;
- (void)createTimbre:(id)arg1 callback:(id /* block */)arg2;
- (void)setTimbreCloneAlgorithm:(int)arg1;
- (int)getTimbreCloneAlgorithm;
- (void)addAIComposerTimbreListener:(id)arg1;
- (void)removeAIComposerTimbreListener:(id)arg1;
@end
