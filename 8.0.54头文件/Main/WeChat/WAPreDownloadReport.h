@interface WAPreDownloadReport : MMUserService <MMServiceProtocol>
{
    NSString * _appID; // +0x8
    unsigned long long _appVersion; // +0x10
    unsigned int _appType; // +0x18
    unsigned int _appState; // +0x1c
    NSString * _instanceId; // +0x20
    unsigned int _isPreload; // +0x28
    BOOL _isDownloadedCode; // +0x2c
    unsigned int _scene; // +0x30
    unsigned int _hasSplashScreen; // +0x34
}
- (void)init:(id)arg1 scene:(unsigned int)arg2;
- (void)markEventTriggerDownload:(id)arg1;
- (void)reportPreDownloadStatus:(unsigned int)arg1 value:(unsigned int)arg2;
- (void).cxx_destruct;
@end

