@interface MyWCStrangerMessage : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _m_localId; // +0xc
    unsigned int _m_type; // +0x10
    unsigned int _m_source; // +0x14
    unsigned int _m_createTime; // +0x18
    long long lastInsertedRowID; // +0x20
    NSString * _m_id; // +0x28
    NSString * _m_fromUser; // +0x30
    NSString * _m_fromNickname; // +0x38
    NSString * _m_toUser; // +0x40
    NSString * _m_toNickname; // +0x48
    NSString * _m_content; // +0x50
    NSData * _m_metaData; // +0x58
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_localId;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_m_localId;
+ (const void *)m_type;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_m_type;
+ (const void *)m_source;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_m_source;
+ (const void *)m_createTime;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_m_createTime;
+ (const void *)m_id;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_m_id;
+ (const void *)m_fromUser;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (id)swift_m_fromUser;
+ (const void *)m_fromNickname;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_m_fromNickname;
+ (const void *)m_toUser;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (id)swift_m_toUser;
+ (const void *)m_toNickname;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (id)swift_m_toNickname;
+ (const void *)m_content;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (id)swift_m_content;
+ (const void *)m_metaData;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (id)swift_m_metaData;
+ (void)__wcdb_column_constraint_42:(void *)arg1;
+ (void)__wcdb_column_constraint_43:(void *)arg1;
+ (void)__wcdb_column_constraint_44:(void *)arg1;
+ (void)__wcdb_column_constraint_45:(void *)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)m_localId;
- (void)setM_localId:(unsigned int)arg1;
- (unsigned int)m_type;
- (void)setM_type:(unsigned int)arg1;
- (unsigned int)m_source;
- (void)setM_source:(unsigned int)arg1;
- (unsigned int)m_createTime;
- (void)setM_createTime:(unsigned int)arg1;
- (id)m_id;
- (void)setM_id:(id)arg1;
- (id)m_fromUser;
- (void)setM_fromUser:(id)arg1;
- (id)m_fromNickname;
- (void)setM_fromNickname:(id)arg1;
- (id)m_toUser;
- (void)setM_toUser:(id)arg1;
- (id)m_toNickname;
- (void)setM_toNickname:(id)arg1;
- (id)m_content;
- (void)setM_content:(id)arg1;
- (id)m_metaData;
- (void)setM_metaData:(id)arg1;
- (void).cxx_destruct;
@end

