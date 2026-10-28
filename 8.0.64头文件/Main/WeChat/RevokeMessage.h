@interface RevokeMessage : NSObject <WCTTableCoding>
{
    long long m_n64SvrId; // +0x8
    NSString * m_nsContent; // +0x10
    unsigned int m_uiCreateTime; // +0x18
    long long _MSG_REVOKE_COL_INTRES2; // +0x20
    long long _MSG_REVOKE_COL_INTRES3; // +0x28
    NSString * _MSG_REVOKE_COL_STRRES1; // +0x30
    NSString * _MSG_REVOKE_COL_STRRES2; // +0x38
    NSString * _MSG_REVOKE_COL_STRRES3; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_n64SvrId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_n64SvrId;
+ (const void *)m_nsContent;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_nsContent;
+ (const void *)m_uiCreateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_uiCreateTime;
+ (const void *)MSG_REVOKE_COL_INTRES2;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_MSG_REVOKE_COL_INTRES2;
+ (const void *)MSG_REVOKE_COL_INTRES3;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_MSG_REVOKE_COL_INTRES3;
+ (const void *)MSG_REVOKE_COL_STRRES1;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_MSG_REVOKE_COL_STRRES1;
+ (const void *)MSG_REVOKE_COL_STRRES2;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_MSG_REVOKE_COL_STRRES2;
+ (const void *)MSG_REVOKE_COL_STRRES3;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_MSG_REVOKE_COL_STRRES3;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
- (long long)m_n64SvrId;
- (void)setM_n64SvrId:(long long)arg1;
- (id)m_nsContent;
- (void)setM_nsContent:(id)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (long long)MSG_REVOKE_COL_INTRES2;
- (void)setMSG_REVOKE_COL_INTRES2:(long long)arg1;
- (long long)MSG_REVOKE_COL_INTRES3;
- (void)setMSG_REVOKE_COL_INTRES3:(long long)arg1;
- (id)MSG_REVOKE_COL_STRRES1;
- (void)setMSG_REVOKE_COL_STRRES1:(id)arg1;
- (id)MSG_REVOKE_COL_STRRES2;
- (void)setMSG_REVOKE_COL_STRRES2:(id)arg1;
- (id)MSG_REVOKE_COL_STRRES3;
- (void)setMSG_REVOKE_COL_STRRES3:(id)arg1;
- (void).cxx_destruct;
@end
