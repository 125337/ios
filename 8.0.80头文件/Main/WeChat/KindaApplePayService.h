@interface KindaApplePayService : NSObject <WCPayApplePayAuthorizationLogicDelegate, MMApplePayService>
{
    WCPayApplePayAuthorizationLogic * _applePayAuthorizationLogic; // +0x8
    MMVoidITransmitKvDataCallback * _callback; // +0x10
    MMVoidCallback * _finishApplePayCallBack; // +0x18
}
- (id)applePayAuthorizationLogic;
- (void)startRequestApplePayImpl:(id)arg1 callback:(id)arg2;
- (void)finishRequestApplePayImpl:(id)arg1 retcode:(int)arg2 callback:(id)arg3;
- (void)onApplePayAuthorizationDidAuthPayment:(id)arg1;
- (void)onApplePayAuthorizationDidCancel;
- (void)onApplePayAuthorizationDidFinish:(BOOL)arg1 paymentViewController:(id)arg2;
- (void)deleayFinishCallBack:(id)arg1;
- (id)covertAuthenAppleInfoFromPKPayment:(id)arg1;
- (void)setApplePayAuthorizationLogic:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)finishApplePayCallBack;
- (void)setFinishApplePayCallBack:(id)arg1;
- (void).cxx_destruct;
@end
