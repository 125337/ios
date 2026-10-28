@interface OpenImChatRoomMigrateItemPB : NSObject <PBCoding>
{
    BOOL _m_bIsHadMigrated; // +0x8
    BOOL _m_bIsSendInsertWarningSystemMessage; // +0x9
    NSString * _m_nsOpenIMChatRoomUserName; // +0x10
    NSString * _m_nsAssociateChatRoomUserName; // +0x18
}
+ (void)PBArrayAdd_m_nsOpenIMChatRoomUserName;
+ (void)PBArrayAdd_m_nsAssociateChatRoomUserName;
+ (void)PBArrayAdd_m_bIsHadMigrated;
+ (void)PBArrayAdd_m_bIsSendInsertWarningSystemMessage;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)m_nsOpenIMChatRoomUserName;
- (void)setM_nsOpenIMChatRoomUserName:(id)arg1;
- (id)m_nsAssociateChatRoomUserName;
- (void)setM_nsAssociateChatRoomUserName:(id)arg1;
- (BOOL)m_bIsHadMigrated;
- (void)setM_bIsHadMigrated:(BOOL)arg1;
- (BOOL)m_bIsSendInsertWarningSystemMessage;
- (void)setM_bIsSendInsertWarningSystemMessage:(BOOL)arg1;
- (void).cxx_destruct;
@end
