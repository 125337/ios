@interface DeviceRankUsersMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * m_deviceRankUserList; // +0x8
    BOOL m_bLoaded; // +0x10
}
- (id)init;
- (void)tryLoadDeviceRankUsers;
- (id)getRankUserProfileFilePath;
- (void)SaveDeviceRankUsers;
- (id)getCoverUrlByUserName:(id)arg1;
- (void)updateOrAddCoverUrl:(id)arg1 WithUsername:(id)arg2;
- (void).cxx_destruct;
@end

