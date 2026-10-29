@interface GameChatRoomAtListUserName : NSObject <WCTTableCoding>
{
    NSString * _mainKey; // +0x8
    NSString * _userName; // +0x10
    NSString * _nickName; // +0x18
    NSString * _avatar; // +0x20
    NSString * _chatRoomName; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)mainKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_mainKey;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_userName;
+ (const void *)nickName;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_nickName;
+ (const void *)avatar;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_avatar;
+ (const void *)chatRoomName;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_chatRoomName;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
- (id)mainKey;
- (void)setMainKey:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (void).cxx_destruct;
@end
