@interface SightCameraCapture : MMObject <XEffectEffectManagerDelegate, OMJCamSessionDelegate, IVOIPUILogicMgrExt, WCCameraModuleDelegate, MultiTalkMgrExt, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, MMQRCodeScannerDelegate>
{
    BOOL m_isActive; // +0x8
    BOOL m_isAudioActive; // +0x9
    BOOL m_isFileOutputActive; // +0xa
    AVCaptureSession * m_captureSession; // +0x10
    AVCaptureDevice * m_inputCamera; // +0x18
    NSString * m_videoBackPreset; // +0x20
    NSString * m_videoFrontPreset; // +0x28
    AVCaptureDeviceInput * m_videoInput; // +0x30
    AVCaptureDeviceInput * m_audioInput; // +0x38
    AVCaptureVideoDataOutput * m_videoOutput; // +0x40
    AVCaptureAudioDataOutput * m_audioOutput; // +0x48
    AVCaptureMovieFileOutput * m_fileOutput; // +0x50
    AVCaptureVideoPreviewLayer * m_previewLayer; // +0x58
    MMCapturePhotoOutput * m_photoOutput; // +0x60
    CGSize m_targetVideoSize; // +0x68
    double m_targetBitRate; // +0x78
    int m_captureFrameRate; // +0x80
    NSMutableArray * m_movieWriters; // +0x88
    NSMutableArray * m_moviePreviewers; // +0x90
    MMQRCodeScanner * m_QRCodeScanner; // +0x98
    unsigned int m_scannerSkip; // +0xa0
    NSObject<OS_dispatch_queue> * m_callbackQueue; // +0xa8
    BOOL m_bIsUsingHighExposureISO; // +0xb0
    BOOL m_needCapturePicture; // +0xb1
    id /* block */ m_captureBlock; // +0xb8
    BOOL _activeQRScan; // +0xc0
    BOOL _needsAlwaysResetEffectManagerWhenSwitchingCamera; // +0xc1
    BOOL _needsEffectManager; // +0xc2
    BOOL _dropFirstFrame; // +0xc3
    BOOL _reloadEffectFinish; // +0xc4
    BOOL _currentMJRecordNeedAudio; // +0xc5
    BOOL _currentDeviceIsUltraWideAngleCamera; // +0xc6
    id <SightCameraCaptureDelegate> _delegate; // +0xc8
    NSString * _preset; // +0xd0
    XEffectEffectManager * _effectManager; // +0xd8
    NSRecursiveLock * _m_oLock; // +0xe0
    MJCameraTemplateReportObject * _cameraTemplateReportObj; // +0xe8
    MJTemplateCameraSession * _miaojianSession; // +0xf0
    AVAudioSessionDataSourceDescription * _preAudioSessionDataSource; // +0xf8
    long long _currentDeviceCaptureOrientation; // +0x100
}
- (id)initWithSessionPreset:(id)arg1 frontPreset:(id)arg2 frameRate:(int)arg3 needAudio:(BOOL)arg4 delegate:(id)arg5;
- (id)initWithSessionPreset:(id)arg1 frontPreset:(id)arg2 cameraPosition:(long long)arg3 frameRate:(int)arg4 needAudio:(BOOL)arg5;
- (BOOL)isAutoSwitchCameraWithDualTripleCameraEnable;
- (BOOL)initCaptureSession:(long long)arg1 needAudio:(BOOL)arg2;
- (void)configWhiteBalanceAndStabilization;
- (BOOL)cameraConfigChanged:(id)arg1 scene:(unsigned long long)arg2;
- (void)restoreInputDeviceInMid;
- (void)chooseInputDeviceForBuiltInMic:(BOOL)arg1;
- (BOOL)isUseNewApiTakePhoto;
- (void)setCameraFrameRate;
- (void)dealloc;
- (id)callbackQueue;
- (void)setSessionPreset:(long long)arg1;
- (void)setWhiteBalanceConfig;
- (void)setStabilizationConfig;
- (long long)getWhiteBalanceParam;
- (long long)getStabilizationParam;
- (void)setSessionPreset:(id)arg1 position:(long long)arg2;
- (id)getSessionPresetByPosition:(long long)arg1;
- (void)resetEffectManager;
- (void)clearEffectManager;
- (void)resetEffectManagerLite;
- (BOOL)isFileOutputMode;
- (void)switchToFileOutputMode;
- (void)safeCallOnAutoSwitchingCamera;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)cameraWithPosition:(long long)arg1;
- (BOOL)hasMultipleCameras;
- (void)addMovieWriter:(id)arg1;
- (void)removeMovieWriter:(id)arg1;
- (void)setPreviewReady;
- (void)addMoviePreviewer:(id)arg1;
- (void)setMoviePreviwerOutputSizeAndSession:(id)arg1;
- (void)removeMoviePreviewer:(id)arg1;
- (void)takePicturWithCompletion:(id /* block */)arg1;
- (void)capturePreviewImageWithBlock:(id /* block */)arg1;
- (BOOL)isRunning;
- (void)startRunning;
- (void)onCameraFailed;
- (void)startCameraCapture;
- (BOOL)startCameraCaptureAudioDevice;
- (BOOL)stopCameraCapture;
- (void)stopCameraCaptureAudioDevice;
- (void)focusAtPoint:(CGPoint)arg1;
- (BOOL)canZoom;
- (void)zoom;
- (BOOL)isSupportZoomWithFactor:(double)arg1 isProMode:(BOOL)arg2;
- (long long)getSuitableCaptureOrientation;
- (BOOL)enableAutoSwitchCameraWhenFocusing:(long long)arg1;
- (BOOL)enableAutoSwitchCameraWhenFocusing;
- (double)defaultZoomFactor;
- (double)minZoomFactor;
- (double)maxZoomFactor;
- (double)zoomFactor;
- (double)setZoomFactor:(double)arg1;
- (double)setZoomFactor:(double)arg1 ignoreLimit:(BOOL)arg2 animated:(BOOL)arg3;
- (long long)cameraPosition;
- (BOOL)switchCamera;
- (BOOL)switchCameraToPosition:(long long)arg1;
- (BOOL)switchCameraToPosition:(long long)arg1 needAudio:(BOOL)arg2;
- (void)setMiaojianCameraRecordNeedAudio:(BOOL)arg1;
- (void)onNoQRCode;
- (void)onQRCodeScanSuccess:(id)arg1 atPoint:(vector<QBAR_POINT, std::allocator<QBAR_POINT>>)arg2 originSize:(CGSize)arg3;
- (void)initQRCodeScanner;
- (BOOL)supportFlashlightMode;
- (long long)flashMode;
- (void)setFlashlightMode:(long long)arg1;
- (BOOL)supportTorchMode;
- (long long)torchMode;
- (void)setTorchMode:(long long)arg1;
- (BOOL)isUsingHighExposureISO;
- (void)turnOnExposureHighISO;
- (void)setExposureISO:(double)arg1;
- (double)currentExposureISO;
- (double)maxExposureISO;
- (double)minExposureISO;
- (void)resetExposureISO;
- (id)processWithSampleImageAfterPerformCachedOperations:(id)arg1;
- (void)initEffectManager;
- (void)deallocEffectManager;
- (void)switchBeautyEffect:(BOOL)arg1;
- (id)effectManagerPreviewLayer;
- (void)effectManager:(id)arg1 didOutputPixelBuffer:(id)arg2 frameTime:(struct)arg3;
- (void)setBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (float)getValidParamValue:(float)arg1;
- (id)miaojianSession;
- (void)createMiaojianSession;
- (void)destroyMiaojianSession;
- (void)cleanUpCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (void)startUpCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (id)capFunSessionRenderView;
- (BOOL)isUsingMaasCapSessionForRender;
- (void)startCamSessionPreviewingWithCompletionHandler:(id /* block */)arg1;
- (void)setFilterDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearFilterDescWithCompletionHandler:(id /* block */)arg1;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 shouldEnableAudio:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)clearTemplateWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isTemplateLoadedWithTemplate:(id)arg1;
- (id)getTemplateInfoWithItem:(id)arg1;
- (void)beginUseTemplateWithTemplate:(id)arg1 enableMusic:(BOOL)arg2 params:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)clearTemplateWithMusicEnabled:(BOOL)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)preloadTemplateWithTemplateId:(id)arg1 completion:(id /* block */)arg2;
- (int)loadTemplateWithTemplateId:(id)arg1 priority:(long long)arg2 progressHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)sendMaasCamSessionWithTouches:(id)arg1 event:(id)arg2 states:(unsigned long long)arg3;
- (BOOL)isCameraMusicLoaded:(id)arg1;
- (BOOL)isCameraWXMusicLoaded:(id)arg1;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerLocalMusicWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)changeCameraMusic:(id)arg1 musicEnable:(BOOL)arg2 restartPreview:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)queryCamFunTemplateResourcesStatusWithIdentifier:(id)arg1 version:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (long long)_audioDeviceType;
- (id)startRecordingWithOutputFilePath:(id)arg1 exportSettings:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)stopRecordingWithCompletionHandler:(id /* block */)arg1;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)loadMaterial:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)arg1;
- (void)cancelAll;
- (void)cancelLoadWithTaskID:(int)arg1;
- (BOOL)isTemplateLoadedWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (int)loadTemplateWithTemplateID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)setLocationInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginUseTemplateAndVideoRemixTemplateWithItem:(id)arg1 videoRemixTemplateID:(id)arg2 overridingParams:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)beginUseVideoRemixTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearVideoRemixTemplateWithCompletionHandler:(id /* block */)arg1;
- (void)beginUseAssetInputWithAssetInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginUseCameraInputWithCompletionHandler:(id /* block */)arg1;
- (void)startExportingVideoWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelExportingVideoWithCompletionHandler:(id /* block */)arg1;
- (void)updateAIGCResultWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)camSession:(id)arg1 recordingTimeDidChange:(struct)arg2 maxRecordingDuration:(struct)arg3;
- (void)camSession:(id)arg1 recordingDidFail:(id)arg2;
- (void)camSession:(id)arg1 needRequestAIGC:(id)arg2;
- (void)camSessionDidPresentFirstFrame:(id)arg1;
- (void)cameraModuleInterruptionBegin:(id)arg1;
- (void)cameraModuleInterruptionEnd:(id)arg1;
- (long long)cameraModuleReportScene;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVoipMinimized;
- (void)onVoipMaximized;
- (void)onVoipAccept:(id)arg1;
- (void)onInviteMultiTalk;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMaximized;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)isAudioActive;
- (id)previewLayer;
- (BOOL)activeQRScan;
- (void)setActiveQRScan:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)preset;
- (void)setPreset:(id)arg1;
- (id)effectManager;
- (void)setEffectManager:(id)arg1;
- (BOOL)needsAlwaysResetEffectManagerWhenSwitchingCamera;
- (void)setNeedsAlwaysResetEffectManagerWhenSwitchingCamera:(BOOL)arg1;
- (BOOL)needsEffectManager;
- (void)setNeedsEffectManager:(BOOL)arg1;
- (BOOL)dropFirstFrame;
- (void)setDropFirstFrame:(BOOL)arg1;
- (BOOL)reloadEffectFinish;
- (void)setReloadEffectFinish:(BOOL)arg1;
- (id)m_oLock;
- (void)setM_oLock:(id)arg1;
- (BOOL)currentMJRecordNeedAudio;
- (void)setCurrentMJRecordNeedAudio:(BOOL)arg1;
- (id)cameraTemplateReportObj;
- (void)setCameraTemplateReportObj:(id)arg1;
- (BOOL)currentDeviceIsUltraWideAngleCamera;
- (void)setCurrentDeviceIsUltraWideAngleCamera:(BOOL)arg1;
- (void)setMiaojianSession:(id)arg1;
- (id)preAudioSessionDataSource;
- (void)setPreAudioSessionDataSource:(id)arg1;
- (long long)currentDeviceCaptureOrientation;
- (void)setCurrentDeviceCaptureOrientation:(long long)arg1;
- (void).cxx_destruct;
@end
