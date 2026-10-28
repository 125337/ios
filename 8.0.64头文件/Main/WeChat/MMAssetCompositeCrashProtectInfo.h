@interface MMAssetCompositeCrashProtectInfo : NSObject <NSCoding>
{
    BOOL _isRunning; // +0x8
    BOOL _isUnsafe; // +0x9
    NSString * _taskID; // +0x10
    NSMutableArray * _rebootTypes; // +0x18
    double _startTime; // +0x20
    double _endTime; // +0x28
    long long _taskStartTimes; // +0x30
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskID:(id)arg1;
- (void)onTaskStart;
- (void)onTaskEnd;
- (void)onTaskCheck:(unsigned long long)arg1 isConcernedRebootType:(BOOL)arg2;
- (BOOL)isUnsafe;
- (id)rebootTypes;
- (double)encodeDuration;
- (id)description;
- (void)report;
- (id)reportString;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (void)setRebootTypes:(id)arg1;
- (void)setIsUnsafe:(BOOL)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (long long)taskStartTimes;
- (void)setTaskStartTimes:(long long)arg1;
- (void).cxx_destruct;
@end
