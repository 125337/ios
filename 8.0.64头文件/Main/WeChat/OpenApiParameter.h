@interface OpenApiParameter : MMObject
{
    BOOL _isLaunchByUniversalLink; // +0x8
    BOOL _isDegradeLaunchByScheme; // +0x9
    BOOL _isAppPassDataWithUrl; // +0xa
    unsigned int _tokenVerifyResult; // +0xc
    unsigned int _appSupportUrlParamsType; // +0x10
    NSURL * _url; // +0x18
    NSString * _apiName; // +0x20
    NSString * _appID; // +0x28
    NSString * _bundleID; // +0x30
    NSString * _token; // +0x38
    NSString * _contextID; // +0x40
    NSString * _sdkBundleID; // +0x48
    AppCommunicateData * _appData; // +0x50
}
- (id)description;
- (id)universalLink;
- (id)sdkVersion;
- (BOOL)isSDKResendByRefreshToken;
- (void)clearAppDataUniversalLink;
- (id)covertToWCPayOpenApiParamter;
- (id)signatureNodeDict;
- (unsigned int)messageType;
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
- (id)appData;
- (void)setAppData:(id)arg1;
- (unsigned int)appSupportUrlParamsType;
- (void)setAppSupportUrlParamsType:(unsigned int)arg1;
- (BOOL)isAppPassDataWithUrl;
- (void)setIsAppPassDataWithUrl:(BOOL)arg1;
- (void).cxx_destruct;
@end
