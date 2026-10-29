@interface WxpayPlatformUiCoordinator : NSObject
{
    id /* block */ _presenter; // +0x8
    id /* block */ _navigateBack; // +0x10
    id /* block */ _complete; // +0x18
    BOOL _detached; // +0x20
    UIView * _toastView; // +0x28
    unsigned long long _toastToken; // +0x30
    NSUUID * _toastGeneration; // +0x38
}
- (id)initWithPresenter:(id /* block */)arg1 navigateBack:(id /* block */)arg2 complete:(id /* block */)arg3;
- (BOOL)dispatchKind:(unsigned char)arg1 app:(unsigned long long)arg2 page:(unsigned long long)arg3 epoch:(unsigned long long)arg4 token:(unsigned long long)arg5 payload:(id)arg6;
- (BOOL)handlesKind:(unsigned char)arg1;
- (void)performKind:(unsigned char)arg1 token:(unsigned long long)arg2 payload:(id)arg3;
- (id)parsePayload:(id)arg1;
- (void)showToast:(id)arg1 token:(unsigned long long)arg2;
- (void)hideToast:(unsigned long long)arg1;
- (void)removeToastCompleting:(BOOL)arg1;
- (void)installOverlay:(id)arg1 into:(id)arg2 center:(id)arg3;
- (void)detach;
- (void)finish:(unsigned long long)arg1 kind:(unsigned char)arg2 payload:(id)arg3;
- (void).cxx_destruct;
@end
