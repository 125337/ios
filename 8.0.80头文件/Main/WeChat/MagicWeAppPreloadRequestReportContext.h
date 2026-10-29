@interface MagicWeAppPreloadRequestReportContext : NSObject
{
    unsigned int _appVersion; // +0x8
    unsigned int _appServiceType; // +0xc
    unsigned int _targetAppServiceType; // +0x10
    unsigned int _requestResult; // +0x14
    unsigned int _preloadExperimentEnabled; // +0x18
    NSString * _appId; // +0x20
    NSString * _envVersion; // +0x28
    NSString * _subpackage; // +0x30
    unsigned long long _preloadTraceId; // +0x38
    unsigned long long _taskId; // +0x40
}
- (id)initWithAppId:(id)arg1 envVersion:(id)arg2 appVersion:(unsigned int)arg3 subpackage:(id)arg4;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)envVersion;
- (void)setEnvVersion:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)subpackage;
- (void)setSubpackage:(id)arg1;
- (unsigned long long)preloadTraceId;
- (void)setPreloadTraceId:(unsigned long long)arg1;
- (unsigned long long)taskId;
- (void)setTaskId:(unsigned long long)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)targetAppServiceType;
- (void)setTargetAppServiceType:(unsigned int)arg1;
- (unsigned int)requestResult;
- (void)setRequestResult:(unsigned int)arg1;
- (unsigned int)preloadExperimentEnabled;
- (void)setPreloadExperimentEnabled:(unsigned int)arg1;
- (void).cxx_destruct;
@end
