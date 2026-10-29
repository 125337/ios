@interface MagicWeAppResourcePreloadConsumeResult : NSObject
{
    BOOL _success; // +0x8
    unsigned int _consumeState; // +0xc
    unsigned int _appServiceType; // +0x10
    unsigned int _targetAppServiceType; // +0x14
    unsigned int _preloadExperimentEnabled; // +0x18
    MagicWeAppResourcePreloadResult * _preloadResult; // +0x20
    unsigned long long _preloadTraceId; // +0x28
    long long _preloadConsumeWaitMs; // +0x30
    long long _preloadStartToConsumeMs; // +0x38
    NSString * _errorMessage; // +0x40
}
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (unsigned int)consumeState;
- (void)setConsumeState:(unsigned int)arg1;
- (id)preloadResult;
- (void)setPreloadResult:(id)arg1;
- (unsigned long long)preloadTraceId;
- (void)setPreloadTraceId:(unsigned long long)arg1;
- (long long)preloadConsumeWaitMs;
- (void)setPreloadConsumeWaitMs:(long long)arg1;
- (long long)preloadStartToConsumeMs;
- (void)setPreloadStartToConsumeMs:(long long)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)targetAppServiceType;
- (void)setTargetAppServiceType:(unsigned int)arg1;
- (unsigned int)preloadExperimentEnabled;
- (void)setPreloadExperimentEnabled:(unsigned int)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (void).cxx_destruct;
@end
