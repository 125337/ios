@interface MMLimitedModeAuthorizationUtilLogic : NSObject <MMLimitedModeAuthorizeRequestViewControllerLogicDelegate, MMLimitedModeIndependentVerifyViewControllerDelegate, MMLimitedModeAuthorizeRequestLogicDelegate>
{
    NSString * m_bizKey; // +0x8
    long long m_bizType; // +0x10
    CMessageWrap * m_accessMessage; // +0x18
    NSString * m_accessTitle; // +0x20
    NSString * m_accessDesc; // +0x28
    BOOL m_isLoading; // +0x30
    long long m_verifyType; // +0x38
    MMLimitedModeAuthorizeRequestLogic * m_authorizeRequestLogic; // +0x40
    id <MMLimitedModeAuthorizationUtilLogicDelegate> _m_delegate; // +0x48
    MMUIViewController * _vc; // +0x50
}
+ (id)getAccessAuthorizationVerifyInfo;
- (BOOL)checkAccessAuthorizationHadApproveWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)startQuestAccessAuthorizationWithBizKey:(id)arg1 bizType:(long long)arg2 inView:(id)arg3;
- (void)startQuestAccessAuthorizationWithBizKey:(id)arg1 bizType:(long long)arg2 accessTitle:(id)arg3 accessDesc:(id)arg4 accessMessage:(id)arg5 inView:(id)arg6;
- (void)onTapAccessAuthorizationVerifyWithVerifyType:(long long)arg1 bizKey:(id)arg2 bizType:(long long)arg3 accessTitle:(id)arg4 accessDesc:(id)arg5 accessMessage:(id)arg6 inView:(id)arg7;
- (id)getAuthorizeRequestLogic;
- (void)verifyPasswordSuccessSaveAgreenAuthorizationInfo;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)OnForwardMessageSendSuccess;
- (void)onAuthorizeRequestVerifyPasswordSuccessTicket:(id)arg1;
- (void)onAuthorizeRequestVerifyPasswordSuccessAndAnimationEndedWithTicket:(id)arg1;
- (void)onAuthorizeRequestForwardMessageSendSuccess;
- (void)onAuthorizeRequestVerifyCancel;
- (void)makeDefaultAuthorizeRequestDisplayCellForBusiness:(id)arg1 cellLeftImageUrl:(id)arg2 cellLeftImage:(id)arg3 cellTitle:(id)arg4 needRoundIcon:(BOOL)arg5;
- (void)makePlayAuthorizeRequestDisplayCellForBusiness:(id)arg1 cellLeftImageUrl:(id)arg2 cellLeftImage:(id)arg3 cellTitle:(id)arg4 canAccessory:(BOOL)arg5;
- (void)makeLiveAuthorizeRequestDisplayCellForBusiness:(id)arg1 cellLeftImageUrl:(id)arg2 bareCellLeftImageUrl:(id)arg3 cellLeftImage:(id)arg4 cellTitle:(id)arg5 canAccessory:(BOOL)arg6;
- (void)makeNotSupportCell:(id)arg1;
- (BOOL)isShowAuthorizeRequestDisplayCell:(long long)arg1;
- (void)makeAuthorizeRequestDisplayCellForBusiness:(id)arg1 authorizeRequestMessage:(id)arg2;
- (void)tapAuthorizeRequestDisplayCellForBusinessWithAuthorizeRequestMessage:(id)arg1;
- (void)openWebView:(id)arg1 businessMessage:(id)arg2;
- (void)openWeApp:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (void).cxx_destruct;
@end
