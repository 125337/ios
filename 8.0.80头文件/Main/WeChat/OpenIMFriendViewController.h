@interface OpenIMFriendViewController : MMUIViewController <MMTableViewDelegate, contactInfoDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, ContactSearchLogicDelegate>
{
    ContactSearchLogic * _contactSearchLogic; // +0x70
    UIImageView * _searchBarWrap; // +0x78
    UIView * _searchBarSuperView; // +0x80
    UIButton * _backButton; // +0x88
    WCSearchBar * _searcher; // +0x90
    BOOL _bForbidSearchControllerCallBack; // +0x98
    WCTimeLineFooterView * _loadingFooterView; // +0xa0
    UIView * _emptyFooterView; // +0xa8
    MMUILabel * _emptyFooterLable; // +0xb0
    MMTableView * m_tableView; // +0xb8
    BOOL _bIsSearchingFromNetwork; // +0xc0
    NSString * _reportSessionId; // +0xc8
    BOOL _islastVCNavBarHidden; // +0xd0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (BOOL)isSeachActive;
- (void)UISplitViewWillChangeSplitMode;
- (id)navigationBarBackgroundColor;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)initView;
- (void)initSearchBar;
- (void)initTable;
- (void)initSearchTableFoot;
- (void)updateEmptyFooterView:(id)arg1;
- (void)initData;
- (void)beginSearch;
- (void)didEndSearch;
- (void)setLoadingStatus;
- (void)OpenContactInfo:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)doSearchAction:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onContactSearchLogicDone:(id)arg1 FromScene:(unsigned int)arg2;
- (void)onContactSearchLogicFail:(id)arg1;
- (void)onBackBtnClick;
- (void)cancelButtonClicked;
- (BOOL)islastVCNavBarHidden;
- (void)setIslastVCNavBarHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end
