@interface MMSessionInfo : NSObject <NSCopying>
{
    NSString * m_nsUserName; // +0x8
    NSString * m_nsFilePath; // +0x10
    unsigned int m_uUnReadCount; // +0x18
    BOOL m_bShowUnReadAsRedDot; // +0x1c
    CContact * m_contact; // +0x20
    CMessageWrap * m_msgWrap; // +0x28
    unsigned int m_uLastTime; // +0x30
    BOOL m_bIsTop; // +0x34
    unsigned int m_uTopTime; // +0x38
    unsigned int m_uUnTopTime; // +0x3c
    unsigned int m_uAtMeCount; // +0x40
    unsigned int m_uGreenLabelType; // +0x44
    NSString * m_draftMsg; // +0x48
    unsigned int m_draftMsgTime; // +0x50
    NSString * m_atUserList; // +0x58
    unsigned int m_uNewInvCount; // +0x60
    BOOL m_uNewInvApprove; // +0x64
    BOOL m_bNeedContactVerify; // +0x65
    unsigned int m_uNewNotifyMsgCount; // +0x68
    unsigned int m_uBrandNotifyType; // +0x6c
    NSString * m_nsBrandNotifyPrefixName; // +0x70
    BOOL m_bBrandNotifyNoPrefixName; // +0x78
    BOOL m_bGroupUndoneFlag; // +0x79
    BOOL m_bShouldUpdateTimeField; // +0x7a
    BOOL m_bSpecialAttention; // +0x7b
    BOOL _m_isFolding; // +0x7c
    unsigned int m_uTransferCount; // +0x80
    unsigned int m_uAACount; // +0x84
    unsigned int m_uExclusiveHbCount; // +0x88
    unsigned int _sortTime; // +0x8c
    unsigned int _m_uAtAllCount; // +0x90
    unsigned int _ConIntRes2; // +0x94
    MMSessionInfoExt * m_extendFields; // +0x98
    NSString * m_waUpdatableMsgDigest; // +0xa0
    long long m_referMsgSvrId; // +0xa8
    unsigned long long _m_uBrandAffMsgId; // +0xb0
    NSString * _ConStrRes1; // +0xb8
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_nsUserName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_nsUserName;
+ (const void *)m_uLastTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_uLastTime;
+ (const void *)m_uUnReadCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_uUnReadCount;
+ (const void *)m_bShowUnReadAsRedDot;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_m_bShowUnReadAsRedDot;
+ (const void *)ConIntRes2;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_ConIntRes2;
+ (const void *)ConStrRes1;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_ConStrRes1;
+ (const void *)m_extendFields;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_m_extendFields;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
- (id)init;
- (void)copyFrom:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setM_contact:(id)arg1;
- (void)setM_msgWrap:(id)arg1;
- (void)setM_uLastTime:(unsigned int)arg1;
- (void)updateShowUnReadAsRedDotStatus;
- (void)tryLoadExtInfo;
- (long long)compare:(id)arg1;
- (id)description;
- (BOOL)isInChatBox;
- (BOOL)isInBrandServiceBox;
- (BOOL)isBrandServiceBoxSession;
- (BOOL)isBrandEcsMsgHolderSession;
- (BOOL)isHidden;
- (BOOL)isSingleChatSession;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (id)m_extendFields;
- (void)setM_extendFields:(id)arg1;
- (unsigned int)m_uUnReadCount;
- (void)setM_uUnReadCount:(unsigned int)arg1;
- (BOOL)m_bShowUnReadAsRedDot;
- (void)setM_bShowUnReadAsRedDot:(BOOL)arg1;
- (unsigned int)m_uLastTime;
- (BOOL)m_bIsTop;
- (void)setM_bIsTop:(BOOL)arg1;
- (id)m_contact;
- (id)m_msgWrap;
- (unsigned int)m_uTopTime;
- (void)setM_uTopTime:(unsigned int)arg1;
- (unsigned int)m_uUnTopTime;
- (void)setM_uUnTopTime:(unsigned int)arg1;
- (unsigned int)m_uAtMeCount;
- (void)setM_uAtMeCount:(unsigned int)arg1;
- (unsigned int)m_uGreenLabelType;
- (void)setM_uGreenLabelType:(unsigned int)arg1;
- (id)m_draftMsg;
- (void)setM_draftMsg:(id)arg1;
- (unsigned int)m_draftMsgTime;
- (void)setM_draftMsgTime:(unsigned int)arg1;
- (id)m_atUserList;
- (void)setM_atUserList:(id)arg1;
- (unsigned int)m_uNewInvCount;
- (void)setM_uNewInvCount:(unsigned int)arg1;
- (BOOL)m_uNewInvApprove;
- (void)setM_uNewInvApprove:(BOOL)arg1;
- (BOOL)m_bNeedContactVerify;
- (void)setM_bNeedContactVerify:(BOOL)arg1;
- (unsigned int)m_uTransferCount;
- (void)setM_uTransferCount:(unsigned int)arg1;
- (unsigned int)m_uAACount;
- (void)setM_uAACount:(unsigned int)arg1;
- (id)m_waUpdatableMsgDigest;
- (void)setM_waUpdatableMsgDigest:(id)arg1;
- (unsigned int)m_uNewNotifyMsgCount;
- (void)setM_uNewNotifyMsgCount:(unsigned int)arg1;
- (unsigned int)m_uBrandNotifyType;
- (void)setM_uBrandNotifyType:(unsigned int)arg1;
- (id)m_nsBrandNotifyPrefixName;
- (void)setM_nsBrandNotifyPrefixName:(id)arg1;
- (BOOL)m_bBrandNotifyNoPrefixName;
- (void)setM_bBrandNotifyNoPrefixName:(BOOL)arg1;
- (long long)m_referMsgSvrId;
- (void)setM_referMsgSvrId:(long long)arg1;
- (BOOL)m_bGroupUndoneFlag;
- (void)setM_bGroupUndoneFlag:(BOOL)arg1;
- (BOOL)m_bShouldUpdateTimeField;
- (void)setM_bShouldUpdateTimeField:(BOOL)arg1;
- (unsigned int)m_uExclusiveHbCount;
- (void)setM_uExclusiveHbCount:(unsigned int)arg1;
- (BOOL)m_bSpecialAttention;
- (void)setM_bSpecialAttention:(BOOL)arg1;
- (unsigned int)sortTime;
- (void)setSortTime:(unsigned int)arg1;
- (BOOL)m_isFolding;
- (void)setM_isFolding:(BOOL)arg1;
- (unsigned int)m_uAtAllCount;
- (void)setM_uAtAllCount:(unsigned int)arg1;
- (unsigned long long)m_uBrandAffMsgId;
- (void)setM_uBrandAffMsgId:(unsigned long long)arg1;
- (unsigned int)ConIntRes2;
- (void)setConIntRes2:(unsigned int)arg1;
- (id)ConStrRes1;
- (void)setConStrRes1:(id)arg1;
- (void).cxx_destruct;
@end

