@interface BrandOverseaPrivacyConfirmLogic : MMObject <ServiceAuthExt>
{
    id /* block */ _openBlock; // +0x8
    id /* block */ _closeBlock; // +0x10
}
+ (BOOL)isNeedOverseaPrivacyConfirm;
+ (BOOL)shouldShowCloseOverseaPrivacyConfirm;
- (void)requestOpenOverseaPrivacyAuthorizationWithOpenBlock:(id /* block */)arg1;
- (void)requestCloseOverseaPrivacyAuthorizationWithCloseBlock:(id /* block */)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onCancelServiceAuth;
- (id /* block */)openBlock;
- (void)setOpenBlock:(id /* block */)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
