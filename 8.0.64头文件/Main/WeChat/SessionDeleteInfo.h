@interface SessionDeleteInfo : NSObject <WCTTableCoding>
{
    NSString * m_userName; // +0x8
    unsigned int m_lastMsgSequence; // +0x10
    unsigned int m_deleteTime; // +0x14
    long long _SESSION_DEL_COL_INTRES1; // +0x18
    long long _SESSION_DEL_COL_INTRES2; // +0x20
    long long _SESSION_DEL_COL_INTRES3; // +0x28
    NSString * _SESSION_DEL_COL_STRRES1; // +0x30
    NSString * _SESSION_DEL_COL_STRRES2; // +0x38
    NSString * _SESSION_DEL_COL_STRRES3; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_userName;
+ (const void *)m_lastMsgSequence;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_lastMsgSequence;
+ (const void *)m_deleteTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_deleteTime;
+ (const void *)SESSION_DEL_COL_INTRES1;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_SESSION_DEL_COL_INTRES1;
+ (const void *)SESSION_DEL_COL_INTRES2;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_SESSION_DEL_COL_INTRES2;
+ (const void *)SESSION_DEL_COL_INTRES3;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_SESSION_DEL_COL_INTRES3;
+ (const void *)SESSION_DEL_COL_STRRES1;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_SESSION_DEL_COL_STRRES1;
+ (const void *)SESSION_DEL_COL_STRRES2;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_SESSION_DEL_COL_STRRES2;
+ (const void *)SESSION_DEL_COL_STRRES3;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_SESSION_DEL_COL_STRRES3;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
- (id)m_userName;
- (void)setM_userName:(id)arg1;
- (unsigned int)m_lastMsgSequence;
- (void)setM_lastMsgSequence:(unsigned int)arg1;
- (unsigned int)m_deleteTime;
- (void)setM_deleteTime:(unsigned int)arg1;
- (long long)SESSION_DEL_COL_INTRES1;
- (void)setSESSION_DEL_COL_INTRES1:(long long)arg1;
- (long long)SESSION_DEL_COL_INTRES2;
- (void)setSESSION_DEL_COL_INTRES2:(long long)arg1;
- (long long)SESSION_DEL_COL_INTRES3;
- (void)setSESSION_DEL_COL_INTRES3:(long long)arg1;
- (id)SESSION_DEL_COL_STRRES1;
- (void)setSESSION_DEL_COL_STRRES1:(id)arg1;
- (id)SESSION_DEL_COL_STRRES2;
- (void)setSESSION_DEL_COL_STRRES2:(id)arg1;
- (id)SESSION_DEL_COL_STRRES3;
- (void)setSESSION_DEL_COL_STRRES3:(id)arg1;
- (void).cxx_destruct;
@end
