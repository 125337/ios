@interface MMLiveStateDataInfoSession : NSObject
{
    BOOL _isPaused; // +0x8
    BOOL _isFloat; // +0x9
    unsigned long long _countedFloatPauseStartTs; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    unsigned long long _floatStatePauseTime; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (unsigned long long)floatStatePauseDuration;
- (void)onAction:(unsigned long long)arg1;
- (void)calculateFloatStatePauseTime;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (BOOL)isFloat;
- (void)setIsFloat:(BOOL)arg1;
- (unsigned long long)countedFloatPauseStartTs;
- (void)setCountedFloatPauseStartTs:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)floatStatePauseTime;
- (void)setFloatStatePauseTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
