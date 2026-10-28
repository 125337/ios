@interface MegaVideoMinimizeServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoMinimizeService>
+ (id)sharedInstance;
- (BOOL)hasMinimize;
- (void)onMinimizeActive:(id)arg1;
- (void)onMinimizeDeactive;
- (id)minimizeContext;
- (void)updateCurrentPlayerId:(long long)arg1;
- (long long)currentPlayerId;
- (void)setPlayerDetailModel:(id)arg1;
- (id)playerDetailModel;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
@end
