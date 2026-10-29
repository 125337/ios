@interface ilinkMultiTalkMsgViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ilinkMultiTalkMsgCellDeleagte>
{
    int _roomType; // +0x70
    unsigned long long _roomID; // +0x78
    VoIPCallDetailReportStruct * _callDetailReportStruct; // +0x80
    MMTableView * _tableView; // +0x88
    NSMutableArray * _members; // +0x90
    double _talkingTime; // +0x98
}
- (id)initWithMembers:(id)arg1 talkingTime:(double)arg2;
- (void)viewDidLoad;
- (void)configView;
- (void)onBack;
- (void)initTableView;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)viewDidTransitionToNewSize;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)isNeedShowCallerNameWithMember:(id)arg1;
- (int)getMemberRelationWithUserName:(id)arg1;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (int)roomType;
- (void)setRoomType:(int)arg1;
- (id)callDetailReportStruct;
- (void)setCallDetailReportStruct:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)members;
- (void)setMembers:(id)arg1;
- (double)talkingTime;
- (void)setTalkingTime:(double)arg1;
- (void).cxx_destruct;
@end
