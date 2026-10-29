@interface MMLiveAutoTestCheckLogItem : NSObject
{
    unsigned long long _liveId; // +0x8
    unsigned long long _timestamp; // +0x10
    NSString * _type; // +0x18
    NSString * _log; // +0x20
}
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (void).cxx_destruct;
@end

