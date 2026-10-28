@interface MMAuthorizeGameInfoViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ILinkEventExt, MMAuthorizeGameInfoHalfScreenViewDelegate>
{
    id <MMAuthorizeViewControllerDelegate> _delegate; // +0x70
    SetUserGrantInfoBuffer * _setUserGrantInfoBuffer; // +0x78
    MMTableView * _tableView; // +0x80
    MMAuthorizeScopeTopView * _tableHeaderView; // +0x88
    UIView * _tableFooterView; // +0x90
    UIButton * _comfirmBtn; // +0x98
    UIButton * _denyBtn; // +0xa0
    UIView * _footerViewSeperator; // +0xa8
    RichTextView * _richTextView; // +0xb0
    GetUserGrantInfoBuffer * _getUserGrantInfoBuffer; // +0xb8
    NSMutableArray * _arrViewModels; // +0xc0
    NSMutableArray * _arrShowingViewModels; // +0xc8
}
- (id)initWithGetUserGrantInfoBuffer:(id)arg1;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)initSubViews;
- (void)initTableHeaderView;
- (void)layoutTableHeaderView;
- (void)initTableFooterView;
- (void)layoutTableFooterView;
- (void)initRichTextView;
- (BOOL)shouldInteractivePop;
- (void)onReturn;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (void)initData;
- (void)initViewModels;
- (void)updateShowingViewModels;
- (BOOL)shouldShowViewModel:(id)arg1;
- (void)genSetUserGrantInfoBuffer;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onSelectHalfScreenCellWithViewModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)setUserGrantInfoBuffer;
- (void)setSetUserGrantInfoBuffer:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)tableFooterView;
- (void)setTableFooterView:(id)arg1;
- (id)comfirmBtn;
- (void)setComfirmBtn:(id)arg1;
- (id)denyBtn;
- (void)setDenyBtn:(id)arg1;
- (id)footerViewSeperator;
- (void)setFooterViewSeperator:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)getUserGrantInfoBuffer;
- (void)setGetUserGrantInfoBuffer:(id)arg1;
- (id)arrViewModels;
- (void)setArrViewModels:(id)arg1;
- (id)arrShowingViewModels;
- (void)setArrShowingViewModels:(id)arg1;
- (void).cxx_destruct;
@end
