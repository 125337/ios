@interface OpenIMFriendViewController : MMUIViewController <MMTableViewDelegate, contactInfoDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, ContactSearchLogicDelegate>
{
    ContactSearchLogic * _contactSearchLogic; // +0x68
    UIImageView * _searchBarWrap; // +0x70
    UIView * _searchBarSuperView; // +0x78
    UIButton * _backButton; // +0x80
    WCSearchBar * _searcher; // +0x88
    BOOL _bForbidSearchControllerCallBack; // +0x90
    WCTimeLineFooterView * _loadingFooterView; // +0x98
    UIView * _emptyFooterView; // +0xa0
    MMUILabel * _emptyFooterLable; // +0xa8
    MMTableView * m_tableView; // +0xb0
    BOOL _bIsSearchingFromNetwork; // +0xb8
    NSString * _reportSessionId; // +0xc0
    BOOL _islastVCNavBarHidden; // +0xc8
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
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

