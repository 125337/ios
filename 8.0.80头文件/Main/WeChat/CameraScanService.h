@interface CameraScanService : MMRootService <MMServiceProtocol>
{
    BOOL _enableCameraViewMultiInstance; // +0x8
    BOOL _enableAuthorizer; // +0x9
    MemoryMappedKV * __innerMMKV; // +0x10
    CameraScanAuthorizer * _authorizer; // +0x18
}
- (id)init;
- (void)dealloc;
- (id)defaultMMKV;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isCameraViewMultiInstance;
- (id)cameraViewAuthorizer;
- (void)registerExtensionAndObserver;
- (void)unRegisterExtensionAndObserver;
- (void)captureSessionRuntimeError:(id)arg1;
- (void)captureSessionDidStartRunning:(id)arg1;
- (void)captureSessionDidStopRunning:(id)arg1;
- (void)captureSessionWasInterrupted:(id)arg1;
- (void)captureSessionInterruptionEnded:(id)arg1;
- (id)_innerMMKV;
- (void)set_innerMMKV:(id)arg1;
- (BOOL)enableCameraViewMultiInstance;
- (void)setEnableCameraViewMultiInstance:(BOOL)arg1;
- (BOOL)enableAuthorizer;
- (void)setEnableAuthorizer:(BOOL)arg1;
- (id)authorizer;
- (void)setAuthorizer:(id)arg1;
- (void).cxx_destruct;
@end
