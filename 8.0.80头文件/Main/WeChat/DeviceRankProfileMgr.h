@interface DeviceRankProfileMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, ICdnComMgrExt>
{
    DeviceRankDetailResonse * m_selfDeviceRank; // +0x8
    NSString * m_nsCDNClientID; // +0x10
    NSMutableDictionary * m_profileConfig; // +0x18
}
- (id)init;
- (id)GetDeviceRankProfileWithBrandUser:(id)arg1 UserName:(id)arg2;
- (id)GetDeviceRankCoverImg;
- (void)UpdateDeviceRankCoverWithImg:(id)arg1;
- (id)GetDeviceRankMotto;
- (void)UpdateDeviceRankMotto:(id)arg1;
- (void)tryLoadDeviceRankProfile;
- (id)GetSelfDeviceRankCache;
- (id)loadCoverImgCache;
- (unsigned int)saveCoverImg:(id)arg1;
- (id)getRankCoverCacheFilePath;
- (id)getRankCoverCacheOldPath;
- (id)getRankProfileCacheFilePath;
- (id)getRankProfileHistoryPath;
- (id)getRankProfileCacheOldPath;
- (id)getRankProfileConfigCacheFile;
- (void)saveRankProfile;
- (void)UpdateDeviceRankProfile;
- (void)tryLoadDeviceRankProfileConfig;
- (id)GetDeviceRankProfileConfig;
- (void)setConfigWithObject:(id)arg1 key:(id)arg2;
- (void)saveProfileConfig;
- (void)addFollowWithFollowItem:(id)arg1;
- (void)delFollowWithUserName:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)handleUpdateCoverResponse:(id)arg1;
- (void)handleRankGetUserRankDetailResponse:(id)arg1;
- (void)handleRankAddFollowResponse:(id)arg1;
- (void)handleRankDelFollowResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_nsCDNClientID;
- (void)setM_nsCDNClientID:(id)arg1;
- (void).cxx_destruct;
@end
