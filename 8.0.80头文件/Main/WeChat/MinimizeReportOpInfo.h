@interface MinimizeReportOpInfo : NSObject
{
    unsigned long long _opType; // +0x8
    NSString * _miniSessionId; // +0x10
    NSString * _aggreSessionId; // +0x18
    unsigned long long _taskIdleTime; // +0x20
    unsigned long long _aggreWindowExistTime; // +0x28
    unsigned long long _singleTaskExistTime; // +0x30
    unsigned long long _taskType; // +0x38
    long long _taskOrder; // +0x40
    unsigned long long _taskForegroundTime; // +0x48
    unsigned long long _taskFoldTime; // +0x50
}
- (unsigned long long)opType;
- (void)setOpType:(unsigned long long)arg1;
- (id)miniSessionId;
- (void)setMiniSessionId:(id)arg1;
- (id)aggreSessionId;
- (void)setAggreSessionId:(id)arg1;
- (unsigned long long)taskIdleTime;
- (void)setTaskIdleTime:(unsigned long long)arg1;
- (unsigned long long)aggreWindowExistTime;
- (void)setAggreWindowExistTime:(unsigned long long)arg1;
- (unsigned long long)singleTaskExistTime;
- (void)setSingleTaskExistTime:(unsigned long long)arg1;
- (unsigned long long)taskType;
- (void)setTaskType:(unsigned long long)arg1;
- (long long)taskOrder;
- (void)setTaskOrder:(long long)arg1;
- (unsigned long long)taskForegroundTime;
- (void)setTaskForegroundTime:(unsigned long long)arg1;
- (unsigned long long)taskFoldTime;
- (void)setTaskFoldTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
