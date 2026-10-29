@interface MMGroupLiveStatViewController : MMCPUIViewController <MMGroupLiveMgrExt, MMLiveContactTableViewCellDelegate>
{
    UIView * _headerView; // +0x68
    MMLiveOnlineUserListView * _listView; // +0x70
    MMLiveStatCompositeLabel * _totalOnlineUsersLabel; // +0x78
    MMLiveStatCompositeLabel * _totalUsersLabel; // +0x80
    MMUILabel * _statusLabel; // +0x88
    LiveInfo * _liveInfo; // +0x90
    NSString * _roomId; // +0x98
    unsigned long long _onlineUserCount; // +0xa0
    unsigned long long _totalUserCount; // +0xa8
}
- (id)initWithLiveInfo:(id)arg1 roomId:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupUI;
- (void)layoutHeaderView;
- (void)onBackButtonClicked:(id)arg1;
- (void)setupData;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)onGetLiveOnlineUserStateListWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andUserStateList:(id)arg3;
- (void)onHeadImageClicked:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)listView;
- (void)setListView:(id)arg1;
- (id)totalOnlineUsersLabel;
- (void)setTotalOnlineUsersLabel:(id)arg1;
- (id)totalUsersLabel;
- (void)setTotalUsersLabel:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned long long)onlineUserCount;
- (void)setOnlineUserCount:(unsigned long long)arg1;
- (unsigned long long)totalUserCount;
- (void)setTotalUserCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

