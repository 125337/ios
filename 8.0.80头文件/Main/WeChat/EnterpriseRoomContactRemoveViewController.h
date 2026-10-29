@interface EnterpriseRoomContactRemoveViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IEnterpriseGroupMgrExt, EnterpriseContactItemViewDelegate>
{
    NSString * _groupName; // +0x70
    NSString * _removingUserName; // +0x78
    NSString * _chatBrandUserName; // +0x80
    NSMutableArray * _aryRemoveMember; // +0x88
    MMTableView * _tableView; // +0x90
}
- (id)initWithGroupName:(id)arg1 aryRemoveMember:(id)arg2 chatBrandUserName:(id)arg3;
- (void)viewDidLoad;
- (void)reloadAll;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onEnterpriseContactItemViewRightButtonClick:(id)arg1;
- (void)onUpdateEnterpriseGroupMemberList:(id)arg1 errorCode:(int)arg2;
- (void)onCancel;
- (void).cxx_destruct;
@end
