@interface CLocalInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _m_bHasShowChooseView; // +0x8
    BOOL _m_bIsAuthPushLoginURL; // +0x9
    BOOL _m_bIsOpenVoicePrint; // +0xa
    BOOL _m_isAreadyShowFontSettingTips; // +0xb
    BOOL _m_isAreadyChangeWeChatFontSetting; // +0xc
    BOOL _m_isNoPwdStatusDisable; // +0xd
    unsigned int _m_uiLastUin; // +0x10
    unsigned int _m_uiBindAcountFlag; // +0x14
    unsigned int _m_uiLastLoginAcountType; // +0x18
    unsigned int _m_uiFontLevel; // +0x1c
    unsigned int _m_uiGlobalFontLevel; // +0x20
    unsigned int _m_uiCachedFontLevel; // +0x24
    unsigned int _m_uiManualSetFontLevel; // +0x28
    unsigned int _m_uiWebviewFontLevel; // +0x2c
    unsigned int _m_uiNetControlBitFlag; // +0x30
    NSString * _m_nsCurUsrName; // +0x38
    NSString * _m_nsLastUserName; // +0x40
    NSString * _m_nsLastLoginName; // +0x48
    NSString * _m_nsLastNickName; // +0x50
    unsigned long long _m_uiLastUin64; // +0x58
    NSData * _m_dtAutoAuthKey; // +0x60
    NSData * _m_dtLastKSid; // +0x68
    NSData * _m_nsLastSvrID; // +0x70
    NSData * _m_nsLastServerIndexBuffer; // +0x78
    NSString * _m_nsPushLoginURLTips; // +0x80
    NSString * _m_nsLastPhoneNumber; // +0x88
    NSString * _m_nsSystemContentSize; // +0x90
}
+ (void)PBArrayAdd_m_nsCurUsrName;
+ (void)PBArrayAdd_m_nsLastUserName;
+ (void)PBArrayAdd_m_nsLastLoginName;
+ (void)PBArrayAdd_m_nsLastNickName;
+ (void)PBArrayAdd_m_uiLastUin;
+ (void)PBArrayAdd_m_dtAutoAuthKey;
+ (void)PBArrayAdd_m_dtLastKSid;
+ (void)PBArrayAdd_m_uiBindAcountFlag;
+ (void)PBArrayAdd_m_uiLastLoginAcountType;
+ (void)PBArrayAdd_m_nsLastSvrID;
+ (void)PBArrayAdd_m_nsPushLoginURLTips;
+ (void)PBArrayAdd_m_bHasShowChooseView;
+ (void)PBArrayAdd_m_bIsAuthPushLoginURL;
+ (void)PBArrayAdd_m_bIsOpenVoicePrint;
+ (void)PBArrayAdd_m_uiFontLevel;
+ (void)PBArrayAdd_m_uiGlobalFontLevel;
+ (void)PBArrayAdd_m_uiWebviewFontLevel;
+ (void)PBArrayAdd_m_uiNetControlBitFlag;
+ (void)PBArrayAdd_m_nsLastPhoneNumber;
+ (void)PBArrayAdd_m_nsSystemContentSize;
+ (void)PBArrayAdd_m_isAreadyShowFontSettingTips;
+ (void)PBArrayAdd_m_isAreadyChangeWeChatFontSetting;
+ (void)PBArrayAdd_m_uiCachedFontLevel;
+ (void)PBArrayAdd_m_uiManualSetFontLevel;
+ (void)PBArrayAdd_m_uiLastUin64;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;
- (id)m_nsCurUsrName;
- (void)setM_nsCurUsrName:(id)arg1;
- (id)m_nsLastUserName;
- (void)setM_nsLastUserName:(id)arg1;
- (id)m_nsLastLoginName;
- (void)setM_nsLastLoginName:(id)arg1;
- (id)m_nsLastNickName;
- (void)setM_nsLastNickName:(id)arg1;
- (unsigned int)m_uiLastUin;
- (void)setM_uiLastUin:(unsigned int)arg1;
- (unsigned long long)m_uiLastUin64;
- (void)setM_uiLastUin64:(unsigned long long)arg1;
- (id)m_dtAutoAuthKey;
- (void)setM_dtAutoAuthKey:(id)arg1;
- (id)m_dtLastKSid;
- (void)setM_dtLastKSid:(id)arg1;
- (unsigned int)m_uiBindAcountFlag;
- (void)setM_uiBindAcountFlag:(unsigned int)arg1;
- (unsigned int)m_uiLastLoginAcountType;
- (void)setM_uiLastLoginAcountType:(unsigned int)arg1;
- (id)m_nsLastSvrID;
- (void)setM_nsLastSvrID:(id)arg1;
- (id)m_nsLastServerIndexBuffer;
- (void)setM_nsLastServerIndexBuffer:(id)arg1;
- (id)m_nsPushLoginURLTips;
- (void)setM_nsPushLoginURLTips:(id)arg1;
- (unsigned int)m_uiFontLevel;
- (void)setM_uiFontLevel:(unsigned int)arg1;
- (unsigned int)m_uiGlobalFontLevel;
- (void)setM_uiGlobalFontLevel:(unsigned int)arg1;
- (unsigned int)m_uiCachedFontLevel;
- (void)setM_uiCachedFontLevel:(unsigned int)arg1;
- (unsigned int)m_uiManualSetFontLevel;
- (void)setM_uiManualSetFontLevel:(unsigned int)arg1;
- (BOOL)m_bHasShowChooseView;
- (void)setM_bHasShowChooseView:(BOOL)arg1;
- (BOOL)m_bIsAuthPushLoginURL;
- (void)setM_bIsAuthPushLoginURL:(BOOL)arg1;
- (BOOL)m_bIsOpenVoicePrint;
- (void)setM_bIsOpenVoicePrint:(BOOL)arg1;
- (unsigned int)m_uiWebviewFontLevel;
- (void)setM_uiWebviewFontLevel:(unsigned int)arg1;
- (unsigned int)m_uiNetControlBitFlag;
- (void)setM_uiNetControlBitFlag:(unsigned int)arg1;
- (id)m_nsLastPhoneNumber;
- (void)setM_nsLastPhoneNumber:(id)arg1;
- (id)m_nsSystemContentSize;
- (void)setM_nsSystemContentSize:(id)arg1;
- (BOOL)m_isAreadyShowFontSettingTips;
- (void)setM_isAreadyShowFontSettingTips:(BOOL)arg1;
- (BOOL)m_isAreadyChangeWeChatFontSetting;
- (void)setM_isAreadyChangeWeChatFontSetting:(BOOL)arg1;
- (BOOL)m_isNoPwdStatusDisable;
- (void)setM_isNoPwdStatusDisable:(BOOL)arg1;
- (void).cxx_destruct;
@end
