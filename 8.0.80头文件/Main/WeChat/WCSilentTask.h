@interface WCSilentTask : NSObject
{
    int _maxConcurrentCount; // +0x8
    int _cumulativeCount; // +0xc
    int _overTimeCount; // +0x10
    int _stackReportCount; // +0x14
    NSString * _name; // +0x18
    unsigned long long _policy; // +0x20
    unsigned long long _priority; // +0x28
    MMContext * _context; // +0x30
    unsigned long long _status; // +0x38
    double _cumulativeWallTime; // +0x40
    NSRecursiveLock * _lock; // +0x48
}
- (id)initWithName:(id)arg1;
- (void)runLoop;
- (void)willPause;
- (void)didPause;
- (void)willResume;
- (void)didResume;
- (BOOL)start;
- (BOOL)stop;
- (BOOL)changeStatusFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)description;
- (void)printSummary;
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
- (int)overTimeCount;
- (void)setOverTimeCount:(int)arg1;
- (int)stackReportCount;
- (void)setStackReportCount:(int)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
