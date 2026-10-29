@interface WALaunchCGIReportInfo : NSObject
{
    unsigned int _debugType; // +0x8
    unsigned int _appVersion; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _appServiceType; // +0x14
    unsigned int _requestType; // +0x18
    NSString * _appId; // +0x20
    long long _beginTime; // +0x28
    NSString * _username; // +0x30
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)debugType;
- (void)setDebugType:(unsigned int)arg1;
- (long long)beginTime;
- (void)setBeginTime:(long long)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)requestType;
- (void)setRequestType:(unsigned int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end

