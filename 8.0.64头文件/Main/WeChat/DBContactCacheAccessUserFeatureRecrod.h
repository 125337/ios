@interface DBContactCacheAccessUserFeatureRecrod : NSObject <WCTTableCoding>
{
    unsigned int _operateTime; // +0x8
    unsigned int _groupLastActiveTimeCount; // +0xc
    unsigned int _groupMySelfLastActiveTimeCount; // +0x10
    unsigned int _groupMemberCount; // +0x14
    unsigned int _groupUnReadMsgCount; // +0x18
    unsigned int _groupFriendsCount; // +0x1c
    unsigned int _myRecentMsgCount; // +0x20
    unsigned int _isMute; // +0x24
    NSString * _userName; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_userName;
+ (const void *)operateTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_operateTime;
+ (const void *)groupLastActiveTimeCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_groupLastActiveTimeCount;
+ (const void *)groupMySelfLastActiveTimeCount;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_groupMySelfLastActiveTimeCount;
+ (const void *)groupMemberCount;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_groupMemberCount;
+ (const void *)groupUnReadMsgCount;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_groupUnReadMsgCount;
+ (const void *)groupFriendsCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_groupFriendsCount;
+ (const void *)myRecentMsgCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_myRecentMsgCount;
+ (const void *)isMute;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_isMute;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
- (id)description;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)operateTime;
- (void)setOperateTime:(unsigned int)arg1;
- (unsigned int)groupLastActiveTimeCount;
- (void)setGroupLastActiveTimeCount:(unsigned int)arg1;
- (unsigned int)groupMySelfLastActiveTimeCount;
- (void)setGroupMySelfLastActiveTimeCount:(unsigned int)arg1;
- (unsigned int)groupMemberCount;
- (void)setGroupMemberCount:(unsigned int)arg1;
- (unsigned int)groupUnReadMsgCount;
- (void)setGroupUnReadMsgCount:(unsigned int)arg1;
- (unsigned int)groupFriendsCount;
- (void)setGroupFriendsCount:(unsigned int)arg1;
- (unsigned int)myRecentMsgCount;
- (void)setMyRecentMsgCount:(unsigned int)arg1;
- (unsigned int)isMute;
- (void)setIsMute:(unsigned int)arg1;
- (void).cxx_destruct;
@end
