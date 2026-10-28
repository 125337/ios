@interface AddFriendEntryViewController : MMUIViewController <FindContactSearchViewCellInfoDelegate, IMMQRCodeExt, NewPersonalQRCodeViewDelegate, MMTableViewInfoDelegate, InviteFriendLogicDelegate>
{
    FindContactSearchViewCellInfo * m_headerSearchView; // +0x70
    NewPersonalQRCodeViewController * m_myQRCodeCard; // +0x78
    NSString * m_nsUserNameToFind; // +0x80
    MMTableViewInfo * m_tableViewInfo; // +0x88
    CrossfadeAnimationController * m_transitionInstance; // +0x90
    InviteFriendLogic * m_inviteLogic; // +0x98
    BOOL _m_bShowInvite; // +0xa0
    unsigned int _searchScene; // +0xa4
    unsigned int _inviteScene; // +0xa8
    unsigned int _pageMode; // +0xac
    NSString * _m_sessionId; // +0xb0
    NewDesignContactQRCodeInfo * _colorQrCodeInfo; // +0xb8
    NewDesignContactQRCodeInfo * _whiteQrCodeInfo; // +0xc0
    NewDesignContactQRCodeInfo * _blackQrCodeInfo; // +0xc8
}
- (void)setupReportFriendsAddData;
- (void)reportClickFriendsAddSearchAccountButton;
- (void)reportClickFriendsAddScanFriendQRButton;
- (void)reportClickFriendsAddMobileContactsButton;
- (void)reportClickFriendsAddRadarAddButton;
- (void)reportClickFriendsAddWecomContactsButton;
- (void)reportClickFriendsAddFace2faceJoinGroupButton;
- (void)reportClickFriendsAddOfficialAccountsButton;
- (void)reportClickFriendsAddServiceAccountButton;
- (void)reportClickFriendsAddMyQRCodeButton;
- (void)reportClickFriendsAddSearchTrigger;
- (void)reportClickFriendsAddActionButton:(id)arg1;
- (void)pluginsChanged:(id)arg1;
- (void)onShowMyQrCode;
- (void)onShowInviteList:(id)arg1;
- (void)makeSearchBarCell:(id)arg1;
- (void)makeQRCodeCell:(id)arg1 CellInfo:(id)arg2;
- (void)onClickSearchCell:(id)arg1;
- (void)onQRButtonClicked;
- (void)reloadData;
- (id)init;
- (void)dealloc;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (id)codeImageForPageMode:(unsigned int)arg1;
- (void)resetQrCodeInfo;
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
- (void)traitCollectionDidChange:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)onRadarSearchViewShow;
- (void)onRadarSearchCreateViewShow;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)onMainWindowFrameChanged;
- (void)onDidStartSearch;
- (void)onFindContactSearchViewDidPresentSearch:(id)arg1;
- (void)onFindContactSearchViewSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)changePersonalQRCodePageMode;
- (void)registerYReportSdk;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2 qrcodeStatus:(unsigned int)arg3;
- (void)reportClickFriendsAddButtonInRightTopMenuBtn;
- (id)m_nsUserNameToFind;
- (void)setM_nsUserNameToFind:(id)arg1;
- (id)m_sessionId;
- (void)setM_sessionId:(id)arg1;
- (BOOL)m_bShowInvite;
- (void)setM_bShowInvite:(BOOL)arg1;
- (unsigned int)searchScene;
- (void)setSearchScene:(unsigned int)arg1;
- (unsigned int)inviteScene;
- (void)setInviteScene:(unsigned int)arg1;
- (id)colorQrCodeInfo;
- (void)setColorQrCodeInfo:(id)arg1;
- (id)whiteQrCodeInfo;
- (void)setWhiteQrCodeInfo:(id)arg1;
- (id)blackQrCodeInfo;
- (void)setBlackQrCodeInfo:(id)arg1;
- (unsigned int)pageMode;
- (void)setPageMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end
