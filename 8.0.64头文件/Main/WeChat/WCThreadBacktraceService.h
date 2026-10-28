@interface WCThreadBacktraceService : MMRootService <MMServiceProtocol>
{
    BOOL _enabled; // +0x8
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onExit;
- (unsigned int)randomizeThreshold:(unsigned int)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
@end
