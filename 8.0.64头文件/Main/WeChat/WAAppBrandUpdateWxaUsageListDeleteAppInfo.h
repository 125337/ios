@interface WAAppBrandUpdateWxaUsageListDeleteAppInfo : NSObject
{
    unsigned int _appType; // +0x8
    NSString * _username; // +0x10
    NSString * _appId; // +0x18
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
