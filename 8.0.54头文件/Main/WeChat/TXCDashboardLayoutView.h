@interface TXCDashboardLayoutView : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _collapseTableView; // +0x8
    TXCDashboardWindow * _containerWindow; // +0x10
    UITextView * _statusView; // +0x18
    UITextView * _logView; // +0x20
    UITableView * _dashboardIDTableView; // +0x28
    NSDictionary * _dashboardInfo; // +0x30
    NSString * _currentShowDashboardID; // +0x38
}
+ (id)defaultLayoutView;
- (id)initWithContainerWindow:(id)arg1;
- (void)show:(BOOL)arg1;
- (void)updateDashboardInfo:(id)arg1;
- (void)reloadAllSubviewsIfNeeded;
- (void)reloadStatusTextView;
- (void)reloadLogTextView;
- (void)reloadDashboardTableView;
- (void)createSubviews;
- (id)createTextView:(CGRect)arg1;
- (id)createTableView:(CGRect)arg1;
- (void)collapseList:(id)arg1;
- (void)setCollapseTableView:(BOOL)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)runInMainThread:(id /* block */)arg1;
- (id)containerWindow;
- (void)setContainerWindow:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)logView;
- (void)setLogView:(id)arg1;
- (id)dashboardIDTableView;
- (void)setDashboardIDTableView:(id)arg1;
- (BOOL)isCollapseTableView;
- (id)dashboardInfo;
- (void)setDashboardInfo:(id)arg1;
- (id)currentShowDashboardID;
- (void)setCurrentShowDashboardID:(id)arg1;
- (void).cxx_destruct;
@end

