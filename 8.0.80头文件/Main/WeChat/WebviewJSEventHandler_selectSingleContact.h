@interface WebviewJSEventHandler_selectSingleContact : WebviewJSEventHandlerBase <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate, PBMessageObserverDelegate>
{
    int m_enReturnValueSignedType; // +0x8
    JSApiSelectSessionViewController * m_oSelectSessionViewController; // +0x10
    JSApiSelectContactsViewController * m_oSelectContactViewController; // +0x18
    JSEvent * m_oJSEvent; // +0x20
    CContact * m_oSelectedContact; // +0x28
    unsigned int m_uiSelectMode; // +0x30
    NSString * m_nsBusiId; // +0x38
    NSString * m_nsAppid; // +0x40
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3 CurrentViewController:(id)arg4;
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
- (void)handlePayResponeCGIWrap:(id)arg1;
- (void)handleBizResponseCGIWrap:(id)arg1;
- (void)getIBGUserOpenIdRequest;
- (void)getBizUserOpenIdRequest;
- (void).cxx_destruct;
@end
