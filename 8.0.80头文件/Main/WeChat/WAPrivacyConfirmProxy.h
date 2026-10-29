@interface WAPrivacyConfirmProxy : NSObject <IWAPrivacyConfirmService>
{
    WOAPPrivacyConfirmLogic * _privacyConfirmLogic; // +0x8
    WAOverseaPrivacyConfirmLogic * _overseaPrivacyLogic; // +0x10
}
+ (BOOL)isNeedPrivacyConfirm;
+ (BOOL)isNeedOverseaPrivacyConfirm;
- (void)requestPrivacyConfirmrequirement:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (void)requestOverseaPrivacyWithCompletion:(id /* block */)arg1;
- (id)privacyConfirmLogic;
- (void)setPrivacyConfirmLogic:(id)arg1;
- (id)overseaPrivacyLogic;
- (void)setOverseaPrivacyLogic:(id)arg1;
- (void).cxx_destruct;
@end
