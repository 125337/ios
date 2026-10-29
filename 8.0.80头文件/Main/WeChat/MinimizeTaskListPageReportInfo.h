@interface MinimizeTaskListPageReportInfo : NSObject
{
    int _state; // +0x8
    NSString * _aggreSessionId; // +0x10
    unsigned long long _enterPageTime; // +0x18
    unsigned long long _exitPageTime; // +0x20
    unsigned long long _exitPageType; // +0x28
    unsigned long long _taskCount; // +0x30
    NSArray * _miniSessionIdList; // +0x38
}
- (id)aggreSessionId;
- (void)setAggreSessionId:(id)arg1;
- (unsigned long long)enterPageTime;
- (void)setEnterPageTime:(unsigned long long)arg1;
- (unsigned long long)exitPageTime;
- (void)setExitPageTime:(unsigned long long)arg1;
- (unsigned long long)exitPageType;
- (void)setExitPageType:(unsigned long long)arg1;
- (unsigned long long)taskCount;
- (void)setTaskCount:(unsigned long long)arg1;
- (int)state;
- (void)setState:(int)arg1;
- (id)miniSessionIdList;
- (void)setMiniSessionIdList:(id)arg1;
- (void).cxx_destruct;
@end
