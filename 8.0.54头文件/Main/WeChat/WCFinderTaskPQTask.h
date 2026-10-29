@interface WCFinderTaskPQTask : NSObject
{
    BOOL _isRunning; // +0x8
    BOOL _asyncEnd; // +0x9
    id /* block */ _taskBlock; // +0x10
    unsigned long long _priority; // +0x18
    double _time; // +0x20
}
- (id /* block */)taskBlock;
- (void)setTaskBlock:(id /* block */)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (BOOL)asyncEnd;
- (void)setAsyncEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end

