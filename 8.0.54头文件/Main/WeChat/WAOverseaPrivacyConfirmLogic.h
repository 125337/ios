@interface WAOverseaPrivacyConfirmLogic : NSObject <ServiceAuthExt>
{
    id /* block */ _completeAction; // +0x8
}
+ (BOOL)isNeedOverseaPrivacyConfirm;
- (void)requestOverseaPrivacyWithCompleteAction:(id /* block */)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onCancelServiceAuth;
- (id /* block */)completeAction;
- (void)setCompleteAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

