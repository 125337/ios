@interface WeDropReceiveConnectionConnectedEvent : WeDropReceiveEvent <INearConnectionServiceExt>
{
    WeDropBaseServerHandler * _server; // +0x8
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)startListenAuth;
- (void)onGotAuthRequest:(id)arg1;
- (void)startListenCheckCapability;
- (void)onGotCheckCapabilityRequest:(id)arg1;
- (void)onNearConnectionDisconnected:(int)arg1 errMsg:(id)arg2;
- (id)server;
- (void)setServer:(id)arg1;
- (void).cxx_destruct;
@end
