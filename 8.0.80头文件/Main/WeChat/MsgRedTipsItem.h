@interface MsgRedTipsItem : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId; // +0x8
    unsigned int _msgCreateTime; // +0xc
    unsigned int _unreadCount; // +0x10
    long long _type; // +0x18
    NSString * _username; // +0x20
    long long _rule; // +0x28
    NSString * _redTipsTitle; // +0x30
    NSString * _contextKey; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_type;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)msgCreateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_msgCreateTime;
+ (const void *)rule;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_rule;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (id)descForType:(long long)arg1;
+ (id)titleForType:(long long)arg1 quoted:(BOOL)arg2;
- (void)setType:(long long)arg1;
- (id)titleWithQuoted:(BOOL)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)shouldAutoExpired;
- (long long)type;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (long long)rule;
- (void)setRule:(long long)arg1;
- (id)redTipsTitle;
- (void)setRedTipsTitle:(id)arg1;
- (unsigned int)unreadCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (id)contextKey;
- (void)setContextKey:(id)arg1;
- (void).cxx_destruct;
@end
