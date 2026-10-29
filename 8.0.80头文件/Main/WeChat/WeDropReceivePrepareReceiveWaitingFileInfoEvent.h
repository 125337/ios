@interface WeDropReceivePrepareReceiveWaitingFileInfoEvent : WeDropReceiveEvent <INearConnectionServiceExt>
{
    WeDropBaseServerHandler * _server; // +0x8
    unsigned long long _nextStatus; // +0x10
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)startListenPrepareSend;
- (void)onGotPrepareSendRequest:(id)arg1;
- (void)onNearConnectionDisconnected:(int)arg1 errMsg:(id)arg2;
- (id)server;
- (void)setServer:(id)arg1;
- (unsigned long long)nextStatus;
- (void)setNextStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
