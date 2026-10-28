@interface OpenSDKOAuthRequest : MMObject
{
    BOOL _isWXLaunchByUniversalLink; // +0x8
    BOOL _isOption1; // +0x9
    BOOL _nonautomatic; // +0xa
    unsigned int _tokenVerifyResult; // +0xc
    NSString * _appId; // +0x10
    NSString * _bundleId; // +0x18
    NSString * _scope; // +0x20
    NSString * _state; // +0x28
    NSString * _universalLink; // +0x30
    NSString * _sdkVersion; // +0x38
    NSString * _sdkToken; // +0x40
    NSString * _sdkBundleID; // +0x48
    NSString * _extData; // +0x50
}
- (id)description;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)bundleId;
- (void)setBundleId:(id)arg1;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)universalLink;
- (void)setUniversalLink:(id)arg1;
- (id)sdkVersion;
- (void)setSdkVersion:(id)arg1;
- (id)sdkToken;
- (void)setSdkToken:(id)arg1;
- (id)sdkBundleID;
- (void)setSdkBundleID:(id)arg1;
- (BOOL)isWXLaunchByUniversalLink;
- (void)setIsWXLaunchByUniversalLink:(BOOL)arg1;
- (unsigned int)tokenVerifyResult;
- (void)setTokenVerifyResult:(unsigned int)arg1;
- (BOOL)isOption1;
- (void)setIsOption1:(BOOL)arg1;
- (id)extData;
- (void)setExtData:(id)arg1;
- (BOOL)nonautomatic;
- (void)setNonautomatic:(BOOL)arg1;
- (void).cxx_destruct;
@end
