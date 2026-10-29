@interface MinimizeGenerateReportInfo : NSObject
{
    unsigned int _generateScene; // +0x8
    int _state; // +0xc
    unsigned long long _clickTimeStamp; // +0x10
    unsigned long long _generateType; // +0x18
    NSString * _miniSessionId; // +0x20
    NSString * _aggreSessionId; // +0x28
    long long _taskOrder; // +0x30
    unsigned long long _normalTaskCnt; // +0x38
    unsigned long long _passiveTaskCnt; // +0x40
    unsigned long long _taskType; // +0x48
    unsigned long long _bizScene; // +0x50
    NSString * _bizId; // +0x58
    NSString * _bizSubId; // +0x60
    NSString * _bizName; // +0x68
    unsigned long long _overloadedType; // +0x70
}
- (unsigned long long)clickTimeStamp;
- (void)setClickTimeStamp:(unsigned long long)arg1;
- (unsigned long long)generateType;
- (void)setGenerateType:(unsigned long long)arg1;
- (unsigned int)generateScene;
- (void)setGenerateScene:(unsigned int)arg1;
- (id)miniSessionId;
- (void)setMiniSessionId:(id)arg1;
- (id)aggreSessionId;
- (void)setAggreSessionId:(id)arg1;
- (long long)taskOrder;
- (void)setTaskOrder:(long long)arg1;
- (unsigned long long)normalTaskCnt;
- (void)setNormalTaskCnt:(unsigned long long)arg1;
- (unsigned long long)passiveTaskCnt;
- (void)setPassiveTaskCnt:(unsigned long long)arg1;
- (unsigned long long)taskType;
- (void)setTaskType:(unsigned long long)arg1;
- (unsigned long long)bizScene;
- (void)setBizScene:(unsigned long long)arg1;
- (id)bizId;
- (void)setBizId:(id)arg1;
- (id)bizSubId;
- (void)setBizSubId:(id)arg1;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (int)state;
- (void)setState:(int)arg1;
- (unsigned long long)overloadedType;
- (void)setOverloadedType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

