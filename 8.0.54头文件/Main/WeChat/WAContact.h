@interface WAContact : NSObject
{
    BOOL _m_isExtInfoValid; // +0x8
    unsigned int _m_uiType; // +0xc
    unsigned int _m_uiWxAppOpt; // +0x10
    unsigned int _m_uiDebugModeType; // +0x14
    unsigned int _uiLastUpdateAppVersionInfoTime; // +0x18
    unsigned int _uiLastLaunchAppTime; // +0x1c
    unsigned int _m_uiCertificationFlag; // +0x20
    NSString * m_nsExternalInfo; // +0x28
    NSString * m_nsNickName; // +0x30
    NSString * m_nsSignature; // +0x38
    CAppBrandInfo * appBrandInfo; // +0x40
    NSString * _m_nsUsrName; // +0x48
    NSString * _m_nsAppId; // +0x50
    NSString * _m_nsAliasName; // +0x58
    NSString * _m_nsFullPY; // +0x60
    NSString * _m_nsBrandIconUrl; // +0x68
    NSString * _m_nsHeadHDImgUrl; // +0x70
    NSString * _m_nsHeadImgUrl; // +0x78
    NSString * _m_nsImgStatus; // +0x80
    NSDictionary * _externalInfoJSONCache; // +0x88
}
+ (id)contactListWithWeAppContactList:(id)arg1;
+ (BOOL)isWeAppUserName:(id)arg1;
+ (BOOL)isWeAppAppId:(id)arg1;
- (id)toCContact;
- (id)description;
- (BOOL)copyFieldFromContact:(id)arg1;
- (void)setM_nsNickName:(id)arg1;
- (void)setM_nsSignature:(id)arg1;
- (void)setM_nsExternalInfo:(id)arg1;
- (BOOL)isAppBrandInfoValid;
- (id)getAppBrandInfo;
- (id)m_nsAppId;
- (id)getAppID;
- (id)getContactHeadImgUrl;
- (id)getContactDisplayName;
- (id)getListDisplayName;
- (BOOL)isNormalWeApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isGameApp;
- (BOOL)isLiteGame;
- (BOOL)isNormalWeAppWithGameRuntime;
- (BOOL)isWeAppContact;
- (BOOL)isContactValid;
- (id)getExternalInfoDictionary;
- (BOOL)hasSameOrNewerVersionThan:(unsigned long long)arg1;
- (BOOL)isReleaseContact;
- (BOOL)isDebugContact;
- (BOOL)isRDMContact;
- (BOOL)isDebugModeTypeContact:(unsigned long long)arg1;
- (id)getDicClientJSExtInfo;
- (id)getArrCallPluginInfo;
- (BOOL)hasReferencePluginAppid:(id)arg1;
- (BOOL)isChatToolPath:(id)arg1;
- (id)pluginDicForReferencePluginAppid:(id)arg1;
- (id)allReferencePluginAppid;
- (unsigned int)innerVersionForPluginAppid:(id)arg1;
- (id)appBrandInfo;
- (id)m_nsExternalInfo;
- (id)m_nsNickName;
- (id)m_nsSignature;
- (void)setAppBrandInfo:(id)arg1;
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (void)setM_nsAppId:(id)arg1;
- (id)m_nsAliasName;
- (void)setM_nsAliasName:(id)arg1;
- (id)m_nsFullPY;
- (void)setM_nsFullPY:(id)arg1;
- (id)m_nsBrandIconUrl;
- (void)setM_nsBrandIconUrl:(id)arg1;
- (id)m_nsHeadHDImgUrl;
- (void)setM_nsHeadHDImgUrl:(id)arg1;
- (id)m_nsHeadImgUrl;
- (void)setM_nsHeadImgUrl:(id)arg1;
- (unsigned int)m_uiType;
- (void)setM_uiType:(unsigned int)arg1;
- (unsigned int)m_uiWxAppOpt;
- (void)setM_uiWxAppOpt:(unsigned int)arg1;
- (unsigned int)m_uiDebugModeType;
- (void)setM_uiDebugModeType:(unsigned int)arg1;
- (unsigned int)uiLastUpdateAppVersionInfoTime;
- (void)setUiLastUpdateAppVersionInfoTime:(unsigned int)arg1;
- (unsigned int)uiLastLaunchAppTime;
- (void)setUiLastLaunchAppTime:(unsigned int)arg1;
- (unsigned int)m_uiCertificationFlag;
- (void)setM_uiCertificationFlag:(unsigned int)arg1;
- (id)m_nsImgStatus;
- (void)setM_nsImgStatus:(id)arg1;
- (id)externalInfoJSONCache;
- (void)setExternalInfoJSONCache:(id)arg1;
- (BOOL)m_isExtInfoValid;
- (void)setM_isExtInfoValid:(BOOL)arg1;
- (void).cxx_destruct;
@end

