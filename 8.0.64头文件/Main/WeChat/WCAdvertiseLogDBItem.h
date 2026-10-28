@interface WCAdvertiseLogDBItem : MMObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _m_uiLocalId; // +0xc
    unsigned int _m_uiCreateTime; // +0x10
    unsigned int _m_uiLogId; // +0x14
    long long lastInsertedRowID; // +0x18
    NSString * _m_nsLogExt; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_uiLocalId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_uiLocalId;
+ (const void *)m_uiCreateTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_uiCreateTime;
+ (const void *)m_uiLogId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_uiLogId;
+ (const void *)m_nsLogExt;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_m_nsLogExt;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)m_uiLocalId;
- (void)setM_uiLocalId:(unsigned int)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (unsigned int)m_uiLogId;
- (void)setM_uiLogId:(unsigned int)arg1;
- (id)m_nsLogExt;
- (void)setM_nsLogExt:(id)arg1;
- (void).cxx_destruct;
@end
