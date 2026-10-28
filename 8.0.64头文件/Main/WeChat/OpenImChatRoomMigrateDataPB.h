@interface OpenImChatRoomMigrateDataPB : NSObject <PBCoding>
{
    NSMutableArray * _migrateOpenImChatRoomList; // +0x8
    NSMutableDictionary * _dicHadGetContactDetialMigrateAssociateChatRoom; // +0x10
    NSMutableDictionary * _dicActiveUserWaitForOpenImMigrate; // +0x18
}
+ (void)PBArrayAdd_migrateOpenImChatRoomList;
+ (void)PBArrayAdd_dicActiveUserWaitForOpenImMigrate;
+ (void)PBArrayAdd_dicHadGetContactDetialMigrateAssociateChatRoom;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)migrateOpenImChatRoomList;
- (void)setMigrateOpenImChatRoomList:(id)arg1;
- (id)dicHadGetContactDetialMigrateAssociateChatRoom;
- (void)setDicHadGetContactDetialMigrateAssociateChatRoom:(id)arg1;
- (id)dicActiveUserWaitForOpenImMigrate;
- (void)setDicActiveUserWaitForOpenImMigrate:(id)arg1;
- (void).cxx_destruct;
@end
