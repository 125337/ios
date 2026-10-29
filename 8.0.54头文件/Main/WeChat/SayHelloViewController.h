@interface SayHelloViewController : MMUIViewController <SeePeopleNearByUIDelegate, IOpenImResourceMgrExt, FindContactSearchViewCellInfoDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, SayHelloDataLogicDelegate, WCActionSheetDelegate, ContactsItemViewDelegate, VerifyPhoneDelegate>
{
    MMTableView * m_tableView; // +0x68
    MMTableViewInfo * m_tableViewInfoNoHello; // +0x70
    UIView * m_headerSearchView; // +0x78
    FindContactSearchViewCellInfo * m_searchInfo; // +0x80
    unsigned int m_uiScene; // +0x88
    SayHelloDataLogic * m_DataLogic; // +0x90
    UILabel * m_labelTip; // +0x98
    CPushContact * m_selectedContact; // +0xa0
    MMNearByHeaderView * m_nearByHeaderView; // +0xa8
    SeePeopleNearByLogicController * m_peopleNearByLogicController; // +0xb0
    SendVerifyMsgLogicController * m_sendVerifylogicVC; // +0xb8
    BOOL _fromSayHelloButton; // +0xc0
    NSMutableSet * _expandedContacts; // +0xc8
}
+ (void)OnViewDetail:(id)arg1 prarentViewController:(id)arg2;
+ (void)reportFriendAssistAction:(unsigned long long)arg1 forContact:(id)arg2;
- (void)initData;
- (void)initTableView;
- (void)onClearNearHeaderClicked:(id)arg1;
- (void)onClearMyLbsDataFinishedWithResult:(BOOL)arg1;
- (BOOL)shouldShowNearByHeaderView;
- (id)makeNearByHeaderView;
- (id)makeNewFriendHeaderView;
- (void)updateHeaderView;
- (void)addMobileFriend;
- (void)updateNoHello;
- (void)onAddContact;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
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
- (void)onFindContactSearchViewDidPresentSearch:(id)arg1;
- (void)onFindContactSearchViewSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)registerYReportSdk;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (BOOL)fromSayHelloButton;
- (void)setFromSayHelloButton:(BOOL)arg1;
- (id)expandedContacts;
- (void)setExpandedContacts:(id)arg1;
- (void).cxx_destruct;
@end

