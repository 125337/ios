@interface MMAppMsgUploadModel : MMObject <NSCopying, WCTTableCoding>
{
    BOOL _deleteAfterSend; // +0x8
    unsigned int _m_uiCreateTime; // +0xc
    unsigned int _uploadSize; // +0x10
    unsigned int _m_uiMesLocalID; // +0x14
    NSString * _m_nsToUsr; // +0x18
    unsigned long long _largeFileScene; // +0x20
    double _largeFileDuration; // +0x28
    unsigned long long _largeFileSaveType; // +0x30
    NSString * _oversizeSessionId; // +0x38
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
+ (const void *)deleteAfterSend;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_deleteAfterSend;
+ (const void *)largeFileScene;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_largeFileScene;
+ (const void *)largeFileDuration;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_largeFileDuration;
+ (const void *)largeFileSaveType;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_largeFileSaveType;
+ (const void *)oversizeSessionId;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_oversizeSessionId;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
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
- (BOOL)deleteAfterSend;
- (void)setDeleteAfterSend:(BOOL)arg1;
- (unsigned long long)largeFileScene;
- (void)setLargeFileScene:(unsigned long long)arg1;
- (double)largeFileDuration;
- (void)setLargeFileDuration:(double)arg1;
- (unsigned long long)largeFileSaveType;
- (void)setLargeFileSaveType:(unsigned long long)arg1;
- (id)oversizeSessionId;
- (void)setOversizeSessionId:(id)arg1;
- (void).cxx_destruct;
@end
