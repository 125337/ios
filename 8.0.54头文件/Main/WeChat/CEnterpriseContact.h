@interface CEnterpriseContact : CBaseContact <WCTTableCoding>
{
    BOOL m_bHeadImageUpdateFlag; // +0xf0
    BOOL m_bUpdateFlag; // +0xf1
    unsigned int m_uiUserFlag; // +0xf4
    unsigned int m_uiContactType; // +0xf8
    NSString * m_nsContactDisplayName; // +0x100
    unsigned long long m_uiContactVer; // +0x108
    NSString * m_nsProfileJumpUrl; // +0x110
    NSString * m_nsAddMemberUrl; // +0x118
    EnterpriseRoomData * m_oRoomData; // +0x120
    NSString * m_nsBrandUserName; // +0x128
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_nsUsrName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_nsUsrName;
+ (const void *)m_nsContactDisplayName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_nsContactDisplayName;
+ (const void *)m_uiContactVer;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_uiContactVer;
+ (const void *)m_nsProfileJumpUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_m_nsProfileJumpUrl;
+ (const void *)m_nsHeadHDImgUrl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_m_nsHeadHDImgUrl;
+ (const void *)m_nsAddMemberUrl;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_m_nsAddMemberUrl;
+ (const void *)m_uiUserFlag;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_m_uiUserFlag;
+ (const void *)m_uiContactType;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_m_uiContactType;
+ (const void *)m_oRoomData;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_m_oRoomData;
+ (const void *)m_bHeadImageUpdateFlag;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_m_bHeadImageUpdateFlag;
+ (const void *)m_nsBrandUserName;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_m_nsBrandUserName;
+ (const void *)m_nsAtUserList;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_m_nsAtUserList;
+ (const void *)m_nsDraft;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_m_nsDraft;
+ (const void *)m_uiDraftTime;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_m_uiDraftTime;
+ (const void *)m_bUpdateFlag;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_m_bUpdateFlag;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (id)contactFromBizChatUser:(id)arg1 brandUserName:(id)arg2;
- (BOOL)isChatroom;
- (BOOL)isChatStatusNotifyOpen;
- (BOOL)isSelf;
- (BOOL)isWeixinSingleConatct;
- (BOOL)isFavorite;
- (BOOL)isContactTop;
- (id)m_nsContactDisplayName;
- (void)setM_nsContactDisplayName:(id)arg1;
- (unsigned long long)m_uiContactVer;
- (void)setM_uiContactVer:(unsigned long long)arg1;
- (id)m_nsProfileJumpUrl;
- (void)setM_nsProfileJumpUrl:(id)arg1;
- (id)m_nsAddMemberUrl;
- (void)setM_nsAddMemberUrl:(id)arg1;
- (unsigned int)m_uiUserFlag;
- (void)setM_uiUserFlag:(unsigned int)arg1;
- (unsigned int)m_uiContactType;
- (void)setM_uiContactType:(unsigned int)arg1;
- (id)m_oRoomData;
- (void)setM_oRoomData:(id)arg1;
- (BOOL)m_bHeadImageUpdateFlag;
- (void)setM_bHeadImageUpdateFlag:(BOOL)arg1;
- (id)m_nsBrandUserName;
- (void)setM_nsBrandUserName:(id)arg1;
- (BOOL)m_bUpdateFlag;
- (void)setM_bUpdateFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

