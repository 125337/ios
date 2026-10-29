@interface LiteAppCameraLogicController : NSObject <LiteAppCameraPreviewDelegate, LiteAppCameraWriterDelegate, AVCaptureMetadataOutputObjectsDelegate, GPUImageVideoCameraDelegate, LiteAppCameraLogicControllerExt>
{
    LiteAppCameraPreview * _cameraPreview; // +0x8
    WAFilterLogic * _filterLogic; // +0x10
    GPUImageCropFilter * _cropFilter; // +0x18
    unsigned int m_currWriterID; // +0x20
    unsigned int m_currID; // +0x24
    NSMutableArray * m_recordIDAry; // +0x28
    BOOL isCameraAppear; // +0x30
    BOOL _m_requestAuthAccess; // +0x31
    BOOL _m_isNeedResumeWXMusic; // +0x32
    BOOL _m_shouldStart; // +0x33
    BOOL _videoNeedCompress; // +0x34
    BOOL _forbidGesture; // +0x35
    BOOL _hasTimeout; // +0x36
    BOOL _takePhotoSelfieMirror; // +0x37
    int _cameraState; // +0x38
    int _resolution; // +0x3c
    NSString * _appId; // +0x40
    unsigned long long _appUuid; // +0x48
    unsigned long long _pageId; // +0x50
    NSObject<OS_dispatch_queue> * _cameraQueue; // +0x58
    LiteAppCameraCapture * _cameraCapture; // +0x60
    NSString * _externflashType; // +0x68
    NSString * _sessionPreset; // +0x70
    unsigned long long _outputWidth; // +0x78
    unsigned long long _outputHeight; // +0x80
    NSMutableArray * _outputFrame; // +0x88
    long long _devicePosition; // +0x90
    NSMutableDictionary * _recorderDict; // +0x98
    NSString * _takedPhotoPath; // +0xa0
    NSString * _videoPath; // +0xa8
    NSString * _thumbPath; // +0xb0
    NSString * _recordError; // +0xb8
    id /* block */ _startRecordCallback; // +0xc0
    id /* block */ _stopRecordCallback; // +0xc8
    id /* block */ _takePhotoCallBack; // +0xd0
    double _jpgCompressQuality; // +0xd8
    CGSize _outputVideoSize; // +0xe0
    CGSize _outputPhotoSize; // +0xf0
}
+ (BOOL)needCheckRequestAuthAccess;
+ (BOOL)isAuthStatusOK;
- (id)initWithAppUuId:(id)arg1 appUuid:(unsigned long long)arg2 pageId:(unsigned long long)arg3 arguments:(id)arg4;
- (void)dealloc;
- (void)releaseCamera;
- (void)didEnterBackground;
- (void)didEnterForeground;
- (id)loadCameraLogicWithContentView:(id)arg1;
- (id)resumeCamera;
- (void)pauseCamera;
- (void)updateCamera:(id)arg1;
- (void)parseParams:(id)arg1;
- (void)takePhoto:(id)arg1 complete:(id /* block */)arg2;
- (id)setZoom:(id)arg1;
- (id)startRecord:(id)arg1 complete:(id /* block */)arg2;
- (void)stopRecord:(id)arg1 complete:(id /* block */)arg2;
- (unsigned int)startRecording:(CGSize)arg1 selfieMirror:(BOOL)arg2 maxVideoDuration:(float)arg3 compressAudio:(BOOL)arg4 audioBitrate:(float)arg5 outputMode:(id)arg6 audioCodec:(id)arg7;
- (void)stopRecording:(unsigned int)arg1;
- (void)cancelRecording:(unsigned int)arg1;
- (void)cancelAllRecorder;
- (BOOL)isRecording:(unsigned int)arg1;
- (void)finishWriter;
- (void)movieWriter:(id)arg1 onMovieWriteFinished:(id)arg2 ret:(unsigned int)arg3;
- (void)movieWriter:(id)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)onMovieWriterInvalidate:(id)arg1;
- (void)movieWriter:(id)arg1 onSeparateOutputCompleted:(id)arg2;
- (id)thumbForVideoWithPath:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3;
- (int)getCameraState;
- (id)genPreviewView:(CGRect)arg1;
- (void)internalSwitchCameraIfNeedThreadSafe:(long long)arg1;
- (void)updateSessionPresetBeforeSwitchCamera;
- (void)setCameraStateAndRestFlashTorch:(int)arg1;
- (void)resetFlashAndTorchDueToCurrentCameraState;
- (void)setCameraViewMaskWithRect:(CGRect)arg1;
- (void)onWriterFailed:(int)arg1;
- (void)processVideoAfterCompressFinish:(id)arg1;
- (void)onMovieCompressFinished:(int)arg1 moviePath:(id)arg2 withThumb:(id)arg3;
- (void)onMovieSeparateOutputCompleted:(int)arg1 videoPath:(id)arg2 audioPath:(id)arg3 withThumb:(id)arg4;
- (void)setCameraCropRect:(CGRect)arg1;
- (void)updateCameraPreviewRect:(CGRect)arg1;
- (void)focusAtPoint:(CGPoint)arg1;
- (BOOL)isSupportZoomWithFactor:(double)arg1;
- (void)zoomFactor:(double)arg1;
- (double)maxZoomFactor;
- (double)setZoomFactor:(double)arg1;
- (id)cameraCachePath;
- (id)generateFilePath:(BOOL)arg1;
- (unsigned long long)currentTimeInMilliseconds;
- (void)pauseAllOtherRunningCameraByLogic:(id)arg1;
- (void)willOutputSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (CGSize)getCaptureResolution:(int)arg1;
- (id)getCaptureSessionPreset:(int)arg1;
- (BOOL)isPhysicalMemoryMoreThanOrEqualTo4GB;
- (double)getCompressQuality:(id)arg1;
- (id)processAndSaveImage:(id)arg1 withError:(id)arg2 shouldRestoreState:(BOOL)arg3 originalState:(int)arg4;
- (BOOL)isCameraAppear;
- (void)setIsCameraAppear:(BOOL)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)appUuid;
- (void)setAppUuid:(unsigned long long)arg1;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (id)cameraQueue;
- (void)setCameraQueue:(id)arg1;
- (id)cameraCapture;
- (void)setCameraCapture:(id)arg1;
- (int)cameraState;
- (void)setCameraState:(int)arg1;
- (BOOL)m_requestAuthAccess;
- (void)setM_requestAuthAccess:(BOOL)arg1;
- (BOOL)m_isNeedResumeWXMusic;
- (void)setM_isNeedResumeWXMusic:(BOOL)arg1;
- (BOOL)m_shouldStart;
- (void)setM_shouldStart:(BOOL)arg1;
- (id)externflashType;
- (void)setExternflashType:(id)arg1;
- (id)sessionPreset;
- (void)setSessionPreset:(id)arg1;
- (unsigned long long)outputWidth;
- (void)setOutputWidth:(unsigned long long)arg1;
- (unsigned long long)outputHeight;
- (void)setOutputHeight:(unsigned long long)arg1;
- (id)outputFrame;
- (void)setOutputFrame:(id)arg1;
- (CGSize)outputVideoSize;
- (void)setOutputVideoSize:(CGSize)arg1;
- (CGSize)outputPhotoSize;
- (void)setOutputPhotoSize:(CGSize)arg1;
- (long long)devicePosition;
- (void)setDevicePosition:(long long)arg1;
- (id)recorderDict;
- (void)setRecorderDict:(id)arg1;
- (int)resolution;
- (void)setResolution:(int)arg1;
- (id)takedPhotoPath;
- (void)setTakedPhotoPath:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)recordError;
- (void)setRecordError:(id)arg1;
- (BOOL)videoNeedCompress;
- (void)setVideoNeedCompress:(BOOL)arg1;
- (BOOL)forbidGesture;
- (void)setForbidGesture:(BOOL)arg1;
- (BOOL)hasTimeout;
- (void)setHasTimeout:(BOOL)arg1;
- (id /* block */)startRecordCallback;
- (void)setStartRecordCallback:(id /* block */)arg1;
- (id /* block */)stopRecordCallback;
- (void)setStopRecordCallback:(id /* block */)arg1;
- (id /* block */)takePhotoCallBack;
- (void)setTakePhotoCallBack:(id /* block */)arg1;
- (BOOL)takePhotoSelfieMirror;
- (void)setTakePhotoSelfieMirror:(BOOL)arg1;
- (double)jpgCompressQuality;
- (void)setJpgCompressQuality:(double)arg1;
- (void).cxx_destruct;
@end
