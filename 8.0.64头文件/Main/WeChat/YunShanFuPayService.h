@interface YunShanFuPayService : NSObject <WCPayLogicMgrExt, MMUseCaseCallback, ThirdPayExt>
{
    LiteAppDynamicModuleCallback * _callback; // +0x8
}
- (void)dealloc;
- (void)startYunShanFuPay:(id)arg1 controller:(id)arg2 callback:(id)arg3;
- (void)handleApplicationNotification:(id)arg1;
- (void)call:(id)arg1;
- (void)ThirdPayCallback:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
