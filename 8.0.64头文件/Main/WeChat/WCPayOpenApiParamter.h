@interface WCPayOpenApiParamter : NSObject <PBCoding>
{
    BOOL _isLaunchByUniversalLink; // +0x8
    BOOL _isDegradeLaunchByScheme; // +0x9
    BOOL _isSDKResendByRefreshToken; // +0xa
    unsigned int _tokenVerifyResult; // +0xc
    unsigned int _sdkUrlParamType; // +0x10
    NSString * _url; // +0x18
    NSString * _apiName; // +0x20
    NSString * _appID; // +0x28
    NSString * _bundleID; // +0x30
    NSString * _token; // +0x38
    NSString * _contextID; // +0x40
    NSString * _sdkBundleID; // +0x48
    NSString * _universalLink; // +0x50
    NSString * _sdkVersion; // +0x58
}
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_apiName;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_bundleID;
+ (void)PBArrayAdd_isLaunchByUniversalLink;
+ (void)PBArrayAdd_isDegradeLaunchByScheme;
+ (void)PBArrayAdd_token;
+ (void)PBArrayAdd_contextID;
+ (void)PBArrayAdd_sdkBundleID;
+ (void)PBArrayAdd_tokenVerifyResult;
+ (void)PBArrayAdd_universalLink;
+ (void)PBArrayAdd_sdkVersion;
+ (void)PBArrayAdd_isSDKResendByRefreshToken;
+ (void)PBArrayAdd_sdkUrlParamType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)apiName;
- (void)setApiName:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)bundleID;
- (void)setBundleID:(id)arg1;
- (BOOL)isLaunchByUniversalLink;
- (void)setIsLaunchByUniversalLink:(BOOL)arg1;
- (BOOL)isDegradeLaunchByScheme;
- (void)setIsDegradeLaunchByScheme:(BOOL)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)contextID;
- (void)setContextID:(id)arg1;
- (id)sdkBundleID;
- (void)setSdkBundleID:(id)arg1;
- (unsigned int)tokenVerifyResult;
- (void)setTokenVerifyResult:(unsigned int)arg1;
- (id)universalLink;
- (void)setUniversalLink:(id)arg1;
- (id)sdkVersion;
- (void)setSdkVersion:(id)arg1;
- (BOOL)isSDKResendByRefreshToken;
- (void)setIsSDKResendByRefreshToken:(BOOL)arg1;
- (unsigned int)sdkUrlParamType;
- (void)setSdkUrlParamType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
