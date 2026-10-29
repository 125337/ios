@interface TPPrepareFailReporter : TPBaseReporter
{
    TPPlayerLogContext * _logCtx; // +0x8
}
- (id)init;
- (void)onEvent:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)onPlayerError:(id)arg1;
- (id)logCtx;
- (void)setLogCtx:(id)arg1;
- (void).cxx_destruct;
@end
