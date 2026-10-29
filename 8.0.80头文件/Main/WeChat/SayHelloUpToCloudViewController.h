@interface SayHelloUpToCloudViewController : SayHelloViewController <IOpenImResourceMgrExt, FindContactSearchViewCellInfoDelegate, MMRefreshTableFooterDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, SayHelloUpToCloudDataLogicDelegate, WCActionSheetDelegate, ContactsItemViewDelegate, VerifyPhoneDelegate>
{
    SayHelloUpToCloudDataLogic * m_upToCloudDataLogic; // +0xb0
    SendVerifyMsgLogicController * m_sendVerifylogicVC; // +0xb8
    BOOL m_bLoadingMore; // +0xc0
    BOOL m_bHasMoreItems; // +0xc1
    WCTimeLineFooterView * m_refreshFooterView; // +0xc8
    double m_refreshFooterLayoutWidth; // +0xd0
    MMUIButton * m_addPhoneTipBtn; // +0xd8
    BOOL _didAppear; // +0xe0
    BOOL _viewVisible; // +0xe1
    NSMutableSet * _expandedContacts; // +0xe8
    NSString * _accountUserName; // +0xf0
    unsigned long long _maxViewedVerifyRecordVersion; // +0xf8
}
+ (void)OnViewDetail:(id)arg1 prarentViewController:(id)arg2;
+ (void)reportFriendAssistAction:(unsigned long long)arg1 forContact:(id)arg2;
- (void)initData;
- (void)updateMaxViewedVerifyRecordVersionIfNeeded;
- (void)initTableView;
- (void)updateTableFooterHeaderView;
- (id)makeNewFriendHeaderView;
- (void)updateHeaderView;
- (void)addMobileFriend;
- (void)updateNoHello;
- (void)onAddContact;
- (void)onMoreButtonClicked:(id)arg1;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)handelViewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initDataAndView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)willAppear;
- (BOOL)isSeachActive;
- (BOOL)shouldInteractivePop;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (BOOL)refreshTableFooterViewIsLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)getMoreData;
- (void)OnSayHelloDataGetNext:(BOOL)arg1 isHasMoreItems:(BOOL)arg2;
- (void)OnSayHelloDataChange;
- (id)getViewController;
- (void)bindPhoneReturn;
- (void)updateOpenImContactResource;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (BOOL)canPerformTableViewHeightUpdate;
- (void)updateTableFooterFrame;
- (void)onContactsItemViewHeightChanged:(id)arg1;
- (void)makeHelloCell:(id)arg1 helloMsg:(id)arg2 delegate:(id)arg3;
- (void)OnSayHelloDataVerifyContactOK:(id)arg1;
- (void)OnSayHelloDataSendVerifyMsg:(id)arg1;
- (void)configureContactItemRightView:(id)arg1 contactItemView:(id)arg2;
- (double)getCellDescLabelRightMargin;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onMainWindowFrameChanged;
- (void)onFindContactSearchViewDidPresentSearch:(id)arg1;
- (void)onFindContactSearchViewSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)registerYReportSdk;
- (void)setupReportData;
- (void)reportPageOut;
- (void)reportClickSayHelloMobileContactsAdd;
- (void)reportClickSayHelloSearchAccount;
- (void)reportClickSayHelloFriendsAddButtonAddressbook;
- (void)reportClickSayHello:(id)arg1 extraDic:(id)arg2;
- (id)expandedContacts;
- (void)setExpandedContacts:(id)arg1;
- (id)accountUserName;
- (void)setAccountUserName:(id)arg1;
- (BOOL)didAppear;
- (void)setDidAppear:(BOOL)arg1;
- (BOOL)viewVisible;
- (void)setViewVisible:(BOOL)arg1;
- (unsigned long long)maxViewedVerifyRecordVersion;
- (void)setMaxViewedVerifyRecordVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
