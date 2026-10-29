@interface EcsMidasPayMgr : MMUserService <MMServiceProtocol>
{
    NSString * _payingAppId; // +0x8
    id /* block */ _midasPayCallBack; // +0x10
    EcsMidasPayLogger * _midasPayLogger; // +0x18
}
+ (int)midasPayResultCode2PaymentActionType:(long long)arg1;
- (void)onServiceInit;
- (void)startLogger;
- (void)checkWXApi;
- (void)registerPayWithAppId:(id)arg1 callback:(id /* block */)arg2;
- (void)endPayWithAppId:(id)arg1;
- (id)payingAppId;
- (void)setPayingAppId:(id)arg1;
- (id /* block */)midasPayCallBack;
- (void)setMidasPayCallBack:(id /* block */)arg1;
- (id)midasPayLogger;
- (void)setMidasPayLogger:(id)arg1;
- (void).cxx_destruct;
@end
