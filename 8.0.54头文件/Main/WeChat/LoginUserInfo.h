@interface LoginUserInfo : NSObject <PBCoding>
{
    BOOL _m_bIsOpenVoicePrint; // +0x8
    BOOL _m_bIsOpenFace; // +0x9
    unsigned int _m_uiBindAcountFlag; // +0xc
    unsigned int _m_uiLastLoginAcountType; // +0x10
    NSString * _m_nsUserName; // +0x18
    NSString * _m_nsLoginName; // +0x20
    NSString * _m_nsAliasName; // +0x28
    NSString * _m_nsNickName; // +0x30
    unsigned long long _m_ui64Uin; // +0x38
    NSString * _m_nsPhoneNumber; // +0x40
    NSString * _m_nsNoPwdLoginTicket; // +0x48
    NSData * _m_dtAutoAuthKey; // +0x50
    NSString * _m_bindLoginUserName; // +0x58
    NSData * _passkeyCredentialID; // +0x60
    unsigned long long _extStatus2; // +0x68
}
+ (void)PBArrayAdd_m_nsUserName;
+ (void)PBArrayAdd_m_nsLoginName;
+ (void)PBArrayAdd_m_nsNickName;
+ (void)PBArrayAdd_m_ui64Uin;
+ (void)PBArrayAdd_m_uiBindAcountFlag;
+ (void)PBArrayAdd_m_uiLastLoginAcountType;
+ (void)PBArrayAdd_m_nsPhoneNumber;
+ (void)PBArrayAdd_m_nsNoPwdLoginTicket;
+ (void)PBArrayAdd_m_bIsOpenVoicePrint;
+ (void)PBArrayAdd_m_dtAutoAuthKey;
+ (void)PBArrayAdd_m_bindLoginUserName;
+ (void)PBArrayAdd_m_bIsOpenFace;
+ (void)PBArrayAdd_m_nsAliasName;
+ (void)PBArrayAdd_passkeyCredentialID;
+ (void)PBArrayAdd_extStatus2;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)hasBindAccount;
- (void)setHasBindAccount:(BOOL)arg1;
- (id)getLastLoginName;
- (id)getLoginUserName;
- (BOOL)isPasskeyOpened;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (id)m_nsLoginName;
- (void)setM_nsLoginName:(id)arg1;
- (id)m_nsAliasName;
- (void)setM_nsAliasName:(id)arg1;
- (id)m_nsNickName;
- (void)setM_nsNickName:(id)arg1;
- (unsigned long long)m_ui64Uin;
- (void)setM_ui64Uin:(unsigned long long)arg1;
- (unsigned int)m_uiBindAcountFlag;
- (void)setM_uiBindAcountFlag:(unsigned int)arg1;
- (unsigned int)m_uiLastLoginAcountType;
- (void)setM_uiLastLoginAcountType:(unsigned int)arg1;
- (id)m_nsPhoneNumber;
- (void)setM_nsPhoneNumber:(id)arg1;
- (id)m_nsNoPwdLoginTicket;
- (void)setM_nsNoPwdLoginTicket:(id)arg1;
- (BOOL)m_bIsOpenVoicePrint;
- (void)setM_bIsOpenVoicePrint:(BOOL)arg1;
- (BOOL)m_bIsOpenFace;
- (void)setM_bIsOpenFace:(BOOL)arg1;
- (id)m_dtAutoAuthKey;
- (void)setM_dtAutoAuthKey:(id)arg1;
- (id)m_bindLoginUserName;
- (void)setM_bindLoginUserName:(id)arg1;
- (id)passkeyCredentialID;
- (void)setPasskeyCredentialID:(id)arg1;
- (unsigned long long)extStatus2;
- (void)setExtStatus2:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

