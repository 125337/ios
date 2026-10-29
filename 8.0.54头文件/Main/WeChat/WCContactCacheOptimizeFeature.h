@interface WCContactCacheOptimizeFeature : NSObject <PBCoding>
{
    unsigned int _groupLastActiveTimeCount; // +0x8
    unsigned int _groupMySelfLastActiveTimeCount; // +0xc
    unsigned int _groupMemberCount; // +0x10
    unsigned int _groupUnReadMsgCount; // +0x14
    unsigned int _groupFriendsCount; // +0x18
    unsigned int _myRecentMsgCount; // +0x1c
    unsigned int _isMute; // +0x20
}
+ (void)PBArrayAdd_groupLastActiveTimeCount;
+ (void)PBArrayAdd_groupMySelfLastActiveTimeCount;
+ (void)PBArrayAdd_groupMemberCount;
+ (void)PBArrayAdd_groupUnReadMsgCount;
+ (void)PBArrayAdd_groupFriendsCount;
+ (void)PBArrayAdd_myRecentMsgCount;
+ (void)PBArrayAdd_isMute;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
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
@end

