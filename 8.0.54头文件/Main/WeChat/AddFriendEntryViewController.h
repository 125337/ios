@interface AddFriendEntryViewController : MMUIViewController <FindContactSearchViewCellInfoDelegate, MMTableViewInfoDelegate, InviteFriendLogicDelegate>
{
    FindContactSearchViewCellInfo * m_headerSearchView; // +0x68
    UIView * m_searchFooterView; // +0x70
    UIButton * m_myQRCodeBtn; // +0x78
    UILabel * m_myNameLabel; // +0x80
    NewPersonalQRCodeViewController * m_myQRCodeCard; // +0x88
    NSString * m_nsUserNameToFind; // +0x90
    MMTableViewInfo * m_tableViewInfo; // +0x98
    CrossfadeAnimationController * m_transitionInstance; // +0xa0
    InviteFriendLogic * m_inviteLogic; // +0xa8
    BOOL _m_bShowInvite; // +0xb0
    unsigned int _searchScene; // +0xb4
    unsigned int _inviteScene; // +0xb8
}
- (void)pluginsChanged:(id)arg1;
- (void)onShowMyQrCode;
- (void)onShowInviteList:(id)arg1;
- (void)layoutSearchFooterView;
- (void)initSearchFooterView;
- (void)makeSearchBarCell:(id)arg1;
- (void)onClickSearchCell:(id)arg1;
- (void)reloadData;
- (id)init;
- (void)dealloc;
- (BOOL)shouldInteractivePop;
- (void)onSelectCell:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateViewWhenSelectTab:(BOOL)arg1;
- (void)initTableView;
- (void)initTitle;
- (void)initView;
- (void)initLeftButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)onCancel:(id)arg1;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)onRadarSearchViewShow;
- (void)onRadarSearchCreateViewShow;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)onMainWindowFrameChanged;
- (void)onFindContactSearchViewDidPresentSearch:(id)arg1;
- (void)onFindContactSearchViewSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)registerYReportSdk;
- (id)m_nsUserNameToFind;
- (void)setM_nsUserNameToFind:(id)arg1;
- (BOOL)m_bShowInvite;
- (void)setM_bShowInvite:(BOOL)arg1;
- (unsigned int)searchScene;
- (void)setSearchScene:(unsigned int)arg1;
- (unsigned int)inviteScene;
- (void)setInviteScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

