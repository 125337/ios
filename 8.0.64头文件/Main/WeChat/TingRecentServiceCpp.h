@interface TingRecentServiceCpp : UnitRCObjcBaseProxyClass <TingRecentService>
+ (id)sharedInstance;
- (BOOL)addListener:(id)arg1;
- (BOOL)removeAllListener;
- (void)clearRecent;
- (void)dispatchRecentTape:(id)arg1;
- (void)checkSwitchPlayTask:(int)arg1 scene:(int)arg2;
@end
