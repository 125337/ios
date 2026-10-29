@interface WAAppTaskKillInfo : NSObject
{
    unsigned int _killReason; // +0x8
    NSString * _appid; // +0x10
    unsigned long long _killTimeStampInMs; // +0x18
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)killReason;
- (void)setKillReason:(unsigned int)arg1;
- (unsigned long long)killTimeStampInMs;
- (void)setKillTimeStampInMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

