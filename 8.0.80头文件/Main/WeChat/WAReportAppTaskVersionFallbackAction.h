@interface WAReportAppTaskVersionFallbackAction : WAReportBaseItem
{
    BOOL _isWeakNet; // +0x8
    unsigned int _targetAppVersion; // +0xc
    unsigned int _localAppVersion; // +0x10
    unsigned int _waitTimeInMs; // +0x14
    unsigned long long _fallbackScene; // +0x18
    NSString * _netType; // +0x20
}
- (int)reportID;
- (id)reportString;
- (unsigned int)targetAppVersion;
- (void)setTargetAppVersion:(unsigned int)arg1;
- (unsigned int)localAppVersion;
- (void)setLocalAppVersion:(unsigned int)arg1;
- (unsigned long long)fallbackScene;
- (void)setFallbackScene:(unsigned long long)arg1;
- (unsigned int)waitTimeInMs;
- (void)setWaitTimeInMs:(unsigned int)arg1;
- (id)netType;
- (void)setNetType:(id)arg1;
- (BOOL)isWeakNet;
- (void)setIsWeakNet:(BOOL)arg1;
- (void).cxx_destruct;
@end
