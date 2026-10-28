@interface WAAppPlatformStateChangedContext : MMObject
{
    BOOL _executeDelayToForegroundJSAPI; // +0x8
    unsigned int _changeReason; // +0xc
    unsigned long long _platformType; // +0x10
    unsigned long long _changeDirection; // +0x18
    WAAppStateChangedContextInfo * _contextInfo; // +0x20
}
- (id)description;
- (unsigned long long)platformType;
- (void)setPlatformType:(unsigned long long)arg1;
- (unsigned long long)changeDirection;
- (void)setChangeDirection:(unsigned long long)arg1;
- (unsigned int)changeReason;
- (void)setChangeReason:(unsigned int)arg1;
- (BOOL)executeDelayToForegroundJSAPI;
- (void)setExecuteDelayToForegroundJSAPI:(BOOL)arg1;
- (id)contextInfo;
- (void)setContextInfo:(id)arg1;
- (void).cxx_destruct;
@end
