@interface W1wPersonalMsgHelloSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, W1wPersonalMsgSessionViewModelDelegate>
{
    BOOL _isHelloList; // +0x70
    W1wPersonalMsgSessionViewModel * _viewModel; // +0x78
    MMTableView * _tableView; // +0x80
    NSString * _pageId; // +0x88
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)setupUI;
- (void)setupTableView;
- (void)setupNavigationBarItems;
- (void)onClickSettingBarItem;
- (void)setupViewModel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 msgCellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onW1wSessionUpdated;
- (void)openW1wPersonalMsgLogicController:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (BOOL)isHelloList;
- (void)setIsHelloList:(BOOL)arg1;
- (void).cxx_destruct;
@end
