@interface MMKindaRealNameManagerImpl : NSObject <WCPayPrivacyViewControllerDelegate, WCPayRealnameVerifyLogicDelegate, MMKindaRealNameManager>
{
    MMVoidITransmitKvDataCallback * _privacyVCCallBack; // +0x8
    MMVoidCallback * _realnameCancelCallBack; // +0x10
}
- (void)startRealNameImpl:(id)arg1 cancelCallback:(id)arg2 data:(id)arg3;
- (void)reportRealnameAction:(int)arg1;
- (void)callPrivacyDutyPageImpl:(id)arg1;
- (void)onWCPayPrivacyViewControllerClickAgree:(BOOL)arg1 marketingSwitchClosed:(BOOL)arg2;
- (void)goToRealNameInputUIImpl:(id)arg1 cancelCallback:(id)arg2 data:(id)arg3;
- (void)realnameVerifyLogicDidFinishWithTinyAppUri:(id)arg1;
- (void)startRealNameVerifyPhone:(id)arg1;
- (id)privacyVCCallBack;
- (void)setPrivacyVCCallBack:(id)arg1;
- (id)realnameCancelCallBack;
- (void)setRealnameCancelCallBack:(id)arg1;
- (void).cxx_destruct;
@end
