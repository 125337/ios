@interface WeDropReceiveConnectionWaitAWDLEvent : WeDropReceiveEvent <INearConnectionServiceExt>
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)onGotConnectionFromRemote;
- (void)onNearConnectionConnected:(id)arg1 port:(int)arg2;
@end
