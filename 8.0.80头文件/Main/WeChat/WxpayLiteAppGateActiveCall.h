@interface WxpayLiteAppGateActiveCall : NSObject
{
    long long _callId; // +0x8
    NSString * _appId; // +0x10
    id /* block */ _storeCallback; // +0x18
}
- (long long)callId;
- (void)setCallId:(long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id /* block */)storeCallback;
- (void)setStoreCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
