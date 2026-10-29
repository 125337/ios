@interface WeDropReceiveInitCheckPermissionEvent : WeDropReceiveEvent <WeDropNetworkExt, WeDropLocalNetworkExt, WeDropReceiveQRCodeCallback>
{
    BOOL _isIniting; // +0x8
    NSString * _startLocalNetworkTaskId; // +0x10
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)startPermissionCheck;
- (void)onPermissionCheckOK;
- (void)realInitSession;
- (void)retryInitQRCode;
- (void)retryRequestQRCode;
- (void)onLocalNetworkPermissionChanged:(BOOL)arg1;
- (void)onInitNetworkFailed:(id)arg1 result:(id)arg2;
- (void)onInitNetworkOK:(id)arg1 deviceInfo:(id)arg2;
- (id)startLocalNetworkTaskId;
- (void)setStartLocalNetworkTaskId:(id)arg1;
- (BOOL)isIniting;
- (void)setIsIniting:(BOOL)arg1;
- (void).cxx_destruct;
@end
