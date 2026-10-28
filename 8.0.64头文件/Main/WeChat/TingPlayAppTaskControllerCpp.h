@interface TingPlayAppTaskControllerCpp : UnitRCObjcBaseProxyClass <TingPlayAppTaskController>
+ (id)sharedInstance;
+ (id)getPlayTaskController;
+ (void)setPlayTaskController:(id)arg1;
+ (id)getOrCreatePlayerShutdownController;
- (id)getOrCreatePlayApp:(int)arg1;
- (id)getPlayApp:(int)arg1;
- (id)playingTask;
@end
