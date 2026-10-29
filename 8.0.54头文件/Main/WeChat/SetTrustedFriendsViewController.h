@interface SetTrustedFriendsViewController : MMUIViewController <ChatRoomMemberGridViewDelegate, TrustedFriendsLogicDelegate, SetTrustedFriendTipsViewDelegate, ILinkEventExt>
{
    BOOL _m_isDeleting; // +0x68
    NSString * _tipWording; // +0x70
    MMTableViewInfo * _m_tableViewInfo; // +0x78
    TrustedFriendsLogic * _m_trustedFriendsLogic; // +0x80
    WeToast * _m_toastView; // +0x88
    SetTrustedFriendTipsView * _m_tipsView; // +0x90
}
- (id)init;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)onPressBackBtn;
- (void)addMember;
- (void)setShowRemoveMember;
- (void)onDeleteMember:(id)arg1;
- (void)didStartCGI:(unsigned int)arg1;
- (void)didFailedCGI:(unsigned int)arg1 error:(unsigned int)arg2 msg:(id)arg3;
- (void)didFinishGetTrustedFriends:(id)arg1 contacts:(id)arg2;
- (void)didFinishSyncTrustedFriends:(id)arg1 contacts:(id)arg2;
- (void)didAddTrustedFriendsLocally:(id)arg1 contacts:(id)arg2;
- (void)didRemoveTrustedFriendsLocally:(id)arg1 contacts:(id)arg2;
- (BOOL)hasSetTrustedFriend;
- (void)onPressDoneBtn;
- (void)didAlertViewWithReason:(unsigned int)arg1 isCancelButton:(BOOL)arg2;
- (void)goBackToMySetting;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)initNavigationBar;
- (void)initTableView;
- (id)makeHeaderView;
- (void)initMemberView;
- (void)reloadMemberView;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListSection:(id)arg1;
- (unsigned long long)getMemberViewColumnCount;
- (void)relayoutNaviBarButton:(BOOL)arg1;
- (void)tryShowNotEnoughTips;
- (void)onClose;
- (id)tipWording;
- (void)setTipWording:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_trustedFriendsLogic;
- (void)setM_trustedFriendsLogic:(id)arg1;
- (id)m_toastView;
- (void)setM_toastView:(id)arg1;
- (id)m_tipsView;
- (void)setM_tipsView:(id)arg1;
- (BOOL)m_isDeleting;
- (void)setM_isDeleting:(BOOL)arg1;
- (void).cxx_destruct;
@end

