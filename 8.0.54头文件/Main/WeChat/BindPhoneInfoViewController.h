@interface BindPhoneInfoViewController : AccountBaseViewController <PBMessageObserverDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    UIImageView * m_bindImageView; // +0x68
    UIButton * m_unChangeButton; // +0x70
    UIButton * m_inviteFriendButton; // +0x78
    id <VerifyPhoneDelegate> m_delegate; // +0x80
    MMTableViewInfo * m_tableViewInfo; // +0x88
    unsigned int m_uiFromScene; // +0x90
    NSString * m_nsOldPhone; // +0x98
    WCAccountBindPhoneControlLogic * m_bindLogic; // +0xa0
    BOOL _showFullPhoneNum; // +0xa8
}
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
- (id)navigationBarBackgroundColor;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)dealloc;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned int)arg1;
- (BOOL)showFullPhoneNum;
- (void)setShowFullPhoneNum:(BOOL)arg1;
- (void).cxx_destruct;
@end

