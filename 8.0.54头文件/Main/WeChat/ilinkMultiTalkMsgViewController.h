@interface ilinkMultiTalkMsgViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned long long _roomID; // +0x68
    MMTableView * _tableView; // +0x70
    NSMutableArray * _members; // +0x78
}
- (id)initWithMembers:(id)arg1;
- (void)viewDidLoad;
- (void)configView;
- (void)onBack;
- (void)layoutSubviews;
- (id)tableView;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (void)setTableView:(id)arg1;
- (id)members;
- (void)setMembers:(id)arg1;
- (void).cxx_destruct;
@end

