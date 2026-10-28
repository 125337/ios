@interface CUsrInfo : NSObject
{
    NSString * m_nsUsrName; // +0x8
    NSString * m_nsAliasName; // +0x10
    NSString * m_nsNickName; // +0x18
    unsigned int m_uiBindQQUin; // +0x20
    NSString * m_nsEmail; // +0x28
    NSString * m_nsMobile; // +0x30
    unsigned int m_uiStatus; // +0x38
    unsigned int m_uiSex; // +0x3c
    NSString * m_nsCountry; // +0x40
    NSString * m_nsProvince; // +0x48
    NSString * m_nsCity; // +0x50
    NSString * m_nsSignature; // +0x58
    NSString * m_nsHDHeadImgMD5; // +0x60
    unsigned int m_uiPluginInstallStatus; // +0x68
    unsigned int m_uiFacebookFlag; // +0x6c
    NSString * m_nsFacebookID; // +0x70
    NSString * m_nsFacebookName; // +0x78
    NSString * m_nsFacebookToken; // +0x80
    unsigned int m_uiPluginSwitch; // +0x88
    unsigned int _m_uiGMailStatus; // +0x8c
    unsigned int _m_uiGMailSwitch; // +0x90
    NSString * _m_nsGMailAccount; // +0x98
}
- (id)init;
- (id)keyPaths;
- (id)description;
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (id)m_nsAliasName;
- (void)setM_nsAliasName:(id)arg1;
- (id)m_nsNickName;
- (void)setM_nsNickName:(id)arg1;
- (unsigned int)m_uiBindQQUin;
- (void)setM_uiBindQQUin:(unsigned int)arg1;
- (id)m_nsEmail;
- (void)setM_nsEmail:(id)arg1;
- (id)m_nsMobile;
- (void)setM_nsMobile:(id)arg1;
- (unsigned int)m_uiStatus;
- (void)setM_uiStatus:(unsigned int)arg1;
- (id)m_nsCountry;
- (void)setM_nsCountry:(id)arg1;
- (id)m_nsProvince;
- (void)setM_nsProvince:(id)arg1;
- (id)m_nsCity;
- (void)setM_nsCity:(id)arg1;
- (id)m_nsSignature;
- (void)setM_nsSignature:(id)arg1;
- (unsigned int)m_uiSex;
- (void)setM_uiSex:(unsigned int)arg1;
- (id)m_nsHDHeadImgMD5;
- (void)setM_nsHDHeadImgMD5:(id)arg1;
- (unsigned int)m_uiPluginInstallStatus;
- (void)setM_uiPluginInstallStatus:(unsigned int)arg1;
- (unsigned int)m_uiFacebookFlag;
- (void)setM_uiFacebookFlag:(unsigned int)arg1;
- (id)m_nsFacebookID;
- (void)setM_nsFacebookID:(id)arg1;
- (id)m_nsFacebookName;
- (void)setM_nsFacebookName:(id)arg1;
- (id)m_nsFacebookToken;
- (void)setM_nsFacebookToken:(id)arg1;
- (unsigned int)m_uiPluginSwitch;
- (void)setM_uiPluginSwitch:(unsigned int)arg1;
- (id)m_nsGMailAccount;
- (void)setM_nsGMailAccount:(id)arg1;
- (unsigned int)m_uiGMailStatus;
- (void)setM_uiGMailStatus:(unsigned int)arg1;
- (unsigned int)m_uiGMailSwitch;
- (void)setM_uiGMailSwitch:(unsigned int)arg1;
- (void).cxx_destruct;
@end
