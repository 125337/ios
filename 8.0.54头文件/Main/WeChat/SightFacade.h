@interface SightFacade : MMUserService <MMServiceProtocol, IMsgExt, SightCaptureDelegate, MMovieCompressorDelegate>
{
    BOOL m_preventCamera; // +0x8
    MMWindowController * m_sightDraftTipsWindow; // +0x10
    MMWindowController * m_sightTipsWindow; // +0x18
    MMWindowController * m_sightWindowController; // +0x20
    MMObject<SightCaptureLogic> * m_logic; // +0x28
    SightDraftMgr * m_draftMgr; // +0x30
    WXSourceColorProperties * m_colorProperties; // +0x38
    unsigned int m_compressorID; // +0x40
    NSMutableDictionary * m_compressorDic; // +0x48
    NSMutableArray * m_invalidateCompressor; // +0x50
    unsigned int m_captureCounter; // +0x58
    unsigned int m_continousCaptureID; // +0x5c
    struct m_lastCaptureTime; // +0x60
    UIImage * m_blurImage; // +0x78
    BOOL m_lightDetector; // +0x80
    CMMotionManager * m_cmManager; // +0x88
    unsigned int videoQualityLevel; // +0x90
    BOOL _needShakeDetector; // +0x94
    BOOL _isNeedResumeWXMusic; // +0x95
    float _jsapiMaxVideoDuration; // +0x98
    float _allowableSightMaxDuration; // +0x9c
    NSMutableDictionary * _sessionsMap; // +0xa0
    NSDictionary * _sightLimitationDictionary; // +0xa8
    NSArray * _allowableSightFPS; // +0xb0
    NSArray * _allowableSightFrameSize; // +0xb8
    MemoryMappedKV * _mappedKV; // +0xc0
    WCSightCameraBeautyConfig * _sightCameraBeautyConfig; // +0xc8
    NSString * _nsTmpMoviePath; // +0xd0
}
+ (id)generateSessionID;
- (id)sessionKeyWithType:(long long)arg1;
- (id)activeSessionIDWithType:(long long)arg1;
- (void)beginSessionID:(id)arg1 withSessionType:(long long)arg2;
- (void)endSessionWithType:(long long)arg1;
- (id)activeSessionIDWithType:(long long)arg1 actionType:(long long)arg2;
- (void)bindSessionIDWithType:(long long)arg1 actionType:(long long)arg2;
- (void)endSessionWithType:(long long)arg1 actionType:(long long)arg2;
- (void)reportCompressSuccess:(BOOL)arg1 scene:(unsigned long long)arg2 encodeType:(long long)arg3 isUsingMAV:(BOOL)arg4 isSWRetry:(BOOL)arg5 isEnableHEVC:(BOOL)arg6;
- (id)init;
- (void)dealloc;
- (BOOL)isSupportSight;
- (BOOL)isDeviceSupportForSightCamera;
- (BOOL)isDeviceSupportForSightCameraWithScene:(unsigned long long)arg1;
- (BOOL)needCheckRequestAuthAccess;
- (BOOL)isAuthStatusOK;
- (double)getCameraHeight;
- (void)onResignActive;
- (void)onBecomeActive;
- (BOOL)isMomentsScene:(unsigned long long)arg1;
- (BOOL)isFinderScene:(unsigned long long)arg1;
- (void)onPictureRetake;
- (BOOL)isCameraOn;
- (void)startCamera;
- (void)startCamera:(BOOL)arg1;
- (void)startCamera:(BOOL)arg1 withAudio:(BOOL)arg2;
- (void)activateAudioSession;
- (void)startCameraAudio;
- (BOOL)pauseCamera;
- (void)startQRCodeScanner;
- (void)focusAtPoint:(CGPoint)arg1;
- (BOOL)isSupportZoom;
- (void)zoomCamera;
- (void)zoomInCamera;
- (double)maxZoomFactor;
- (BOOL)isSupportZoomWithFactor:(double)arg1 isProMode:(BOOL)arg2;
- (double)defaultZoomFactor;
- (double)zoomFactor;
- (double)setZoomFactor:(double)arg1;
- (double)setZoomFactor:(double)arg1 ignoreLimit:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)isSupportSwitchCamera;
- (long long)cameraPosition;
- (BOOL)switchCamera;
- (id)genPreviewView:(CGRect)arg1;
- (void)releasePreviewView:(id)arg1;
- (void)takePicturWithCompletion:(id /* block */)arg1;
- (void)captureImage:(id)arg1 withBlock:(id /* block */)arg2;
- (void)startSnapShotTimer;
- (void)stopSnapShotTimer;
- (void)savePreviewCapture:(unsigned int)arg1;
- (void)processScreenCapture:(id)arg1;
- (void)detactImageLight:(id)arg1;
- (void)savePreviewBlurImage:(id)arg1;
- (id)blurImage;
- (void)stopCameraCapture;
- (unsigned int)startRecording:(CGSize)arg1 bitrate:(double)arg2 atCaptureScene:(unsigned long long)arg3 orientation:(long long)arg4;
- (void)stopRecording:(unsigned int)arg1;
- (void)cancelRecording:(unsigned int)arg1;
- (void)realStartRecording;
- (void)startShakeDector;
- (void)stopShakeDetector;
- (void)onCameraPreviewGap:(id)arg1;
- (void)onCameraPreviewReady:(id)arg1;
- (void)onCameraVideoReady;
- (void)onCameraAudioReady;
- (void)onCameraStop;
- (void)onRecorderFailed:(unsigned int)arg1;
- (void)onRecorderFailed:(unsigned int)arg1 errorCode:(unsigned int)arg2;
- (void)onRecorderFinished:(unsigned int)arg1 moviePath:(id)arg2 withThumb:(id)arg3 duration:(float)arg4 cameraPosition:(long long)arg5;
- (void)onRecorderFinished:(unsigned int)arg1 moviePath:(id)arg2 withThumb:(id)arg3 duration:(float)arg4 templateFinishInfo:(id)arg5;
- (BOOL)isLightBoostOn;
- (void)turnOnLightBoost;
- (void)turnOffLightBoost;
- (void)cancelCompress:(unsigned int)arg1;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned int)arg2;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)pauseMusic;
- (void)setIsNeedResumeWXMusic:(BOOL)arg1;
- (void)resumeMusicPlay;
- (void)addSightDraft:(id)arg1;
- (void)addDraft:(id)arg1;
- (void)removeDraft:(id)arg1;
- (id)getDraftList;
- (void)statSent:(unsigned int)arg1 target:(unsigned int)arg2;
- (void)statOper:(unsigned int)arg1 operation:(unsigned int)arg2 targetCount:(unsigned int)arg3;
- (void)statPlay:(unsigned int)arg1;
- (void)statDraftSave:(unsigned int)arg1;
- (void)statDraftUse:(unsigned int)arg1 operation:(unsigned int)arg2;
- (unsigned long long)legalityTypeOfSight:(id)arg1;
- (BOOL)isTurnOnLegalityCheckForReceivedSight;
- (id)allowableSightFPS;
- (id)allowableSightFrameSize;
- (float)allowableSightMaxDuration;
- (float)allowableSightMaxDurationForScene:(unsigned long long)arg1;
- (id)sightLimitationDictionary;
- (float)sightCaptureMaxDurationWithScene:(unsigned long long)arg1;
- (BOOL)adaptiveBitrateAdjustmentSwitch:(unsigned long long)arg1;
- (BOOL)videoCompositionSoftHEVCEnc;
- (BOOL)audioQualityAnalysisSwitch:(unsigned long long)arg1;
- (BOOL)getEnableHEVCEncode:(unsigned long long)arg1;
- (BOOL)isEnableFFmpegHevcTranscoding:(unsigned long long)arg1;
- (int)getSWTranscodingDurationThreshold:(unsigned long long)arg1;
- (BOOL)getShortVideoSWTranscodingInLongFile;
- (double)getHEVCRelativeToH264Ratio:(BOOL)arg1 useHWHEVCEnc:(BOOL)arg2 Scene:(unsigned long long)arg3;
- (double)getHDRBitrateRatio;
- (double)getSNSPostFinderBitrateRatio;
- (BOOL)getTAVkitSoftEncNewThreadsControl;
- (int)getVcodec2EncodingPreset:(unsigned long long)arg1;
- (unsigned long long)judgeScence:(unsigned long long)arg1 subType:(unsigned long long)arg2;
- (WxAdaptiveBRResParams)getABAControlParameters:(unsigned long long)arg1 addStickers:(BOOL)arg2;
- (unsigned long long)checkIfVideoAllowedToBeSentWithVideoAsset:(id)arg1 videoPath:(id)arg2 pickerScene:(unsigned long long)arg3 isSlowmotion:(BOOL)arg4;
- (CGSize)videoSizeWithAsset:(id)arg1;
- (BOOL)supportFlashlightMode;
- (long long)flashMode;
- (void)setFlashlightMode:(long long)arg1;
- (BOOL)supportTorchMode;
- (long long)torchMode;
- (void)setTorchMode:(long long)arg1;
- (BOOL)isUsingHighExposureISO;
- (void)turnOnExposureHighISO;
- (void)resetExposureISO;
- (void)setExposureISO:(double)arg1;
- (double)currentExposureISO;
- (double)maxExposureISO;
- (double)minExposureISO;
- (id)processWithSampleImageAfterPerformCachedOperations:(id)arg1;
- (BOOL)needsBeautyBtnWithScene:(unsigned long long)arg1;
- (BOOL)needsBeautyEffectWithScene:(unsigned long long)arg1;
- (void)initEffectManagerWithBeautyConfig:(id)arg1;
- (id)effectManagerPreviewLayer;
- (void)startUpCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (void)cleanUpCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (id)capFunSessionRenderView;
- (BOOL)isUsingMaasCapSessionForRender;
- (void)queryCamFunTemplateResourcesStatusWithIdentifier:(id)arg1 version:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
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
- (void)setSightCameraDelegate:(id)arg1;
- (void)beginUseAssetInputWithAssetInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginUseCameraInputWithCompletionHandler:(id /* block */)arg1;
- (void)startExportingVideoWithBitRate:(int)arg1 audioBitrate:(float)arg2 orientation:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelExportingVideoWithCompletionHandler:(id /* block */)arg1;
- (void)updateAIGCResultWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)postTemplateRecordingResultNotification:(id)arg1 finishInfo:(id)arg2;
- (void)setFilterDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearFilterDescWithCompletionHandler:(id /* block */)arg1;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 shouldEnableAudio:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)isTemplateLoadedWithTemplate:(id)arg1;
- (id)getTemplateInfoWithItem:(id)arg1;
- (void)beginUseTemplateWithTemplate:(id)arg1 enableMusic:(BOOL)arg2 params:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setMiaojianCameraRecordNeedAudio:(BOOL)arg1;
- (void)preloadTemplateWithTemplateId:(id)arg1 completion:(id /* block */)arg2;
- (void)sendMaasCamSessionWithTouches:(id)arg1 event:(id)arg2 states:(unsigned long long)arg3;
- (void)clearTemplateWithCompletionHandler:(id /* block */)arg1;
- (void)clearTemplateWithMusicEnabled:(BOOL)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)isCameraMusicLoaded:(id)arg1;
- (BOOL)isCameraWXMusicLoaded:(id)arg1;
- (void)changeCameraMusic:(id)arg1 musicEnable:(BOOL)arg2 restartPreview:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)initEffectManager;
- (void)resetEffectManagerLite;
- (void)deallocEffectManager;
- (void)switchBeautyEffect:(BOOL)arg1;
- (void)setBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (double)beautySkinSmoothValue;
- (double)beautyEyeBrightValue;
- (double)beautyEyeBiggerValue;
- (double)beautySkinBrightValue;
- (double)beautyThinFaceValue;
- (double)beautyRosyFaceValue;
- (double)beautySmallHeadValue;
- (double)beautyCheekboneValue;
- (double)beautyLowerJowboneValue;
- (double)beautyWingOfNoseValue;
- (double)beautyRemoveEyePouchValue;
- (double)beautySmileFoldValue;
- (double)beautySharpenValue;
- (double)beautyTeethBrightValue;
- (double)defaultFilterValue;
- (double)multiSamplingValue;
- (double)naturalFilterValue;
- (double)getDefaultBeautyEffectValueForType:(unsigned long long)arg1;
- (double)getConfigBeautyEffectValueForType:(unsigned long long)arg1;
- (void)setBeautyEffectValue:(double)arg1 forType:(unsigned long long)arg2;
- (id)convertBeautyEffectTypeToSaveKey:(unsigned long long)arg1;
- (float)getSightCameraBeautyConfigValueForType:(unsigned long long)arg1;
- (BOOL)isVideoShouldExportWithoutCompressByAsset:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)isVideoShouldExportWithoutCompressByAsset:(id)arg1 scene:(unsigned long long)arg2 encodeJson:(id)arg3;
- (void)exportVideoWithAsset:(id)arg1 scene:(unsigned long long)arg2 withCompletion:(id /* block */)arg3 andPathPrefix:(id)arg4;
- (void)exportVideoWithCompressByAsset:(id)arg1 assetURL:(id)arg2 scene:(unsigned long long)arg3 isSlowMotion:(BOOL)arg4 withCompletion:(id /* block */)arg5 andPathPrefix:(id)arg6;
- (void)exportVideoWithCompressByAsset:(id)arg1 assetURL:(id)arg2 scene:(unsigned long long)arg3 isSlowMotion:(BOOL)arg4 withCompletion:(id /* block */)arg5 andPathPrefix:(id)arg6 encodeJson:(id)arg7 extraInfo:(id)arg8 usingMAV:(BOOL)arg9;
- (void)exportVideoWithCompressByAsset:(id)arg1 assetURL:(id)arg2 scene:(unsigned long long)arg3 isSlowMotion:(BOOL)arg4 withCompletion:(id /* block */)arg5 andPathPrefix:(id)arg6 encodeJson:(id)arg7 extraInfo:(id)arg8 isSwRetryTask:(BOOL)arg9 usingMAV:(BOOL)arg10;
- (BOOL)shouldForceUsingMAV:(id)arg1;
- (void)exportVideoWithAsset:(id)arg1 scene:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)exportVideoWithCompressByAsset:(id)arg1 assetURL:(id)arg2 scene:(unsigned long long)arg3 isSlowMotion:(BOOL)arg4 withCompletion:(id /* block */)arg5;
- (void)initABAReportPrams:(id)arg1 wxABAPrams:(WxAdaptiveBRResParams)arg2 inPara:(WxVideoTransParaABA)arg3 outPara:(WxVideoTransParaABA)arg4;
- (void)initWxVideoTransParaABA:(id)arg1 videosize:(CGSize)arg2 Asset:(id)arg3 wxVideoTransParaABA:(WxVideoTransParaABA *)arg4 VideoEncodeParams:(id)arg5 Edited:(BOOL)arg6;
- (float)calculateAudioQualityLevel:(id)arg1 VideoEncodeParams:(id)arg2 enableAuQA:(BOOL)arg3 useOriAu:(BOOL)arg4;
- (BOOL)checkSWTranscodingChange:(id)arg1 InputViodeoPrams:(WxVideoTransParaABA)arg2 OutViodeoPrams:(WxVideoTransParaABA)arg3 scene:(unsigned long long)arg4 encVideoDuration:(double)arg5;
- (void)loadOriginalVideoInfoFromPath:(id)arg1 forEncodeParams:(id)arg2;
- (id)adaptiveBitrateAdjustment:(id)arg1 VideoTrack:(id)arg2 Asset:(id)arg3 scene:(unsigned long long)arg4 VideoEncodeParams:(id)arg5 videosize:(CGSize)arg6 Edited:(BOOL)arg7 addStickers:(BOOL)arg8 enableABA:(BOOL)arg9;
- (id)adaptiveBitrateAdjustment:(id)arg1 VideoTrack:(id)arg2 Asset:(id)arg3 scene:(unsigned long long)arg4 VideoEncodeParams:(id)arg5 videosize:(CGSize)arg6 Edited:(BOOL)arg7 addStickers:(BOOL)arg8 enableABA:(BOOL)arg9 forceHWTranscoding:(BOOL)arg10;
- (unsigned long long)minAudioSampleRateInStereo;
- (unsigned long long)minAudioBitrateInStereo;
- (unsigned long long)maxAudioBitrateForLinearPCM;
- (unsigned long long)minAudioBitrateForOriginalInStereo;
- (unsigned long long)minAudioBitrateForOriginalInSingle;
- (unsigned int)getVideoQualityLevel;
- (unsigned int)getImageQualityLevel:(unsigned int)arg1 chooseTime:(int)arg2 coverImageSize:(CGSize)arg3 compressionRatio:(float)arg4;
- (unsigned int)getOrignalImageQualityLevel:(CGSize)arg1 outImageSize:(CGSize)arg2 compressionRatio:(float)arg3;
- (void)calcVideoMd5WithFilePath:(id)arg1 completion:(id /* block */)arg2;
- (void)muteVideoWithPath:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)shouldSaveMediaToLibraryWithMediaType:(unsigned long long)arg1;
- (void)setShouldSaveMediaToLibrary:(BOOL)arg1 withMediaType:(unsigned long long)arg2;
- (BOOL)isTimelineVideoSightAutoPlayEnable;
- (void)timelineVideoSightAutoPlayEnableChanged:(BOOL)arg1;
- (float)megaVideoAlbumMaxSelectDuration;
- (BOOL)authorizationStatusAuthorizedForMediaType:(unsigned long long)arg1;
- (BOOL)authorizationStatusAuthorizedForMediaTypeVideo;
- (BOOL)authorizationStatusAuthorizedForMediaTypeAudio;
- (void)showAuthorizationAlertViewForMediaType:(unsigned long long)arg1;
- (void)showAuthorizationAlertViewForMediaType:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)showAuthorizationForMediaTypeVideoWithHandler:(id /* block */)arg1;
- (void)showAuthorizationForMediaTypeAudioWithHandler:(id /* block */)arg1;
- (void)showAuthorizationForMediaTypeAudioWithHandler:(id /* block */)arg1 cancelTitle:(id)arg2;
- (void)showAuthorizationForMediaTypeAudioWithCancelTitle:(id)arg1;
- (void)goToSettingAuthorization;
- (id)mappedKV;
- (unsigned long long)sightCaptureSceneToSystemAuthScene:(unsigned long long)arg1;
- (void)setCaptureNeedAudio:(BOOL)arg1;
- (BOOL)enableAutoSwitchCameraWhenFocusing;
- (double)autoSwitchingCameraLensPosition;
- (BOOL)isProModeEnabledForScene:(unsigned long long)arg1;
- (BOOL)preventCamera;
- (void)setBlurImage:(id)arg1;
- (BOOL)needShakeDetector;
- (void)setNeedShakeDetector:(BOOL)arg1;
- (float)jsapiMaxVideoDuration;
- (void)setJsapiMaxVideoDuration:(float)arg1;
- (id)sessionsMap;
- (void)setSessionsMap:(id)arg1;
- (void)setSightLimitationDictionary:(id)arg1;
- (void)setAllowableSightFPS:(id)arg1;
- (void)setAllowableSightFrameSize:(id)arg1;
- (void)setAllowableSightMaxDuration:(float)arg1;
- (BOOL)isNeedResumeWXMusic;
- (void)setMappedKV:(id)arg1;
- (id)sightCameraBeautyConfig;
- (void)setSightCameraBeautyConfig:(id)arg1;
- (id)nsTmpMoviePath;
- (void)setNsTmpMoviePath:(id)arg1;
- (void).cxx_destruct;
@end

