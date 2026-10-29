@interface ChatroomMemberRemoveViewController : MMUIViewController <RoomDelMemControllDelegate, UITableViewDelegate, UITableViewDataSource, IGroupMgrExt, ContactsItemViewDelegate>
{
    NSString * _groupName; // +0x68
    NSString * _removingUserName; // +0x70
    NSMutableArray * _arrRemoveMember; // +0x78
    MMTableView * _tableView; // +0x80
    id <ChatroomMemberRemoveViewControllerDelegate> _vcDelegate; // +0x88
    CContact * _contact; // +0x90
    RoomDelMemController * _chatRoomDelMemController; // +0x98
}
- (id)initWithGroup:(id)arg1 arrRemoveMember:(id)arg2 operatingMessage:(id)arg3;
- (void)onCancel;
- (void)viewDidLoad;
- (void)reloadDataAndView;
- (void)viewDidLayoutSubviews;
- (void)doRoomHistoryCancelReport;
- (void)onStartDeletingUsr:(id)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 row:(unsigned long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (void).cxx_destruct;
@end

