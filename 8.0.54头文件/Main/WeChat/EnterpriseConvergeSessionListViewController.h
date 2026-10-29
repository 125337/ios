@interface EnterpriseConvergeSessionListViewController : MMUIViewController <IEnterpriseConvergeSessionMgrExt, IEnterpriseGroupMgrExt, IMMNewSessionMgrExt, IEnterpriseBrandContactMgrExt, IEnterpriseBizTransferExt, EnterpriseConvergeSessionSearchControllerDelegate, EnterpriseBrandContactHelperDelegate, EnterpriseBrandSearchControllerDelegate, MMWebViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _fromScene; // +0x68
    MMTableView * _tableView; // +0x70
    MMTitleView * _titleView; // +0x78
    WCDataSearcher * _searcher; // +0x80
    NSObject * _searchController; // +0x88
    UIView * _footerView; // +0x90
    UIView * _footerViewBackground; // +0x98
    UIView * _emptyView; // +0xa0
    BOOL _isEntering; // +0xa8
    unsigned int _wwEntryType; // +0xac
    EnterpriseBrandContactHelper * _helper; // +0xb0
    NSArray * _convergeSessionList; // +0xb8
    EnterpriseOpenWeworkBottomBar * _openWeworkBottomBar; // +0xc0
    CContact * _mainBrandContact; // +0xc8
}
- (id)initWithMainBrandContact:(id)arg1 fromScene:(unsigned int)arg2;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initSearchBar;
- (void)hideSearchBar;
- (void)resetBannerTips;
- (void)initFooterView;
- (void)initWeworkEntry;
- (void)updateLeftBarItem;
- (void)updateTitleView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)willAppear;
- (void)willDisappear;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)updateChatBrandContactData;
- (void)updateMainBrandContactData;
- (id)getChatBrandContact;
- (void)reportSubBrandClick:(id)arg1 SubType:(int)arg2 unreadCount:(int)arg3;
- (void)report;
- (void)showRightTopMenuBtn:(id)arg1;
- (void)menuItemClick:(id)arg1;
- (void)openChatBrandInfo:(id)arg1;
- (void)openCreateChat:(id)arg1;
- (void)openFavSessionListView:(id)arg1;
- (void)openInviteColleages:(id)arg1;
- (void)openWework:(id)arg1;
- (void)reportExposeWeWorkBanner:(unsigned int)arg1;
- (void)createSingleChat:(id)arg1;
- (void)createChatroom:(id)arg1;
- (void)updateMemberToLocal:(id)arg1;
- (void)enterChat:(id)arg1;
- (void)reloadTable;
- (id)getMMSearchBar;
- (BOOL)shouldInteractivePop;
- (id)getViewController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)reloadWeworkEntryData:(id)arg1;
- (id)makeCell:(id)arg1;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (void)onEnterpriseConvergeSessionChanged:(id)arg1;
- (void)onQuitEnterpriseGroup:(id)arg1 errorCode:(int)arg2;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)onBizShareInfoResult:(int)arg1 errorMsg:(id)arg2 shareInfo:(id)arg3 mainBrandUserName:(id)arg4;
- (id)mainBrandContact;
- (void)setMainBrandContact:(id)arg1;
- (void).cxx_destruct;
@end

