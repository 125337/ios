@interface WXPLiteAppRealnameService : NSObject <WCPayRealnameSelectGuardianViewControllerDelegate>
{
    UIViewController * _curViewController; // +0x8
    WCPayRealnameSelectGuardianViewController * _selectGuardianVC; // +0x10
    id /* block */ _verifyParentCallback; // +0x18
}
- (void)startUnderAgeParentVerify:(id)arg1 dict:(id)arg2 callback:(id /* block */)arg3;
- (void)selectGuardianViewControllerDidCancel;
- (void)selectGuardianViewControllerRequestToHandleRouteInfo:(id)arg1;
- (void)selectGuardianViewControllerDidVerifyParentFromLiteApp:(BOOL)arg1 appid:(id)arg2 path:(id)arg3 query:(id)arg4;
- (void)notifyRealNameResult:(id)arg1;
- (void)notifyRealNameCancel;
- (id)curViewController;
- (void)setCurViewController:(id)arg1;
- (id)selectGuardianVC;
- (void)setSelectGuardianVC:(id)arg1;
- (id /* block */)verifyParentCallback;
- (void)setVerifyParentCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
