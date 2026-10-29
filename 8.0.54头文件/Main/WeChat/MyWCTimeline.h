@interface MyWCTimeline : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _m_localId; // +0xc
    unsigned int _m_groupHint; // +0x10
    int _m_codingType; // +0x14
    long long lastInsertedRowID; // +0x18
    NSString * _m_id; // +0x20
    NSString * _m_fromUser; // +0x28
    NSData * _m_buffer; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_localId;
+ (const void *)__wcdb_synthesize_46:(void *)arg1;
+ (id)swift_m_localId;
+ (const void *)m_groupHint;
+ (const void *)__wcdb_synthesize_47:(void *)arg1;
+ (id)swift_m_groupHint;
+ (const void *)m_id;
+ (const void *)__wcdb_synthesize_48:(void *)arg1;
+ (id)swift_m_id;
+ (const void *)m_fromUser;
+ (const void *)__wcdb_synthesize_49:(void *)arg1;
+ (id)swift_m_fromUser;
+ (const void *)m_buffer;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (id)swift_m_buffer;
+ (const void *)m_codingType;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (id)swift_m_codingType;
+ (void)__wcdb_column_constraint_52:(void *)arg1;
+ (void)__wcdb_column_constraint_53:(void *)arg1;
+ (void)__wcdb_index_54:(void *)arg1;
+ (void)__wcdb_index_55:(void *)arg1;
+ (void)__wcdb_index_56:(void *)arg1;
+ (void)__wcdb_index_57:(void *)arg1;
+ (void)__wcdb_index_58:(void *)arg1;
+ (void)__wcdb_column_constraint_59:(void *)arg1;
+ (void)__wcdb_column_constraint_60:(void *)arg1;
- (id)convertToDataItem;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)m_localId;
- (void)setM_localId:(unsigned int)arg1;
- (unsigned int)m_groupHint;
- (void)setM_groupHint:(unsigned int)arg1;
- (id)m_id;
- (void)setM_id:(id)arg1;
- (id)m_fromUser;
- (void)setM_fromUser:(id)arg1;
- (id)m_buffer;
- (void)setM_buffer:(id)arg1;
- (int)m_codingType;
- (void)setM_codingType:(int)arg1;
- (void).cxx_destruct;
@end

