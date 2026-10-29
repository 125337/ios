@interface SightCaptureLogicF4 : MMObject <SightMovieWriterDelegate, SightCaptureLogic, MMovieCompressorDelegate>
{
    id <SightCaptureDelegate> m_delegate; // +0x8
    id <SightCameraCaptureDelegate> sightCaptureDelegate; // +0x10
    BOOL m_shouldStart; // +0x18
    BOOL m_shouldNotifyPreviewReady; // +0x19
    unsigned int m_currID; // +0x1c
    int m_zoomState; // +0x20
    SightCameraCapture * m_movieCapture; // +0x28
    NSMutableDictionary * m_recorderDict; // +0x30
    NSMutableArray * m_compressorAry; // +0x38
    NSObject<OS_dispatch_queue> * m_logicQueue; // +0x40
    map<unsigned int, bool, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, bool>>> m_captureInitState; // +0x48
    BOOL _needAudio; // +0x60
    unsigned int _maasRecordId; // +0x64
}
- (id)init;
- (void)dealloc;
- (id)getPreset:(long long)arg1;
- (id)movieCapture;
- (BOOL)cameraConfigChanged:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onPictureRetake;
- (BOOL)isCameraOn;
- (void)startCameraWithAudio:(BOOL)arg1;
- (void)startDeviceAudio;
- (BOOL)pauseCamera;
- (void)pauseCameraImmediately;
- (unsigned int)prepareRecord:(CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3;
- (unsigned int)prepareHighQualityRecord:(CGSize)arg1 maxVideoDuration:(float)arg2;
- (unsigned int)prepareRecordF4:(CGSize)arg1 bitRate:(int)arg2 needCompress:(BOOL)arg3 maxVideoDuration:(float)arg4;
- (void)realStartRecord;
- (unsigned int)startRecord:(CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3 orientation:(long long)arg4 compressAudio:(BOOL)arg5 audioBitrate:(float)arg6 needAudio:(BOOL)arg7;
- (unsigned int)startHighQualityRecord:(CGSize)arg1 maxVideoDuration:(float)arg2 orientation:(long long)arg3 compressAudio:(BOOL)arg4 audioBitrate:(float)arg5 needAudio:(BOOL)arg6;
- (unsigned int)startRecordF4:(CGSize)arg1 bitRate:(int)arg2 needCompress:(BOOL)arg3 maxVideoDuration:(float)arg4 orientation:(long long)arg5 compressAudio:(BOOL)arg6 audioBitrate:(float)arg7 needAudio:(BOOL)arg8;
- (id)generateMJRecordingSettingsWithBitRate:(int)arg1 audioBitrate:(float)arg2 orientation:(long long)arg3;
- (BOOL)isMaasRecordId:(unsigned int)arg1;
- (void)stopRecord:(unsigned int)arg1;
- (void)cancelRecord:(unsigned int)arg1;
- (BOOL)isUseNewApiTakePhoto;
- (void)cancelAllRecorder;
- (BOOL)isRecording:(unsigned int)arg1;
- (id)genPreviewView:(CGRect)arg1;
- (void)unregistPreviewView:(id)arg1;
- (void)takePicturWithCompletion:(id /* block */)arg1;
- (void)capturePreviewImage:(id)arg1 withBlock:(id /* block */)arg2;
- (void)armPhotoFallbackAnchoredFrameCapture;
- (void)clearPhotoFallbackAnchoredFrame;
- (void)focusAtPoint:(CGPoint)arg1;
- (BOOL)isSupportZoom;
- (int)zoomState;
- (void)setZoomState:(int)arg1;
- (BOOL)isSupportZoomWithFactor:(double)arg1 isProMode:(BOOL)arg2;
- (double)minZoomFactor;
- (double)maxZoomFactor;
- (double)videoMaxZoomFactor;
- (double)zoomFactor;
- (double)setZoomFactor:(double)arg1;
- (double)defaultZoomFactor;
- (double)setZoomFactor:(double)arg1 ignoreLimit:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)supportFlashlightMode;
- (long long)flashMode;
- (void)setFlashlightMode:(long long)arg1;
- (BOOL)supportTorchMode;
- (long long)torchMode;
- (void)setTorchMode:(long long)arg1;
- (BOOL)isSupportSwitchCamera;
- (long long)cameraPosition;
- (BOOL)switchCamera;
- (void)startQRCodeWatcher;
- (void)stopQRCodeWatcher;
- (BOOL)isUsingHighExposureISO;
- (void)turnOnExposureHighISO;
- (void)resetExposureISO;
- (void)setExposureISO:(double)arg1;
- (double)currentExposureISO;
- (double)maxExposureISO;
- (double)minExposureISO;
- (id)processWithSampleImageAfterPerformCachedOperations:(id)arg1;
- (void)initEffectManager;
- (void)resetEffectManagerLite;
- (void)deallocEffectManager;
- (void)switchBeautyEffect:(BOOL)arg1;
- (void)setBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (id)effectManagerPreviewLayer;
- (void)startUpCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (void)cleanUpCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (id)capFunSessionRenderView;
- (BOOL)isUsingMaasCapSessionForRender;
- (void)queryCamFunTemplateResourcesStatusWithIdentifier:(id)arg1 version:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setSightCameraDelegate:(id)arg1;
- (unsigned long long)sceneOfSightCamera;
- (id)chatUserNameForSightStatistics;
- (id)startRecordingWithOutputFilePath:(id)arg1 exportSettings:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)stopRecordingWithCompletionHandler:(id /* block */)arg1;
- (void)setFilterDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearFilterDescWithCompletionHandler:(id /* block */)arg1;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 shouldEnableAudio:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)isTemplateLoadedWithTemplate:(id)arg1;
- (id)getTemplateInfoWithItem:(id)arg1;
- (void)beginUseTemplateWithTemplate:(id)arg1 enableMusic:(BOOL)arg2 params:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)preloadTemplateWithTemplateId:(id)arg1 completion:(id /* block */)arg2;
- (void)sendMaasCamSessionWithTouches:(id)arg1 event:(id)arg2 states:(unsigned long long)arg3;
- (void)clearTemplateWithCompletionHandler:(id /* block */)arg1;
- (void)clearTemplateWithMusicEnabled:(BOOL)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)isCameraMusicLoaded:(id)arg1;
- (BOOL)isCameraWXMusicLoaded:(id)arg1;
- (void)changeCameraMusic:(id)arg1 musicEnable:(BOOL)arg2 restartPreview:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)setMiaojianCameraRecordNeedAudio:(BOOL)arg1;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)loadMaterial:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)arg1;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerLocalMusicWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)setLocationInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelAll;
- (void)cancelLoadWithTaskID:(int)arg1;
- (BOOL)isTemplateLoadedWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (int)loadTemplateWithTemplateID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)beginUseTemplateAndVideoRemixTemplateWithItem:(id)arg1 videoRemixTemplateID:(id)arg2 overridingParams:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)beginUseVideoRemixTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearVideoRemixTemplateWithCompletionHandler:(id /* block */)arg1;
- (void)beginUseAssetInputWithAssetInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginUseCameraInputWithCompletionHandler:(id /* block */)arg1;
- (void)startExportingVideoWithBitRate:(int)arg1 audioBitrate:(float)arg2 orientation:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelExportingVideoWithCompletionHandler:(id /* block */)arg1;
- (void)updateAIGCResultWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)movieWriter:(id)arg1 onMovieWriteFinished:(id)arg2 ret:(unsigned int)arg3;
- (void)movieWriter:(id)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)onMovieWriterInvalidate:(id)arg1;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (int)getCaptureFrameRate;
- (id)getCodecSettingsWithBitrate:(int)arg1;
- (id)getVideoProfileLevel;
- (id)getKeyFrameInterval;
- (void)stopCameraCapture;
- (void)setCaptureNeedAudio:(BOOL)arg1;
- (void)switchAutoMacroMode:(BOOL)arg1;
- (BOOL)isAutoMacroSwitchFunctionEnabled;
- (double)displayVideoZoomFactorMultiplier;
- (void)setFrameByFramePhotographyForWideAngle:(BOOL)arg1;
- (BOOL)needAudio;
- (void)setNeedAudio:(BOOL)arg1;
- (unsigned int)maasRecordId;
- (void)setMaasRecordId:(unsigned int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
