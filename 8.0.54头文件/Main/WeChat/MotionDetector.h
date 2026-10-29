@interface MotionDetector : MMObject
{
    id <MotionDetectorDelegate> _delegate; // +0x8
    BOOL _isInit; // +0x10
    BOOL _isFocusLibInit; // +0x11
    AVCaptureDevice * _defaultCaptureDevice; // +0x18
    BOOL[2] _focuseEngineRet; // +0x20
    int _state; // +0x24
}
- (id)init;
- (void)dealloc;
- (int)initFocuseEngineWithSize:(CGSize)arg1 isForOcr:(BOOL)arg2;
- (void)focuseEngineProcess:(char *)arg1;
- (int)releaseFocuseEngine;
- (void)start;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)state;
- (void).cxx_destruct;
@end

