@interface SayHelloViewController : MMUIViewController <SeePeopleNearByUIDelegate, IOpenImResourceMgrExt, FindContactSearchViewCellInfoDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, SayHelloDataLogicDelegate, WCActionSheetDelegate, ContactsItemViewDelegate, VerifyPhoneDelegate>
{
    MMTableView * m_tableView; // +0x70
    MMTableViewInfo * m_tableViewInfoNoHello; // +0x78
    UIView * m_headerSearchView; // +0x80
    FindContactSearchViewCellInfo * m_searchInfo; // +0x88
    unsigned int m_uiScene; // +0x90
    SayHelloDataLogic * m_DataLogic; // +0x98
    UILabel * m_labelTip; // +0xa0
    CPushContact * m_selectedContact; // +0xa8
    MMNearByHeaderView * m_nearByHeaderView; // +0xb0
    SeePeopleNearByLogicController * m_peopleNearByLogicController; // +0xb8
    SendVerifyMsgLogicController * m_sendVerifylogicVC; // +0xc0
    MMUIButton * m_addPhoneTipBtn; // +0xc8
    BOOL _fromSayHelloButton; // +0xd0
    NSString * _reportSessionId; // +0xd8
    unsigned long long _pageEnterTime; // +0xe0
    unsigned long long _maxExposeCellIndex; // +0xe8
    NSMutableSet * _expandedContacts; // +0xf0
    MMUISearchBar * _headerSearchBar; // +0xf8
}
+ (void)OnViewDetail:(id)arg1 prarentViewController:(id)arg2;
+ (void)reportFriendAssistAction:(unsigned long long)arg1 forContact:(id)arg2;
- (void)registerNewFriendsReportLifecycle;
- (void)unregisterNewFriendsReportLifecycle;
- (BOOL)isNewFriendsReportPageVisible;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)setupReportData;
- (void)reportPageOut;
- (void)reportClickSayHelloMobileContactsAdd;
- (void)reportClickSayHelloSearchAccount;
- (void)reportClickSayHelloFriendsAddButtonAddressbook;
- (void)reportClickSayHello:(id)arg1 extraDic:(id)arg2;
- (void)initData;
- (void)initTableView;
- (void)onClearNearHeaderClicked:(id)arg1;
- (void)onClearMyLbsDataFinishedWithResult:(BOOL)arg1;
- (BOOL)shouldShowNearByHeaderView;
- (id)makeNearByHeaderView;
- (id)makeNewFriendHeaderView;
- (void)updateHeaderView;
- (void)updateDuoSearchBarHeight;
- (void)addMobileFriend;
- (void)setupLabelTipIfNeeded;
- (void)updateNoHello;
- (void)onAddContact;
- (void)onMoreButtonClicked:(id)arg1;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)handelViewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initDataAndView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)updateMaxExposeCellIndexFromVisibleCells;
- (void)dealloc;
- (void)willAppear;
- (BOOL)isSeachActive;
- (BOOL)shouldInteractivePop;
- (void)OnSayHelloDataChange;
- (id)getViewController;
- (void)bindPhoneReturn;
- (void)updateOpenImContactResource;
- (void)onGetOpenImResourceDone:(id)arg1;
- (id)GetClearTip;
- (void)OnClear:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (void)onContactsItemViewHeightChanged:(id)arg1;
- (void)makeHelloCell:(id)arg1 helloMsg:(id)arg2 delegate:(id)arg3;
- (void)OnSayHelloDataVerifyContactOK:(id)arg1;
- (void)OnSayHelloDataSendVerifyMsg:(id)arg1;
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
- (void)onCancelSearch;
- (void)onFindContactSearchViewDidPresentSearch:(id)arg1;
- (void)onFindContactSearchViewSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)registerYReportSdk;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (BOOL)fromSayHelloButton;
- (void)setFromSayHelloButton:(BOOL)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (unsigned long long)pageEnterTime;
- (void)setPageEnterTime:(unsigned long long)arg1;
- (unsigned long long)maxExposeCellIndex;
- (void)setMaxExposeCellIndex:(unsigned long long)arg1;
- (id)expandedContacts;
- (void)setExpandedContacts:(id)arg1;
- (id)headerSearchBar;
- (void)setHeaderSearchBar:(id)arg1;
- (void).cxx_destruct;
@end
