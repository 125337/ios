@interface MultiTalkSessionMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _database; // +0x8
    WCTTable * _bannerTable; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)initDatabase;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (BOOL)createNewMultiTalkMessageWithGroupData:(id)arg1 messageType:(unsigned int)arg2;
- (BOOL)createNewMultiTalkMessageWithGroupData:(id)arg1 messageType:(unsigned int)arg2 inviteUsername:(id)arg3 messageCreateTime:(unsigned int)arg4;
- (BOOL)addNewMultiTalkChatroomMessageWithGroupData:(id)arg1 messageType:(unsigned int)arg2 inviteUsername:(id)arg3 messageCreateTime:(unsigned int)arg4;
- (id)getSubMessageContentWithMessageType:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (BOOL)saveMultiTalkBanner:(id)arg1;
- (BOOL)deleteMultiTalkBannerItem:(id)arg1;
- (id)getAllMultiTalkBannerInfos;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)bannerTable;
- (void)setBannerTable:(id)arg1;
- (void).cxx_destruct;
@end
