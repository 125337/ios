@interface GameChatCommonData : MMUserService <MMServiceProtocol>
{
    NSString * _topGroupName; // +0x8
    BanAction * _banJoinGroup; // +0x10
    BanAction * _banCreateGroup; // +0x18
    SafeMutableDictionary * _recentlyTickleMap; // +0x20
    GameChatErrorTipBar * _banBtn; // +0x28
    NSMutableDictionary * _dbDataDict; // +0x30
    NSMutableArray * _normalUserArray; // +0x38
    double _normalUserArrayTimeStamp; // +0x40
}
- (id)cacheKeyForChannelId:(long long)arg1 chatRoomName:(id)arg2 category:(id)arg3;
- (id)getCachedMsgResponseOfChannel:(long long)arg1 chatRoomName:(id)arg2;
- (void)saveMsgResponse:(id)arg1 ofChannel:(long long)arg2 chatRoomName:(id)arg3;
- (id)getCachedChannelInfo:(id)arg1;
- (void)saveChannelInfo:(id)arg1 chatRoomName:(id)arg2;
- (void)setNormalUserArray:(id)arg1;
- (id)normalUserArray;
- (id)init;
- (void)saveExpireRecordValue:(id)arg1 maxAge:(double)arg2 key:(id)arg3;
- (id)getExpireRecordWithKey:(id)arg1;
- (void)updateBanStatus:(id)arg1;
- (void)showBanBtnWithText:(id)arg1;
- (void)removeBanBtn;
- (BOOL)checkCanJoinGroup;
- (BOOL)checkBanAction:(id)arg1;
- (id)banJoinGroup;
- (id)banCreateGroup;
- (BOOL)checkCanCreateGroup;
- (id)pbCategoryKey:(id)arg1;
- (BOOL)isTimeExpired:(double)arg1 expireTime:(double)arg2 info:(id)arg3;
- (BOOL)isDataExpired:(id)arg1;
- (id)getChatRoomPbTable;
- (id)getChatRoomPbTableWithPrefix:(id)arg1;
- (id)getPbOfCustomKey:(id)arg1 pbClass:(Class)arg2;
- (void)savePbMessage:(id)arg1 withKey:(id)arg2;
- (void)savePbMessage:(id)arg1 withKey:(id)arg2 expireDuration:(double)arg3;
- (id)getPbOfCustomKey:(id)arg1 pbClass:(Class)arg2 tablePrefix:(id)arg3;
- (id)getChatRoomDataOfCustomKey:(id)arg1 pbClass:(Class)arg2 tablePrefix:(id)arg3;
- (void)savePbMessage:(id)arg1 withKey:(id)arg2 tablePrefix:(id)arg3;
- (BOOL)removeAllChatRoomData;
- (void)savePbMessage:(id)arg1 withKey:(id)arg2 expireDuration:(double)arg3 tablePrefix:(id)arg4;
- (id)topGroupName;
- (void)setTopGroupName:(id)arg1;
- (void)setBanJoinGroup:(id)arg1;
- (void)setBanCreateGroup:(id)arg1;
- (id)recentlyTickleMap;
- (void)setRecentlyTickleMap:(id)arg1;
- (id)banBtn;
- (void)setBanBtn:(id)arg1;
- (id)dbDataDict;
- (void)setDbDataDict:(id)arg1;
- (id)normalUserArray;
- (void)setNormalUserArray:(id)arg1;
- (double)normalUserArrayTimeStamp;
- (void)setNormalUserArrayTimeStamp:(double)arg1;
- (void).cxx_destruct;
@end

