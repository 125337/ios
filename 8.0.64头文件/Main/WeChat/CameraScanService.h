@interface CameraScanService : MMRootService <MMServiceProtocol>
{
    MemoryMappedKV * __innerMMKV; // +0x8
}
- (id)init;
- (void)dealloc;
- (id)defaultMMKV;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtensionAndObserver;
- (void)unRegisterExtensionAndObserver;
- (void)captureSessionRuntimeError:(id)arg1;
- (void)captureSessionDidStartRunning:(id)arg1;
- (void)captureSessionDidStopRunning:(id)arg1;
- (void)captureSessionWasInterrupted:(id)arg1;
- (void)captureSessionInterruptionEnded:(id)arg1;
- (id)_innerMMKV;
- (void)set_innerMMKV:(id)arg1;
- (void).cxx_destruct;
@end
