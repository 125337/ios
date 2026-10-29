@interface WeDropSendConnectToAwdlEvent : WeDropSendEvent <WeDropLocalNetworkExt, WeDropConnectionCallback>
{
    BOOL _connecting; // +0x8
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)startConnect;
- (void)notifyRemoteDidScan;
- (void)onInitNetworkFailed:(id)arg1 result:(id)arg2;
- (void)onInitNetworkOK:(id)arg1 deviceInfo:(id)arg2;
- (void)retryConnect;
- (BOOL)connecting;
- (void)setConnecting:(BOOL)arg1;
@end
