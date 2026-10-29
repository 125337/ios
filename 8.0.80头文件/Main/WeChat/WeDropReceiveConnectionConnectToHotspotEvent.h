@interface WeDropReceiveConnectionConnectToHotspotEvent : WeDropReceiveEvent <WeDropLocalNetworkExt, WeDropReceiveConnectCallback, INearConnectionServiceExt>
{
    BOOL _isConnecting; // +0x8
    NSString * _startLocalNetworkTaskId; // +0x10
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)connectToHotspot;
- (void)onGotConnectionFromRemote;
- (void)retryConnectToHotspot;
- (void)onInitNetworkFailed:(id)arg1 result:(id)arg2;
- (void)onInitNetworkOK:(id)arg1 deviceInfo:(id)arg2;
- (void)onNearConnectionConnected:(id)arg1 port:(int)arg2;
- (id)startLocalNetworkTaskId;
- (void)setStartLocalNetworkTaskId:(id)arg1;
- (BOOL)isConnecting;
- (void)setIsConnecting:(BOOL)arg1;
- (void).cxx_destruct;
@end
