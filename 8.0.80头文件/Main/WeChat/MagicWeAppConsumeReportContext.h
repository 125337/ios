@interface MagicWeAppConsumeReportContext : NSObject
{
    unsigned int _appVersion; // +0x8
    unsigned int _consumeState; // +0xc
    unsigned int _preloadExperimentEnabled; // +0x10
    NSString * _appId; // +0x18
    NSString * _envVersion; // +0x20
    NSString * _subpackage; // +0x28
    unsigned long long _launchId; // +0x30
    MagicWeAppResourcePreloadTask * _task; // +0x38
    double _waitStartTime; // +0x40
}
- (id)initWithAppId:(id)arg1 envVersion:(id)arg2 appVersion:(unsigned int)arg3 subpackage:(id)arg4 launchId:(unsigned long long)arg5;
- (void)updateWithTask:(id)arg1 consumeState:(unsigned int)arg2 waitStartTime:(double)arg3;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)envVersion;
- (void)setEnvVersion:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)subpackage;
- (void)setSubpackage:(id)arg1;
- (unsigned long long)launchId;
- (void)setLaunchId:(unsigned long long)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (unsigned int)consumeState;
- (void)setConsumeState:(unsigned int)arg1;
- (double)waitStartTime;
- (void)setWaitStartTime:(double)arg1;
- (unsigned int)preloadExperimentEnabled;
- (void)setPreloadExperimentEnabled:(unsigned int)arg1;
- (void).cxx_destruct;
@end
