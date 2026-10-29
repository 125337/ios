@interface BindPhoneInfoViewController : AccountBaseViewController <PBMessageObserverDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    UIImageView * m_bindImageView; // +0x70
    UIButton * m_unChangeButton; // +0x78
    UIButton * m_inviteFriendButton; // +0x80
    id <VerifyPhoneDelegate> m_delegate; // +0x88
    MMTableViewInfo * m_tableViewInfo; // +0x90
    unsigned int m_uiFromScene; // +0x98
    NSString * m_nsOldPhone; // +0xa0
    WCAccountBindPhoneControlLogic * m_bindLogic; // +0xa8
    BOOL _isFromSetting; // +0xb0
    BOOL _showFullPhoneNum; // +0xb1
    LiteAppJsApiCallback * _callback; // +0xb8
    NSString * _sessionId; // +0xc0
}
- (id)initWithCallback:(id)arg1;
- (BOOL)hasBound;
- (id)getBoundPhone;
- (void)showInviteFriendView;
- (void)unBoundSucess;
- (void)onUnBindAccount;
- (void)startSyncAddressBook;
- (void)onBind;
- (void)onChange;
- (void)onUnBind;
- (void)onPrivacy;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)showNoBindView;
- (void)OnOperate;
- (void)updateInviteFriendBtnTitle;
- (void)showBindedView;
- (void)updateView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)dealloc;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned int)arg1;
- (BOOL)isFromSetting;
- (void)setIsFromSetting:(BOOL)arg1;
- (BOOL)showFullPhoneNum;
- (void)setShowFullPhoneNum:(BOOL)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
