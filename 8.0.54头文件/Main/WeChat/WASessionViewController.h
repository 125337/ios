@interface WASessionViewController : MMBaseSessionViewController <IWASessionMgrExt, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    MMTableView * _tableView; // +0x68
    NSMutableSet * _setCheckUpdateUserName; // +0x70
    WAContactGetter * _contactGetter; // +0x78
    NSString * _sceneID; // +0x80
}
- (id)init;
- (void)initTableView;
- (void)initRightBarButton;
- (id)getRightBarButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (unsigned int)getMsgSearchBusinessType;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)deleteSessionOnIndexPath:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)onWASessionsChanged;
- (void)onClickRightBarBtn:(id)arg1;
- (void)updateSessionCellMenu:(id)arg1 withCellData:(id)arg2;
- (void)switchSessionNotifyWithIndexPath:(id)arg1;
- (void)confirmBlockMsgActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmReceiveMsgActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkUpdateContactFromIndex:(unsigned int)arg1;
- (void)getWeappContactForUsername:(id)arg1 handler:(id /* block */)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (void).cxx_destruct;
@end

