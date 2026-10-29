@interface SendVerifyMsgLogicController : NSObject <ContactVerifyPreCheckBusinessLogicDelegate, contactVerifyLogicDelegate>
{
    MMUIViewController * m_parentVC; // +0x8
    BOOL canOnCancel; // +0x10
    CContactVerifyPreCheckBusinessLogic * m_verifyPreCheckBusinessLogic; // +0x18
    SendVerifyMsgViewController * m_vc; // +0x20
    CContactVerifyLogic * m_oContactVerifyLogic; // +0x28
    BOOL _m_bVerifyToMe; // +0x30
    BOOL _m_needAnimationPopAfterOK; // +0x31
    BOOL _m_needVerifyPreCheck; // +0x32
    unsigned int _m_uiOpCode; // +0x34
    CContact * _m_oVerifyContact; // +0x38
    id <SendVerifyMsgViewControllerDelegate> _m_delegate; // +0x40
    id <contactVerifyLogicDelegate> _m_sendRequestDelegate; // +0x48
    CContact * _m_oChatContact; // +0x50
    CMessageWrap * _m_oSourceMsg; // +0x58
    unsigned long long _m_qrCodeAddFriendScene; // +0x60
    NSString * _verifyContent; // +0x68
    long long _contactInfoViewSource; // +0x70
}
- (id)initWithParentVC:(id)arg1;
- (void)startLogic;
- (void)doStartLogic;
- (void)onCancel;
- (void)onDismiss;
- (void)onContactVerifyLimitFail:(id)arg1;
- (void)onContactVerifyFail;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)disableUserPop;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)arg1 opcode:(unsigned int)arg2;
- (id)getVerifyPreCheckBusinessLogic;
- (id)getViewController;
- (id)m_oVerifyContact;
- (void)setM_oVerifyContact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_sendRequestDelegate;
- (void)setM_sendRequestDelegate:(id)arg1;
- (BOOL)m_bVerifyToMe;
- (void)setM_bVerifyToMe:(BOOL)arg1;
- (id)m_oChatContact;
- (void)setM_oChatContact:(id)arg1;
- (id)m_oSourceMsg;
- (void)setM_oSourceMsg:(id)arg1;
- (unsigned long long)m_qrCodeAddFriendScene;
- (void)setM_qrCodeAddFriendScene:(unsigned long long)arg1;
- (BOOL)m_needAnimationPopAfterOK;
- (void)setM_needAnimationPopAfterOK:(BOOL)arg1;
- (id)verifyContent;
- (void)setVerifyContent:(id)arg1;
- (unsigned int)m_uiOpCode;
- (void)setM_uiOpCode:(unsigned int)arg1;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (BOOL)m_needVerifyPreCheck;
- (void)setM_needVerifyPreCheck:(BOOL)arg1;
- (void).cxx_destruct;
@end

