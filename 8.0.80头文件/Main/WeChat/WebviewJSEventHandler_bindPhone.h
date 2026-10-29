@interface WebviewJSEventHandler_bindPhone : WebviewJSEventHandlerBase <WCAccountBindPhoneControlLogicDelegate>
{
    WCAccountBindPhoneControlLogic * m_bindLogic; // +0x8
    NSString * m_nsPhoneBeforeOp; // +0x10
    BOOL m_isChangeOp; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (BOOL)hasBinded;
- (void)bindPhoneReturn;
- (void).cxx_destruct;
@end
