@interface TingAppTaskServiceCpp : UnitRCObjcBaseProxyClass <TingAppTaskService>
+ (id)sharedInstance;
- (void)updateSessionWithEnterScene:(long long)arg1;
- (void)clearSession;
- (long long)enterScene;
- (id)sessionId;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
@end

