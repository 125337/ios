@interface MMFinderLiveFreeFloatMsgConfig : NSObject
{
    unsigned long long _stayTimeLimit; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _wording; // +0x18
    unsigned long long _enableTimestamp; // +0x20
    NSString * _guideWording; // +0x28
}
+ (id)configFromFreeFloatMsgInfo:(id)arg1;
- (unsigned long long)stayTimeLimit;
- (void)setStayTimeLimit:(unsigned long long)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (unsigned long long)enableTimestamp;
- (void)setEnableTimestamp:(unsigned long long)arg1;
- (id)guideWording;
- (void)setGuideWording:(id)arg1;
- (void).cxx_destruct;
@end

