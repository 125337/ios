@interface WeDropReceiveSayGoodbyeEvent : WeDropReceiveEvent
{
    WeDropBaseServerHandler * _server; // +0x8
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)waitGoodbye;
- (id)server;
- (void)setServer:(id)arg1;
- (void).cxx_destruct;
@end
