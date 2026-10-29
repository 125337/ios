@interface WeDropSendWaitChooseDetinationEvent : WeDropSendEvent <INearConnectionServiceExt>
{
    WeDropBaseServerHandler * _server; // +0x8
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)onNearConnectionDisconnected:(int)arg1 errMsg:(id)arg2;
- (id)server;
- (void)setServer:(id)arg1;
- (void).cxx_destruct;
@end
