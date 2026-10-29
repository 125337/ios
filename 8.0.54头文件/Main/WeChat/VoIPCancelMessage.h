@interface VoIPCancelMessage : NSObject <WCTTableCoding>
{
    unsigned long long m_iVoipRoomid; // +0x8
    BOOL m_bFromNewSync; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_iVoipRoomid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_iVoipRoomid;
+ (const void *)m_bFromNewSync;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_bFromNewSync;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
- (unsigned long long)m_iVoipRoomid;
- (void)setM_iVoipRoomid:(unsigned long long)arg1;
- (BOOL)m_bFromNewSync;
- (void)setM_bFromNewSync:(BOOL)arg1;
@end

