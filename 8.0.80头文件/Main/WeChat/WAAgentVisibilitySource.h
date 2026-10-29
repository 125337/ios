@interface WAAgentVisibilitySource : NSObject
{
    unsigned long long _kind; // +0x8
    unsigned long long _runningState; // +0x10
}
+ (id)manualSourceWithVisible:(BOOL)arg1;
+ (id)taskSourceWithRunningState:(unsigned long long)arg1;
- (void)updateRunningState:(unsigned long long)arg1;
- (unsigned long long)kind;
- (void)setKind:(unsigned long long)arg1;
- (unsigned long long)runningState;
- (void)setRunningState:(unsigned long long)arg1;
@end
