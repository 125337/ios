@interface MMTextLayoutABKey : NSObject
{
    BOOL _enable; // +0x8
    BOOL _enableProfile; // +0x9
    BOOL _enableRandomProfile; // +0xa
    unsigned int _os; // +0xc
    long long _sampleCount; // +0x10
    long long _errorRatio; // +0x18
    long long _statisticsRatio; // +0x20
    long long _step; // +0x28
    long long _maxCount; // +0x30
    long long _maxError; // +0x38
    long long _reportLimit; // +0x40
    long long _mode; // +0x48
    long long _type; // +0x50
    long long _errorDuration; // +0x58
}
- (id)initWithOS:(unsigned int)arg1;
- (BOOL)boolForKey:(id)arg1 valeIfUndefined:(BOOL)arg2;
- (BOOL)isEnable:(id)arg1 valeIfUndefined:(BOOL)arg2;
- (BOOL)isEnable:(id)arg1 valeIfUndefined:(BOOL)arg2 forceDisableIfNotSet:(BOOL)arg3;
- (id)keyWith:(id)arg1;
- (BOOL)boolWithKey:(id)arg1 undef:(BOOL)arg2;
- (BOOL)boolWithKey:(id)arg1 undef:(BOOL)arg2 disableIfNotSet:(BOOL)arg3;
- (long long)integerWithKey:(id)arg1 undef:(long long)arg2;
- (void)setup;
- (id)attrWithFont:(id)arg1 lineBreak:(long long)arg2 breakStrategy:(unsigned long long)arg3;
- (BOOL)probe;
- (BOOL)isRoot;
- (BOOL)isOSAvailable;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (long long)sampleCount;
- (void)setSampleCount:(long long)arg1;
- (long long)errorRatio;
- (void)setErrorRatio:(long long)arg1;
- (long long)statisticsRatio;
- (void)setStatisticsRatio:(long long)arg1;
- (BOOL)enableProfile;
- (void)setEnableProfile:(BOOL)arg1;
- (BOOL)enableRandomProfile;
- (void)setEnableRandomProfile:(BOOL)arg1;
- (unsigned int)os;
- (void)setOs:(unsigned int)arg1;
- (long long)step;
- (void)setStep:(long long)arg1;
- (long long)maxCount;
- (void)setMaxCount:(long long)arg1;
- (long long)maxError;
- (void)setMaxError:(long long)arg1;
- (long long)reportLimit;
- (void)setReportLimit:(long long)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)errorDuration;
- (void)setErrorDuration:(long long)arg1;
@end

