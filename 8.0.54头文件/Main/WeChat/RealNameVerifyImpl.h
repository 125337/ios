@interface RealNameVerifyImpl : NSObject
{
    LiteAppDynamicModuleCallback * _callBack; // +0x8
    UIViewController * _vc; // +0x10
    NSDictionary * _option; // +0x18
}
- (void)startRealNameVerify:(id)arg1 currentVc:(id)arg2 resultCallback:(id)arg3;
- (void)handleSuccessNotification:(id)arg1;
- (void)handleCancelNotification:(id)arg1;
- (void)dealloc;
- (id)callBack;
- (void)setCallBack:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)option;
- (void)setOption:(id)arg1;
- (void).cxx_destruct;
@end

