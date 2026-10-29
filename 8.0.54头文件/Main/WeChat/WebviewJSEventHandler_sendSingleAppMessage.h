@interface WebviewJSEventHandler_sendSingleAppMessage : WebviewJSEventHandlerBase <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate, PBMessageObserverDelegate>
{
    JSApiSelectSessionViewController * m_oSelectSessionViewController; // +0x8
    JSApiSelectContactsViewController * m_oSelectContactViewController; // +0x10
    JSEvent * m_oJSEvent; // +0x18
    CContact * m_oSelectedContact; // +0x20
    NSString * m_nsAppid; // +0x28
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)cancelEndJSEnvent;
- (void)confirmEndJSEvent;
- (void)dealloc;
- (void)OnJSApiSelectContactsViewControllerBack;
- (BOOL)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerBack;
- (BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBizResponseCGIWrap:(id)arg1;
- (void)getBizUserOpenIdRequest;
- (void)sendAppMessage;
- (void).cxx_destruct;
@end

