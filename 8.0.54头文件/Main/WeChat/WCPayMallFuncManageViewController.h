@interface WCPayMallFuncManageViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    id <WCPayMallFuncManageViewControllerDelegate> m_delegate; // +0x90
    MMTableView * m_tableView; // +0x98
    NSMutableArray * _updateFuncTypeList; // +0xa0
    NSMutableDictionary * _updateFuncDict; // +0xa8
}
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)refreshViewWithData:(id)arg1;
- (void)copyData;
- (void)updateTableView;
- (void)onSwipeRight:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getTableViewFooterView;
- (id)getTableViewHeaderView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makePayFuncItemCell:(id)arg1 indexPath:(id)arg2;
- (void)onSwitchChanged:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (BOOL)isUpdate;
- (void)onBack;
- (id)updateFuncTypeList;
- (void)setUpdateFuncTypeList:(id)arg1;
- (id)updateFuncDict;
- (void)setUpdateFuncDict:(id)arg1;
- (void).cxx_destruct;
@end

