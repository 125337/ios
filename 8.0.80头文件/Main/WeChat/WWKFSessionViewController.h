@interface WWKFSessionViewController : MMBaseSessionViewController <UITableViewDelegate, UITableViewDataSource, IWWKFSessionMgrExt, MMBaseSessionCellDelegate>
{
    NSString * _reportSessionId; // +0x70
    MMUILabel * _emptyTipsLabel; // +0x78
    MMTableView * _tableView; // +0x80
    WWKFContactOpLogic * _contactOpLogic; // +0x88
}
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (id)init;
- (void)setupMainTableView;
- (void)setupEmptyTipsLabel;
- (void)updateEmptyTipsLabelState;
- (unsigned int)getMsgSearchBusinessType;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)updateSessionCellMenu:(id)arg1 withCellData:(id)arg2;
- (void)deleteSessionOnIndexPath:(id)arg1;
- (void)unbindWWKFContactOnIndexPath:(id)arg1;
- (void)onWWKFSessionsChanged;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)onMenuTransitionToConfirmState:(long long)arg1 sessionCellData:(id)arg2;
- (void)onMenuItemsAppearInSessionCellData:(id)arg1;
- (void)reportCellLeftSlideAction:(long long)arg1 cellData:(id)arg2;
- (void)registerYReportSdk;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)emptyTipsLabel;
- (void)setEmptyTipsLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)contactOpLogic;
- (void)setContactOpLogic:(id)arg1;
- (void).cxx_destruct;
@end
