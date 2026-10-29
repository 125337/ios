@interface CameraScannerViewWrapper : MMObject
{
    BOOL _isForbidOperate; // +0x8
    CameraScannerView * _cameraView; // +0x10
    id <CameraScanAuthorizerDelegate> _delegate; // +0x18
    CameraScanService * _service; // +0x20
}
- (id)init;
- (void)setCameraInstanceDelegate:(id)arg1;
- (void)releaseCameraInstance;
- (BOOL)hasAuthorized:(SEL)arg1;
- (void)startCameraInstance;
- (void)stopCameraInstance;
- (BOOL)enableFocusOpt;
- (void)updateFocusPoint:(CGPoint)arg1;
- (BOOL)isFocusSimpleMode;
- (void)tryRecover:(long long)arg1;
- (BOOL)isForbidOperate;
- (void)setIsForbidOperate:(BOOL)arg1;
- (id)cameraView;
- (void)setCameraView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (void).cxx_destruct;
@end
