@interface TingPlayAppTaskControllerCpp : UnitRCObjcBaseProxyClass <TingPlayAppTaskController>
+ (id)sharedInstance;
+ (id)getOrCreatePlayerShutdownController;
- (id)getOrCreatePlayApp:(int)arg1;
- (id)getPlayApp:(int)arg1;
- (id)getOrCreateStandAlonePlayApp:(id)arg1;
- (id)getOrCreateStandAlonePlayApp:(id)arg1 config:(id)arg2;
- (id)getStandAlonePlayApp:(id)arg1;
- (id)releaseStandAlonePlayApp:(id)arg1;
- (id)releaseStandAlonePlayApp:(id)arg1 stopPlay:(BOOL)arg2;
- (id)getVideoHandler:(id)arg1;
- (id)playingTask;
@end
