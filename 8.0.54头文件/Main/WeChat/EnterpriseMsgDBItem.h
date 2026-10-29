@interface EnterpriseMsgDBItem : MMObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int m_uiMesLocalId; // +0xc
    unsigned int m_uiCreateTime; // +0x10
    unsigned int m_uiDesc; // +0x14
    unsigned int m_uiStatus; // +0x18
    unsigned int m_uiImgStatus; // +0x1c
    unsigned int m_uiType; // +0x20
    unsigned long long m_ui64MesSvrId; // +0x28
    NSString * m_nsMessage; // +0x30
    NSString * m_nsMsgSource; // +0x38
    NSString * m_nsFromUsr; // +0x40
    NSString * m_nsToUsr; // +0x48
    NSString * m_nsBizChatId; // +0x50
    NSString * m_nsRealChatUsr; // +0x58
    NSString * m_nsPattern; // +0x60
    long long lastInsertedRowID; // +0x68
    NSString * _m_nsBizCliMsgId; // +0x70
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_ui64MesSvrId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_ui64MesSvrId;
+ (const void *)m_uiMesLocalId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_uiMesLocalId;
+ (const void *)m_uiCreateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_uiCreateTime;
+ (const void *)m_uiDesc;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_m_uiDesc;
+ (const void *)m_uiStatus;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_m_uiStatus;
+ (const void *)m_uiImgStatus;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_m_uiImgStatus;
+ (const void *)m_nsMessage;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_m_nsMessage;
+ (const void *)m_uiType;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_m_uiType;
+ (const void *)m_nsMsgSource;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_m_nsMsgSource;
+ (const void *)m_nsFromUsr;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_m_nsFromUsr;
+ (const void *)m_nsToUsr;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_m_nsToUsr;
+ (const void *)m_nsBizChatId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_m_nsBizChatId;
+ (const void *)m_nsRealChatUsr;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_m_nsRealChatUsr;
+ (const void *)m_nsPattern;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_m_nsPattern;
+ (const void *)m_nsBizCliMsgId;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_m_nsBizCliMsgId;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (void)__wcdb_index_17:(void *)arg1;
+ (void)__wcdb_index_18:(void *)arg1;
+ (void)__wcdb_index_19:(void *)arg1;
- (long long)compareMessageAscending:(id)arg1;
- (unsigned long long)m_ui64MesSvrId;
- (void)setM_ui64MesSvrId:(unsigned long long)arg1;
- (unsigned int)m_uiMesLocalId;
- (void)setM_uiMesLocalId:(unsigned int)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (unsigned int)m_uiDesc;
- (void)setM_uiDesc:(unsigned int)arg1;
- (unsigned int)m_uiStatus;
- (void)setM_uiStatus:(unsigned int)arg1;
- (unsigned int)m_uiImgStatus;
- (void)setM_uiImgStatus:(unsigned int)arg1;
- (id)m_nsMessage;
- (void)setM_nsMessage:(id)arg1;
- (unsigned int)m_uiType;
- (void)setM_uiType:(unsigned int)arg1;
- (id)m_nsMsgSource;
- (void)setM_nsMsgSource:(id)arg1;
- (id)m_nsFromUsr;
- (void)setM_nsFromUsr:(id)arg1;
- (id)m_nsToUsr;
- (void)setM_nsToUsr:(id)arg1;
- (id)m_nsBizChatId;
- (void)setM_nsBizChatId:(id)arg1;
- (id)m_nsRealChatUsr;
- (void)setM_nsRealChatUsr:(id)arg1;
- (id)m_nsPattern;
- (void)setM_nsPattern:(id)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (id)m_nsBizCliMsgId;
- (void)setM_nsBizCliMsgId:(id)arg1;
- (void).cxx_destruct;
@end

