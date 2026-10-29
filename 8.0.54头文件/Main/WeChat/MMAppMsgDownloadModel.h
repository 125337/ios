@interface MMAppMsgDownloadModel : MMObject <NSCopying, WCTTableCoding>
{
    unsigned int _m_uiMesLocalID; // +0x8
    unsigned int _appMsgState; // +0xc
    unsigned int _msgCreateTime; // +0x10
    NSString * _m_nsFromUsr; // +0x18
    long long _newMsgId; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_nsFromUsr;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_nsFromUsr;
+ (const void *)newMsgId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_newMsgId;
+ (const void *)m_uiMesLocalID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_uiMesLocalID;
+ (const void *)appMsgState;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_appMsgState;
+ (const void *)msgCreateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_msgCreateTime;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (id)genAMDItem:(id)arg1 state:(unsigned int)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setAppMsgState:(unsigned int)arg1;
- (id)m_nsFromUsr;
- (void)setM_nsFromUsr:(id)arg1;
- (long long)newMsgId;
- (void)setNewMsgId:(long long)arg1;
- (unsigned int)m_uiMesLocalID;
- (void)setM_uiMesLocalID:(unsigned int)arg1;
- (unsigned int)appMsgState;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

