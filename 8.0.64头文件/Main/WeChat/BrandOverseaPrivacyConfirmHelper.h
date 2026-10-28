@interface BrandOverseaPrivacyConfirmHelper : MMObject
+ (BOOL)isNeedOverseaPrivacyConfirm;
+ (BOOL)shouldShowCloseOverseaPrivacyConfirm;
+ (void)requestOpenOverseaPrivacyAuthorizationWithOpenBlock:(id /* block */)arg1;
+ (void)requestCloseOverseaPrivacyAuthorizationWithCloseBlock:(id /* block */)arg1;
+ (void)setOverseaPrivacyConfirmLogic:(id)arg1;
+ (id)getOverseaPrivacyConfirmLogic;
@end
