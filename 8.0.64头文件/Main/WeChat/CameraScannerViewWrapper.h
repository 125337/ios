@interface CameraScannerViewWrapper : MMObject
{
    BOOL _isForbidOperate; // +0x8
}
- (void)setCameraInstanceDelegate:(id)arg1;
- (void)releaseCameraInstance;
- (void)startCameraInstance;
- (void)stopCameraInstance;
- (BOOL)isForbidOperate;
- (void)setIsForbidOperate:(BOOL)arg1;
@end
