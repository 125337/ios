@interface GroupNoticeRevokeMessage : NSObject <WCTTableCoding>
{
    unsigned int _m_uiCreateTime; // +0x8
    unsigned int _isRevokeByMyself; // +0xc
    long long _m_n64SvrId; // +0x10
    NSString * _announcementId; // +0x18
    NSString * _sourceId; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_n64SvrId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_m_n64SvrId;
+ (const void *)m_uiCreateTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_m_uiCreateTime;
+ (const void *)announcementId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_announcementId;
+ (const void *)sourceId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_sourceId;
+ (const void *)isRevokeByMyself;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_isRevokeByMyself;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
- (long long)m_n64SvrId;
- (void)setM_n64SvrId:(long long)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (id)announcementId;
- (void)setAnnouncementId:(id)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (unsigned int)isRevokeByMyself;
- (void)setIsRevokeByMyself:(unsigned int)arg1;
- (void).cxx_destruct;
@end
