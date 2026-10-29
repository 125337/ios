@interface CContactVerifyLogic : MMObject <OpenIMContactVerifyLogicDelegate, NormalContactVerifyLogicDelegate, UITextFieldDelegate, VerifyUserSpamTipViewControllerDelegate>
{
    NSArray * m_arrVerifyContactWrap; // +0x8
    UIView * m_parentView; // +0x10
    NSString * m_nsVerifyValue; // +0x18
    MMLoadingView * m_loadingView; // +0x20
    unsigned int m_uiOpCode; // +0x28
    BOOL m_bFromChatRoom; // +0x2c
    BOOL m_bNotShowAlert; // +0x2d
    BOOL m_bNeedSaveToLocalDB; // +0x2e
    unsigned int m_uiFriendScene; // +0x30
    id <contactVerifyLogicDelegate> m_delegate; // +0x38
    NormalContactVerifyLogic * m_normalVerifyLogic; // +0x40
    OpenIMContactVerifyLogic * m_openIMVerifyLogic; // +0x48
    unsigned int m_contactVerifyUserSpamFailNumber; // +0x50
    NSString * m_nsStartLoadingText; // +0x58
    NSString * m_nsStartLoadingOKText; // +0x60
    id <contactVerifyLogicDelegate> m_sendRequestDelegate; // +0x68
    id <ContactVerifyPreCheckLogicDelegate> _m_preCheckDelegate; // +0x70
    unsigned long long _m_qrAddScene; // +0x78
    NSString * _m_reportInfo; // +0x80
    NSData * _m_spamContext; // +0x88
    WCUIAlertView * _alertView; // +0x90
}
+ (id)generateClientMsgIdForVerifyUser:(id)arg1;
- (id)init;
- (void)setM_qrAddScene:(unsigned long long)arg1;
- (void)setM_reportInfo:(id)arg1;
- (void)reset;
- (id)getLoadingText;
- (id)getLoadingOkText;
- (void)startLoading;
- (void)stopLoading;
- (void)stopLoadingAndShowOK;
- (id)filterString:(id)arg1;
- (BOOL)needSaveToLocalDB;
- (BOOL)needSetSayHelloStatus;
- (void)SaveToLocalDB;
- (BOOL)doVerify:(id)arg1;
- (id)verifyValue;
- (void)dealloc;
- (unsigned int)getContactVerifyUserSpamFailNumber;
- (void)doVerifyByAlertView;
- (id)getAlertTitle;
- (id)getAlertMessage;
- (void)showVerifyAlert;
- (void)onUserNotVerifyUseDoVerify:(BOOL)arg1 antispamTicket:(id)arg2;
- (void)onUserVerifyUseDoVerifyNeedConfirm:(BOOL)arg1;
- (void)startForSendVerifyRequest:(id)arg1 opCode:(unsigned int)arg2 parentView:(id)arg3 fromChatRoom:(BOOL)arg4;
- (void)startForAddVerifyMsg:(id)arg1 parentView:(id)arg2;
- (void)startForAddVerifyMsg:(id)arg1 parentView:(id)arg2 verifyMsg:(id)arg3;
- (void)startForVerifyOK:(id)arg1 parentView:(id)arg2;
- (void)startForSendVerifyMsg:(id)arg1 parentView:(id)arg2 verifyMsg:(id)arg3;
- (BOOL)sendVerifyUserPreCheck:(id)arg1 opcode:(unsigned int)arg2;
- (BOOL)sendOpenIMVerifyUserPreCheck:(id)arg1 antispamTicket:(id)arg2 chatContact:(id)arg3;
- (void)OnContinueSendRequest;
- (void)handleVerifyOk:(id)arg1;
- (void)clearClearStrangerPermission:(id)arg1;
- (void)ProcessStrangerContactTag:(id)arg1;
- (BOOL)isEnterpriseBrand;
- (BOOL)isBrandAccount;
- (BOOL)isNormalSayHelloContact;
- (void)onContactVerifyFail:(id)arg1 isOpenIM:(BOOL)arg2 antispamTicket:(id)arg3;
- (void)handleVerifyErrorNeedVerifyUser;
- (void)doVerifyFillVerifyValue;
- (void)doSendRequestContactVerifyFillVerifyMsg;
- (void)onNormalContactVerifyDone:(id)arg1 encodeUserName:(id)arg2 msgId:(unsigned long long)arg3;
- (void)onNormalContactVerifyFail:(id)arg1 andVerifyUserResponse:(id)arg2;
- (void)showVerifyUserSpamTipViewController:(id)arg1;
- (void)onNormalContactVerifyPreCheckDone:(id)arg1 opcode:(unsigned int)arg2;
- (void)onNormalContactVerifyPreChecFail:(id)arg1 opcode:(unsigned int)arg2 baseResponse:(id)arg3 andVerifyUserResponse:(id)arg4;
- (void)onOpenIMContactVerifyPreCheckDone:(id)arg1;
- (void)onOpenIMContactVerifyPreCheckFail:(id)arg1 baseResponse:(id)arg2;
- (void)onOpenIMContactVerifyDone:(id)arg1 msgId:(unsigned long long)arg2;
- (void)onOpenIMContactVerifyFail:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bNotShowAlert;
- (void)setM_bNotShowAlert:(BOOL)arg1;
- (id)m_nsStartLoadingText;
- (void)setM_nsStartLoadingText:(id)arg1;
- (id)m_nsStartLoadingOKText;
- (void)setM_nsStartLoadingOKText:(id)arg1;
- (id)m_sendRequestDelegate;
- (void)setM_sendRequestDelegate:(id)arg1;
- (id)m_preCheckDelegate;
- (void)setM_preCheckDelegate:(id)arg1;
- (unsigned long long)m_qrAddScene;
- (id)m_reportInfo;
- (id)m_spamContext;
- (void)setM_spamContext:(id)arg1;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (void).cxx_destruct;
@end
