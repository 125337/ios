@interface TranslateLinkParameter : MMObject
{
    BOOL _isWXLaunchByUniversalLink; // +0x8
    BOOL _isAutoResend; // +0x9
    unsigned int _scene; // +0xc
    unsigned int _schemeFlag; // +0x10
    unsigned int _verifyScene; // +0x14
    unsigned int _tokenVerifyResult; // +0x18
    NSString * _appId; // +0x20
    NSString * _link; // +0x28
    NSString * _bundleId; // +0x30
    NSString * _universalLink; // +0x38
    NSString * _sdkBundleId; // +0x40
    NSString * _sdkToken; // +0x48
    NSString * _sdkVersion; // +0x50
    SdkFinderInfo * _finderInfo; // +0x58
    AppmsgSignature3rd * _appmsgSignature3rd; // +0x60
}
- (id)description;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)bundleId;
- (void)setBundleId:(id)arg1;
- (unsigned int)schemeFlag;
- (void)setSchemeFlag:(unsigned int)arg1;
- (id)universalLink;
- (void)setUniversalLink:(id)arg1;
- (id)sdkBundleId;
- (void)setSdkBundleId:(id)arg1;
- (id)sdkToken;
- (void)setSdkToken:(id)arg1;
- (id)sdkVersion;
- (void)setSdkVersion:(id)arg1;
- (unsigned int)verifyScene;
- (void)setVerifyScene:(unsigned int)arg1;
- (unsigned int)tokenVerifyResult;
- (void)setTokenVerifyResult:(unsigned int)arg1;
- (BOOL)isWXLaunchByUniversalLink;
- (void)setIsWXLaunchByUniversalLink:(BOOL)arg1;
- (BOOL)isAutoResend;
- (void)setIsAutoResend:(BOOL)arg1;
- (id)finderInfo;
- (void)setFinderInfo:(id)arg1;
- (id)appmsgSignature3rd;
- (void)setAppmsgSignature3rd:(id)arg1;
- (void).cxx_destruct;
@end

