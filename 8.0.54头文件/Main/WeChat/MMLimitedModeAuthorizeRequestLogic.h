@interface MMLimitedModeAuthorizeRequestLogic : NSObject <MMLimitedModeVerifyPasswordLogicDelegate, MMLimitedModeIndependentVerifyViewControllerDelegate, ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x8
    MMLimitedModeVerifyPasswordLogic * m_limitedModeVerifyPasswordLogic; // +0x10
    CMessageWrap * m_authorizeRequestMessageWrap; // +0x18
    UINavigationController * m_navigationController; // +0x20
    id <MMLimitedModeAuthorizeRequestLogicDelegate> _m_delegate; // +0x28
    NSString * _m_accessTitle; // +0x30
    NSString * _m_accessDesc; // +0x38
    CMessageWrap * _m_accessMessage; // +0x40
    NSString * _m_bizKey; // +0x48
    long long _m_bizType; // +0x50
    MMUIViewController * _vc; // +0x58
}
- (void)checkLimitedModeVerifyPassword;
- (void)checkLoginPassWord;
- (void)checkIndependentPassWord;
- (void)setVc:(id)arg1;
- (void)forMessage:(id)arg1;
- (void)forMessage:(id)arg1 useNewMsgType:(BOOL)arg2;
- (void)onCheckPasswordExist:(BOOL)arg1 isNeverUse:(BOOL)arg2 success:(BOOL)arg3 errMsg:(id)arg4;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (id)m_navigationController;
- (void)setM_navigationController:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_accessTitle;
- (void)setM_accessTitle:(id)arg1;
- (id)m_accessDesc;
- (void)setM_accessDesc:(id)arg1;
- (id)m_accessMessage;
- (void)setM_accessMessage:(id)arg1;
- (id)m_bizKey;
- (void)setM_bizKey:(id)arg1;
- (long long)m_bizType;
- (void)setM_bizType:(long long)arg1;
- (id)vc;
- (void).cxx_destruct;
@end

