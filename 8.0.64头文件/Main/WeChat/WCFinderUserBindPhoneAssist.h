@interface WCFinderUserBindPhoneAssist : NSObject <VerifyPhoneDelegate>
{
    id /* block */ _complete; // +0x8
    UIViewController * _fromVC; // +0x10
}
+ (void)checkWithUserPrepare:(id)arg1 type:(long long)arg2 isRegChain:(BOOL)arg3 fromVC:(id)arg4 complete:(id /* block */)arg5;
- (void)showBindPhoneView:(id)arg1 type:(long long)arg2;
- (void)showAlertWithTitle:(id)arg1 content:(id)arg2;
- (void)cancelBindPhone;
- (void)continueBindPhone;
- (void)bindPhoneReturn;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (void).cxx_destruct;
@end
