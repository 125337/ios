@interface CameraScanService : MMRootService <MMServiceProtocol>
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtensionAndObserver;
- (void)unRegisterExtensionAndObserver;
- (void)captureSessionRuntimeError:(id)arg1;
- (void)captureSessionDidStartRunning:(id)arg1;
- (void)captureSessionDidStopRunning:(id)arg1;
- (void)captureSessionWasInterrupted:(id)arg1;
- (void)captureSessionInterruptionEnded:(id)arg1;
@end

