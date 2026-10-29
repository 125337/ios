@interface WAJSEventHandler_startBindPhone : WAJSEventHandler_BaseEvent <VerifyPhoneDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    WCAccountBindPhoneControlLogic * _bindLogic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onBind;
- (void)bindPhoneReturn;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (id)bindLogic;
- (void)setBindLogic:(id)arg1;
- (void).cxx_destruct;
@end
