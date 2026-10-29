@interface MultiTaskPageActionInfo : NSObject
{
    BOOL _isFullScreen; // +0x8
    BOOL _hasReported; // +0x9
    unsigned long long _action; // +0x10
    NSString * _contextId; // +0x18
    unsigned long long _scene; // +0x20
    unsigned long long _userAction; // +0x28
    unsigned long long _taskCount; // +0x30
    unsigned long long _outdateTaskCount; // +0x38
    unsigned long long _duration; // +0x40
    long long _operationPath; // +0x48
    unsigned long long _lastStartTime; // +0x50
}
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)userAction;
- (void)setUserAction:(unsigned long long)arg1;
- (BOOL)isFullScreen;
- (void)setIsFullScreen:(BOOL)arg1;
- (unsigned long long)taskCount;
- (void)setTaskCount:(unsigned long long)arg1;
- (unsigned long long)outdateTaskCount;
- (void)setOutdateTaskCount:(unsigned long long)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
- (long long)operationPath;
- (void)setOperationPath:(long long)arg1;
- (unsigned long long)lastStartTime;
- (void)setLastStartTime:(unsigned long long)arg1;
- (BOOL)hasReported;
- (void)setHasReported:(BOOL)arg1;
- (void).cxx_destruct;
@end

