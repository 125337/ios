@interface WACameraLogicController : NSObject <WCCameraWriterDelegate, WCCameraPreviewDelegate, AVCaptureMetadataOutputObjectsDelegate, GPUImageVideoCameraDelegate, WACameraQRCodeScannerDelegate, WACameraLogicControllerExt>
{
    WCCameraPreview * _cameraPreview; // +0x8
    WAFilterLogic * _filterLogic; // +0x10
    GPUImageCropFilter * _cropFilter; // +0x18
    unsigned int m_currID; // +0x20
    NSObject<OS_dispatch_queue> * m_logicQueue; // +0x28
    NSMutableArray * m_recordIDAry; // +0x30
    unsigned int m_currWriterID; // +0x38
    BOOL isShowingPreview; // +0x3c
    BOOL isCameraAppear; // +0x3d
    BOOL bNeedOutputVideoBuffer; // +0x3e
    BOOL _shouldHandleScan; // +0x3f
    BOOL _listenFrameChange; // +0x40
    BOOL _m_shouldStart; // +0x41
    BOOL _m_requestAuthAccess; // +0x42
    BOOL _m_isNeedResumeWXMusic; // +0x43
    BOOL _needCompressVideo; // +0x44
    BOOL _selfieMirror; // +0x45
    BOOL _muted; // +0x46
    int _cameraState; // +0x48
    id <WACameraLogicControllerDelegate> _delegate; // +0x50
    NSString * _externflashType; // +0x58
    WCCameraCapture * _cameraCapture; // +0x60
    NSString * _m_videoPath; // +0x68
    UIImage * _m_thumbImage; // +0x70
    UIImage * _m_originalImage; // +0x78
    NSMutableDictionary * _recorderDict; // +0x80
    WACameraScanScanner * _cameraScanScanner; // +0x88
    NSString * _sessionPreset; // +0x90
    double _maxScannerZoomFactor; // +0x98
    CGSize _outputVideoSize; // +0xa0
}
+ (BOOL)needCheckRequestAuthAccess;
+ (BOOL)isAuthStatusOK;
- (id)initWithResolution:(int)arg1 shouldHandleScan:(BOOL)arg2;
- (CGSize)setResolution:(id)arg1 frameRate:(int)arg2;
- (void)dealloc;
- (void)didEnterBackground;
- (void)didEnterForeground;
- (id)genPreviewView:(CGRect)arg1;
- (void)loadCameraLogicWithContentView:(id)arg1;
- (void)updateCameraPreviewRect:(CGRect)arg1;
- (void)setCameraCropRect:(CGRect)arg1;
- (void)setScanCropRect:(CGRect)arg1;
- (void)setShouldHandleScan:(BOOL)arg1;
- (void)setScanFreq:(double)arg1;
- (void)setCameraViewRect:(CGRect)arg1;
- (void)removeCameraCropFilter;
- (void)setExternflashType:(id)arg1;
- (void)resetFlashAndTorchDueToCurrentCameraState;
- (void)resumeCamera;
- (void)pauseCamera;
- (void)updateCameraOrientation:(long long)arg1;
- (void)setCameraStateAndRestFlashTorch:(int)arg1;
- (unsigned int)startRecord:(CGSize)arg1 maxVideoDuration:(float)arg2 compressAudio:(BOOL)arg3 audioBitrate:(float)arg4;
- (void)stopRecording:(unsigned int)arg1;
- (void)cancelRecording:(unsigned int)arg1;
- (void)cancelAllRecorder;
- (BOOL)isRecording:(unsigned int)arg1;
- (void)movieWriter:(id)arg1 onMovieWriteFinished:(id)arg2 ret:(unsigned int)arg3;
- (void)movieWriter:(id)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(id)arg1 onRecorderBeginRecording:(id)arg2 ErrNo:(int)arg3;
- (void)movieWriter:(id)arg1 onRecorderPart:(id)arg2 Offset:(unsigned int)arg3 Len:(unsigned int)arg4 EndFlag:(unsigned int)arg5 ForceDelete:(BOOL)arg6 Duration:(unsigned int)arg7;
- (void)onMovieWriterInvalidate:(id)arg1;
- (void)focusAtPoint:(CGPoint)arg1;
- (BOOL)isSupportZoomWithFactor:(double)arg1;
- (void)zoomFactor:(double)arg1;
- (double)maxZoomFactor;
- (double)setZoomFactor:(double)arg1;
- (void)onDetectQRCode:(BOOL)arg1 zoomFactor:(float)arg2;
- (void)onWriterFailed:(int)arg1;
- (void)processVideoAfterCompressFinish:(id)arg1;
- (void)onMovieCompressFinished:(int)arg1 moviePath:(id)arg2 withThumb:(id)arg3;
- (void)onWriterResign;
- (void)onCameraStop:(id)arg1;
- (float)sightCaptureMaxDuration;
- (BOOL)startWriter;
- (BOOL)finishWriter;
- (void)showPreviewViewWithImage:(id)arg1;
- (void)showPreviewViewWithSightPath:(id)arg1 thumbImg:(id)arg2;
- (BOOL)startRecordWithParams:(id)arg1;
- (BOOL)stopRecordWithCompressed:(BOOL)arg1;
- (BOOL)takePicture:(id *)arg1 WithParams:(id)arg2;
- (void)onTakenPicture:(id)arg1;
- (void)didTakeDoneWithPicture:(id)arg1;
- (void)didTakeDoneWithSightPath:(id)arg1 thumbImg:(id)arg2 isMuted:(BOOL)arg3;
- (void)switchCamera;
- (void)switchCameraIfNeedForPosition:(long long)arg1;
- (void)internalSwitchCameraIfNeedThreadSafe:(long long)arg1;
- (void)updateSessionPresetBeforeSwitchCamera;
- (void)setCameraPositon:(long long)arg1;
- (long long)getCameraPosition;
- (void)filterType:(unsigned long long)arg1;
- (void)willOutputSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)onGotScanResult:(id)arg1;
- (void)onDetectCodesWithMarkDotInfoList:(id)arg1 isCameraScan:(BOOL)arg2;
- (void)pauseAllOtherRunningCameraByLogic:(id)arg1;
- (id)generateCaptureMetadata:(id)arg1;
- (BOOL)isShowingPreview;
- (void)setIsShowingPreview:(BOOL)arg1;
- (BOOL)isCameraAppear;
- (void)setIsCameraAppear:(BOOL)arg1;
- (BOOL)bNeedOutputVideoBuffer;
- (void)setBNeedOutputVideoBuffer:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldHandleScan;
- (id)externflashType;
- (BOOL)listenFrameChange;
- (void)setListenFrameChange:(BOOL)arg1;
- (id)cameraCapture;
- (void)setCameraCapture:(id)arg1;
- (id)m_videoPath;
- (void)setM_videoPath:(id)arg1;
- (id)m_thumbImage;
- (void)setM_thumbImage:(id)arg1;
- (id)m_originalImage;
- (void)setM_originalImage:(id)arg1;
- (int)cameraState;
- (void)setCameraState:(int)arg1;
- (BOOL)m_shouldStart;
- (void)setM_shouldStart:(BOOL)arg1;
- (BOOL)m_requestAuthAccess;
- (void)setM_requestAuthAccess:(BOOL)arg1;
- (id)recorderDict;
- (void)setRecorderDict:(id)arg1;
- (id)cameraScanScanner;
- (void)setCameraScanScanner:(id)arg1;
- (BOOL)m_isNeedResumeWXMusic;
- (void)setM_isNeedResumeWXMusic:(BOOL)arg1;
- (id)sessionPreset;
- (void)setSessionPreset:(id)arg1;
- (CGSize)outputVideoSize;
- (void)setOutputVideoSize:(CGSize)arg1;
- (BOOL)needCompressVideo;
- (void)setNeedCompressVideo:(BOOL)arg1;
- (BOOL)selfieMirror;
- (void)setSelfieMirror:(BOOL)arg1;
- (BOOL)muted;
- (void)setMuted:(BOOL)arg1;
- (double)maxScannerZoomFactor;
- (void)setMaxScannerZoomFactor:(double)arg1;
- (void).cxx_destruct;
@end
