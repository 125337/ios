@interface WCBackgroundTask : NSObject
{
    int _maxConcurrentCount; // +0x8
    int _cumulativeCount; // +0xc
    NSString * _name; // +0x10
    unsigned long long _policy; // +0x18
    unsigned long long _priority; // +0x20
    MMContext * _context; // +0x28
    unsigned long long _status; // +0x30
    double _cumulativeWallTime; // +0x38
}
- (id)initWithName:(id)arg1;
- (void)run;
- (void)willPause;
- (void)didPause;
- (void)willResume;
- (void)didResume;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)policy;
- (void)setPolicy:(unsigned long long)arg1;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (int)maxConcurrentCount;
- (void)setMaxConcurrentCount:(int)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (int)cumulativeCount;
- (void)setCumulativeCount:(int)arg1;
- (double)cumulativeWallTime;
- (void)setCumulativeWallTime:(double)arg1;
- (void).cxx_destruct;
@end

