@interface TXCVideoProducer : NSObject <TXCVideoResultHandlerDelegate, TXCVideoCaptureReportDelegate, TXCVideoEncodeControllerDelegate, TXCVideoEncodeReportDelegate, TXCVideoRenderReportDelegate, TXILocalVideoRendererDelegate, TXCVideoPreprocessControllerDelegate>
{
    BOOL _isPausing; // +0x8
    BOOL _isTranscodingMode; // +0x9
    int _producerMode; // +0xc
    id <TXIVideoProducerDelegate> _delegate; // +0x10
    NSString * _tag; // +0x18
    id <TXIVideoCaptureInterface> _capturer; // +0x20
    TXCDispatchQueue * _queue; // +0x28
    id <TXIGlContext> _glContext; // +0x30
    TXCVideoCaptureReport * _captureReport; // +0x38
    TXCVideoCaptureConfig * _captureConfig; // +0x40
    TXCVideoPreprocessController * _preprocessor; // +0x48
    id <TXILocalVideoRenderer> _localRenderer; // +0x50
    id <TXIVideoRenderer> _customRenderer; // +0x58
    TXCVideoRenderConfig * _renderConfig; // +0x60
    TXCVideoRenderReport * _renderReporter; // +0x68
    NSMutableDictionary * _encoders; // +0x70
    TXCVideoBindableParallelGroup * _encoderGroup; // +0x78
    TXCVideoStreamSnapshot * _streamSnapshot; // +0x80
    TXCVideoResultHandler * _resultHandler; // +0x88
    TXCVTExternalConfig * _vtExternalConfig; // +0x90
}
+ (EncodeAbility)encodeAbility;
- (id)init;
- (void)dealloc;
- (void)setTag:(id)arg1;
- (void)setup;
- (BOOL)startCapture:(unsigned long long)arg1;
- (void)stopCapture;
- (void)pauseCapture;
- (void)resumeCapture;
- (void)setProducerMode:(int)arg1;
- (void)setCaptureFramerate:(long long)arg1;
- (void)selectCameraDevice:(id)arg1;
- (void)setVTEncodeParams:(id)arg1;
- (id)currentCameraDevice;
- (void)getCapturer:(id /* block */)arg1;
- (void)getCameraCapturer:(id /* block */)arg1;
- (void)getCustomCapturer:(id /* block */)arg1;
- (void)getVirtualCapturer:(id /* block */)arg1;
- (void)setCameraFocusPosition:(CGPoint)arg1;
- (BOOL)isScreenCapture;
- (void)getPreprocessor:(id /* block */)arg1;
- (void)setCustomPreprocess:(id)arg1 pixelFormat:(unsigned long long)arg2 bufferType:(unsigned long long)arg3;
- (void)setLocalRenderView:(id)arg1;
- (void)setCustomRender:(id)arg1 pixelFormat:(unsigned long long)arg2 bufferType:(unsigned long long)arg3;
- (void)setRenderFillMode:(unsigned long long)arg1;
- (void)setRenderMirrorMode:(unsigned long long)arg1;
- (void)setRenderRotation:(unsigned long long)arg1;
- (void)startEncodeForStream:(int)arg1;
- (void)stopEncodeForStream:(int)arg1;
- (void)setEncodeParams:(const void *)arg1 forStream:(int)arg2;
- (void)enableTranscodingMode:(BOOL)arg1;
- (void)setEncodeStrategy:(int)arg1 forStream:(int)arg2;
- (void)enableEncodeMirror:(BOOL)arg1;
- (void)setEncodeRotation:(unsigned long long)arg1;
- (void)setGSensorMode:(unsigned long long)arg1;
- (void)setHomeOrientation:(int)arg1;
- (void)setRpsIdrFrameRate:(long long)arg1 forStream:(int)arg2;
- (void)enableNearestRps:(long long)arg1 forStream:(int)arg2;
- (void)requestKeyFrameForStream:(int)arg1;
- (void)setRPSRefBitmap:(long long)arg1 bitmap:(unsigned short)arg2 forStream:(int)arg3;
- (id)encoderForStream:(int)arg1;
- (void)snapshotFromSource:(unsigned long long)arg1 onComplete:(id /* block */)arg2;
- (void)createStreamSnapshotIfNeeded;
- (void)setAppGroupId:(id)arg1;
- (void)setIsPausing:(BOOL)arg1;
- (void)setupStreamLine;
- (id)identifierForType:(unsigned long long)arg1;
- (void)logApi:(id)arg1;
- (void)updateEncodeResolution:(void *)arg1 forStreamType:(int)arg2;
- (void)updateCameraCaptureResolution:(CGSize)arg1;
- (void)notifyEncodeParamsChanged:(int)arg1;
- (void)observeAppState;
- (void)onAppResignActive;
- (void)onAppBecomeActive;
- (void)resultHandler:(id)arg1 onError:(id)arg2;
- (void)resultHandler:(id)arg1 didProcessVideoFrame:(id)arg2;
- (void)onCaptureFirstFrame;
- (void)onCaptureFrame:(id)arg1;
- (void)onCameraStateChanged:(id)arg1 isConnected:(BOOL)arg2;
- (void)onCameraInterrupted:(long long)arg1;
- (void)onCameraInterruptionEnd;
- (void)onCapturerDidStart;
- (void)onCapturerDidStop;
- (void)onCapturerDidPause;
- (void)onCapturerDidResume;
- (void)onScreenSizeChange:(CGSize)arg1;
- (void)enableRoiEncoding:(BOOL)arg1;
- (void)setRoiConfig:(const void *)arg1;
- (void)onRenderFrame:(id)arg1 isFirst:(BOOL)arg2;
- (void)encodeController:(id)arg1 needsInputFormat:(unsigned long long)arg2;
- (void)encodeController:(id)arg1 onEncoderTypeChanged:(int)arg2 onCodecTypeChanged:(int)arg3 streamType:(int)arg4 encoderFeatures:(unsigned long long)arg5;
- (void)onEncodeFrame:(id)arg1 forStreamType:(int)arg2 isFirst:(BOOL)arg3;
- (void)videoRenderer:(id)arg1 onTouchPoint:(CGPoint)arg2;
- (void)videoRenderer:(id)arg1 onPinchScale:(double)arg2;
- (void)notifyPreprocessCost:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tag;
- (id)capturer;
- (void)setCapturer:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)glContext;
- (void)setGlContext:(id)arg1;
- (id)captureReport;
- (id)captureConfig;
- (BOOL)isPausing;
- (BOOL)isTranscodingMode;
- (void)setIsTranscodingMode:(BOOL)arg1;
- (id)preprocessor;
- (id)localRenderer;
- (void)setLocalRenderer:(id)arg1;
- (id)customRenderer;
- (void)setCustomRenderer:(id)arg1;
- (id)renderConfig;
- (id)renderReporter;
- (id)encoders;
- (id)encoderGroup;
- (void)setEncoderGroup:(id)arg1;
- (id)streamSnapshot;
- (void)setStreamSnapshot:(id)arg1;
- (id)resultHandler;
- (int)producerMode;
- (id)vtExternalConfig;
- (void)setVtExternalConfig:(id)arg1;
- (void).cxx_destruct;
@end

