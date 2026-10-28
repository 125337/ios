@interface TingObjcPlayModeManagerCpp : UnitRCObjcBaseProxyClass <TingObjcPlayModeManager>
+ (id)sharedInstance;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)setRandomPlaylist:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)getRandomPlaylist:(id /* block */)arg1;
@end
