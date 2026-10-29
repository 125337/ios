@interface TXCDummyCapturer : NSObject <TXICameraCapturerInterface, TXIVideoCaptureInterface, TXIVirtualCapturerInterface, TXICustomCapturerInterface>
{
    BOOL isRunning; // +0x8
    unsigned long long captureType; // +0x10
    TXCDispatchQueue * _queue; // +0x18
    TXCVideoCaptureConfig * _config; // +0x20
}
- (id)initWithQueue:(id)arg1 config:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)applyConfigs:(id)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)setCaptureResolution:(CGSize)arg1;
- (BOOL)isFrontCamera;
- (void)setFront:(BOOL)arg1;
- (BOOL)isZoomSupported;
- (double)zoomMaxRatio;
- (void)setZoomScale:(double)arg1 multiplyByZoomfactor:(BOOL)arg2;
- (BOOL)isAutoFocusSupported;
- (void)enablesFaceDetect:(BOOL)arg1;
- (void)setFocusPosition:(CGPoint)arg1;
- (BOOL)isTorchSupported;
- (void)setTorchOn:(BOOL)arg1;
- (BOOL)isFaceDetectEnabled;
- (void)setExposureTargetBias:(float)arg1;
- (void)enableZoom:(BOOL)arg1;
- (void)setStillImage:(id)arg1;
- (void)sendVideoFrame:(id)arg1;
- (unsigned long long)captureType;
- (BOOL)isRunning;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

