@interface MMAppRefreshTokenAppInfo : MMObject
{
    NSString * _appID; // +0x8
    NSString * _appIconUrl; // +0x10
    NSString * _appNickname; // +0x18
    NSString * _universalLink; // +0x20
    NSString * _sdkVersion; // +0x28
    NSString * _bundleID; // +0x30
    NSString * _sdkBundleID; // +0x38
    NSString * _contextID; // +0x40
}
- (id)description;
- (void)fillWithOpenParameter:(id)arg1;
- (void)fillWithWCPayOpenParameter:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)appIconUrl;
- (void)setAppIconUrl:(id)arg1;
- (id)appNickname;
- (void)setAppNickname:(id)arg1;
- (id)universalLink;
- (void)setUniversalLink:(id)arg1;
- (id)sdkVersion;
- (void)setSdkVersion:(id)arg1;
- (id)bundleID;
- (void)setBundleID:(id)arg1;
- (id)sdkBundleID;
- (void)setSdkBundleID:(id)arg1;
- (id)contextID;
- (void)setContextID:(id)arg1;
- (void).cxx_destruct;
@end

