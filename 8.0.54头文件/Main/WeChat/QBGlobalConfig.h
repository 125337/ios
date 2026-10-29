@interface QBGlobalConfig : NSObject
{
    BOOL _bSpdyAccelerateOn; // +0x8
    BOOL _bADFilter; // +0x9
    BOOL _bScreenAdapter; // +0xa
    BOOL _bDisplayImage; // +0xb
    BOOL _bUseTidyWebsite; // +0xc
    BOOL _bIsRetina; // +0xd
    BOOL _newInstall; // +0xe
    BOOL _isUpdateVersion; // +0xf
    BOOL _isUpdateSmallVersion; // +0x10
    BOOL _bGettingGuid; // +0x11
    BOOL _bAuthorize; // +0x12
    BOOL _bThirdInvoke; // +0x13
    BOOL _isFileOpenFromThird; // +0x14
    BOOL _bEnableSecurityCheck; // +0x15
    long long _m_wifiAddr; // +0x18
    long long _configVersion; // +0x20
    long long _startUpType; // +0x28
    long long _wupSuccessCount; // +0x30
    long long _wupFailureCount; // +0x38
}
+ (id)sharedInstance;
+ (void)load;
+ (void)spedSettingDidChanged:(id)arg1;
- (id)init;
- (long long)m_wifiAddr;
- (void)setM_wifiAddr:(long long)arg1;
- (BOOL)bSpdyAccelerateOn;
- (void)setBSpdyAccelerateOn:(BOOL)arg1;
- (BOOL)bADFilter;
- (void)setBADFilter:(BOOL)arg1;
- (BOOL)bScreenAdapter;
- (void)setBScreenAdapter:(BOOL)arg1;
- (BOOL)bDisplayImage;
- (void)setBDisplayImage:(BOOL)arg1;
- (BOOL)bUseTidyWebsite;
- (void)setBUseTidyWebsite:(BOOL)arg1;
- (BOOL)bIsRetina;
- (void)setBIsRetina:(BOOL)arg1;
- (long long)configVersion;
- (void)setConfigVersion:(long long)arg1;
- (long long)startUpType;
- (void)setStartUpType:(long long)arg1;
- (BOOL)newInstall;
- (void)setNewInstall:(BOOL)arg1;
- (BOOL)isUpdateVersion;
- (void)setIsUpdateVersion:(BOOL)arg1;
- (BOOL)isUpdateSmallVersion;
- (void)setIsUpdateSmallVersion:(BOOL)arg1;
- (BOOL)bGettingGuid;
- (void)setBGettingGuid:(BOOL)arg1;
- (long long)wupSuccessCount;
- (void)setWupSuccessCount:(long long)arg1;
- (long long)wupFailureCount;
- (void)setWupFailureCount:(long long)arg1;
- (BOOL)bAuthorize;
- (void)setBAuthorize:(BOOL)arg1;
- (BOOL)bThirdInvoke;
- (void)setBThirdInvoke:(BOOL)arg1;
- (BOOL)isFileOpenFromThird;
- (void)setIsFileOpenFromThird:(BOOL)arg1;
- (BOOL)bEnableSecurityCheck;
- (void)setBEnableSecurityCheck:(BOOL)arg1;
@end

