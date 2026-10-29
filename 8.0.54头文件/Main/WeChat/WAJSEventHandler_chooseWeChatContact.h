@interface WAJSEventHandler_chooseWeChatContact : WAJSEventHandler_BaseEvent <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate>
{
    CContact * m_oSelectedContact; // +0x8
    BOOL _isSingleConatct; // +0x10
    BOOL _isChatRoom; // +0x11
    JSApiSelectSessionViewController * _oSelectSessionViewController; // +0x18
    JSApiSelectContactsViewController * _oSelectContactViewController; // +0x20
}
- (void)handleJSEvent:(id)arg1;
- (void)cancelEndJSEnvent;
- (void)confirmEndJSEvent;
- (id)getRoomName:(id)arg1;
- (BOOL)isShowMobileName:(id)arg1 mobileName:(id)arg2;
- (void)dealloc;
- (void)OnJSApiSelectContactsViewControllerBack;
- (BOOL)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerBack;
- (BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (BOOL)isSingleConatct;
- (void)setIsSingleConatct:(BOOL)arg1;
- (BOOL)isChatRoom;
- (void)setIsChatRoom:(BOOL)arg1;
- (id)oSelectSessionViewController;
- (void)setOSelectSessionViewController:(id)arg1;
- (id)oSelectContactViewController;
- (void)setOSelectContactViewController:(id)arg1;
- (void).cxx_destruct;
@end

