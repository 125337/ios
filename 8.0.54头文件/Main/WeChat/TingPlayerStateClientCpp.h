@interface TingPlayerStateClientCpp : UnitRCObjcBaseProxyClass <TingPlayerStateClient>
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onPlayInfoEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onActivated:(id)arg1 taskId:(id)arg2 update:(BOOL)arg3;
- (void)onInactivated:(id)arg1 update:(BOOL)arg2;
@end

