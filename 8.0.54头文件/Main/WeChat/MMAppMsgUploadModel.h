@interface MMAppMsgUploadModel : MMObject <NSCopying, WCTTableCoding>
{
    unsigned int _m_uiCreateTime; // +0x8
    unsigned int _uploadSize; // +0xc
    unsigned int _m_uiMesLocalID; // +0x10
    NSString * _m_nsToUsr; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_nsToUsr;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_nsToUsr;
+ (const void *)m_uiCreateTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_uiCreateTime;
+ (const void *)uploadSize;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_uploadSize;
+ (const void *)m_uiMesLocalID;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_m_uiMesLocalID;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (id)genAMUItem:(id)arg1;
+ (id)genSendFileUploadMsgFileInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)m_nsToUsr;
- (void)setM_nsToUsr:(id)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (unsigned int)uploadSize;
- (void)setUploadSize:(unsigned int)arg1;
- (unsigned int)m_uiMesLocalID;
- (void)setM_uiMesLocalID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

