@interface MJShootComposingViewModel : MMObject <WCAudioModuleDelegate>
{
    BOOL _shouldOpenMusicPanelForFavMusicEntry; // +0x8
    BOOL _fillinLightIsOnInAutoMode; // +0x9
    BOOL _isPickerEditingEnabled; // +0xa
    BOOL _isDuetShootingEntry; // +0xb
    BOOL _isMJMovieComposingAssetPickingFinished; // +0xc
    BOOL _isInPickerEditingMode; // +0xd
    BOOL _isInMovieComposingMode; // +0xe
    BOOL _isEmptyTemplateFirstLoaded; // +0xf
    BOOL _shouldLandOnEmptyTemplate; // +0x10
    BOOL _isCurrentAIGCTemplateGenAsyncEnabledFromServer; // +0x11
    BOOL _shouldHideMoreTemplateEntry; // +0x12
    BOOL _shouldHideNoneTemplateShootEntry; // +0x13
    BOOL _shouldHideAlbumEntrance; // +0x14
    BOOL _isInitializeStartPreviewingProcessing; // +0x15
    BOOL _isReceivedBeginQuickReplyMsg; // +0x16
    BOOL _isCamoSessionStarted; // +0x17
    BOOL _isRecordingVideo; // +0x18
    BOOL _isUsingFrontCameraRecord; // +0x19
    BOOL _shouldEnableOSTInRedPacket; // +0x1a
    BOOL _isCameraSwitchedByUser; // +0x1b
    MJTemplateCamoSession * _cameraSession; // +0x20
    AVAudioSessionDataSourceDescription * _preAudioSessionDataSource; // +0x28
    MJCameraTemplateReportObject * _cameraTemplateReportObj; // +0x30
    id <MJShootComposingViewModelDelegate> _delegate; // +0x38
    MMImagePickerManagerOptionObj * _optionObj; // +0x40
    unsigned long long _captureScene; // +0x48
    long long _faceGender; // +0x50
    unsigned long long _fillInLightMode; // +0x58
    unsigned long long _countdownTimerMode; // +0x60
    unsigned long long _recordingTimerMode; // +0x68
    NSString * _userName; // +0x70
    unsigned long long _cameraMode; // +0x78
    NSString * _templateFollowFeedId; // +0x80
    NSString * _movieTitle; // +0x88
    double _videoClipStartTimeForFinderRedPackageEntry; // +0x90
    RecommendedMusicInfo * _patMusicInfo; // +0x98
    unsigned long long _lastSelectedEffectType; // +0xa0
    MJShootFilterInspectorViewModel * _filterInspectorViewModel; // +0xa8
    MJShootBeautyInspectorViewModel * _beautyInspectorViewModel; // +0xb0
    MJShootMakeupInspectorViewModel * _makeupInspectorViewModel; // +0xb8
    MJShootFaceEffectInspectorViewModel * _faceEffectInspectorViewModel; // +0xc0
    MJShootComposingTemplatePanelViewModel * _templatePanelViewModel; // +0xc8
    MJShootingMusicPickingViewModel * _musicPickingVM; // +0xd0
    FinderMusicReportInfo * _shootMusicReportInfo; // +0xd8
    NSMutableDictionary * _lyricCachedMusicDescByID; // +0xe0
    OMJPublisherSessionMetrics * _publisherSessionMetrics; // +0xe8
    MJPublisherContext * _publisherContext; // +0xf0
    unsigned long long _startPreviewingTimestamp; // +0xf8
    unsigned long long _startRecordingTimestamp; // +0x100
    WCFinderFeedVideoFetcher * _videoFetcher; // +0x108
    unsigned long long _composingFlow; // +0x110
    MJMovieComposingAssetsClassifyHelper * _assetClassifyHelper; // +0x118
    unsigned long long _albumPickerEnterScene; // +0x120
    WCShortVideoToolBarInitParams * _initializeParams; // +0x128
    MMCameraTemplateItem * _currentShootingTemplateItem; // +0x130
    double _aigcStartTime; // +0x138
    double _aigcEndTime; // +0x140
    unsigned long long _aigcContentResult; // +0x148
    MJAITemplateAssetOptions * _aigcOptions; // +0x150
    OMJCDNBridgeService * _cdnBridgeService; // +0x158
    OMJAIGCBridgeService * _aigcCGIBridgeService; // +0x160
    double _maximumRecordingDurationForCurrentTemplate; // +0x168
    NSString * _recordingID; // +0x170
    unsigned long long _recordingFinishedType; // +0x178
    NSString * _currentReverseCameraTaskID; // +0x180
    unsigned long long _reverseCameraResult; // +0x188
    MMAssetForPHAssetFramework * _phAssetForAssetGenerate; // +0x190
    unsigned long long _templatePanelState; // +0x198
    NSString * _auditDirPath; // +0x1a0
    unsigned long long _bizScene; // +0x1a8
    MJShootCDNUploadProcessor * _cdnUploadProcessor; // +0x1b0
    OMJCaptureSession * _captureSession; // +0x1b8
    unsigned long long _backgroundType; // +0x1c0
    MMAssetInfo * _backgroundAssetInfo; // +0x1c8
    MJComposingBGMAdjustViewModel * _bgmAdjustViewModel; // +0x1d0
    MJShootComposingConfiguration * _configuration; // +0x1d8
    MJShootComposingDraft * _composingDraft; // +0x1e0
    MJShootFollowTemplateLoadingState * _followTemplateLoadingState; // +0x1e8
    OMCGeographicInfo * _userLocation; // +0x1f0
}
- (BOOL)isTemplateLoadedWithItem:(id)arg1;
- (id)getTemplateInfoWithItem:(id)arg1;
- (void)preloadTemplateWithItem:(id)arg1 completion:(id /* block */)arg2;
- (void)startDownloadingWithTemplateItem:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)beginUseTemplateWithTemplate:(id)arg1 enableMusic:(BOOL)arg2 progressHandler:(id /* block */)arg3 params:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_beginUseLocalTemplateWithItem:(id)arg1 enableMusic:(BOOL)arg2 params:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)clearTemplateWithCompletionHandler:(id /* block */)arg1;
- (void)clearTemplateWithMusicEnabled:(BOOL)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)beginUseVideoRemixTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearVideoRemixTemplateWithCompletionHandler:(id /* block */)arg1;
- (BOOL)removeTemplateWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (void)_loadTemplateWithID:(id)arg1 priority:(long long)arg2 progressHandler:(id /* block */)arg3 completion:(id /* block */)arg4 isPreload:(BOOL)arg5;
- (void)pauseRenderingToScreenWithCompletionHandler:(id /* block */)arg1;
- (void)resumeRenderingToScreenWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isCameraMusicLoaded:(id)arg1;
- (BOOL)isCameraWXMusicLoaded:(id)arg1;
- (void)registerLocalMusicWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearBackgroundMusicWithCompletionHandler:(id /* block */)arg1;
- (id)getCurrentBackgroundMusicDesc;
- (id)getMusicFilePathWithMusicID:(id)arg1;
- (id)getMediaFileExtensionWithFilePath:(id)arg1;
- (void)changeCameraMusic:(id)arg1 musicEnable:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateMusicLyricsWithDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearMusicLyricsWithCompletionHandler:(id /* block */)arg1;
- (void)setMusicVolumeWithDesc:(id)arg1;
- (id)getMusicVolumeDesc;
- (void)pauseBackgroundMusicWithCompletionHandler:(id /* block */)arg1;
- (void)resumeBackgroundMusicWithCompletionHandler:(id /* block */)arg1;
- (void)updateSelectedEffectWithType:(unsigned long long)arg1;
- (void)setFilterDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearFilterDescWithCompletionHandler:(id /* block */)arg1;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)arg1;
- (void)updateFaceGender:(long long)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isBeautyAndMakeupDisabled;
- (void)setShouldDisableBeautyAndMakeup:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)setMakeupWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearMakeupWithCompletionHandler:(id /* block */)arg1;
- (void)setFaceEffectWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearFaceEffectWithCompletionHandler:(id /* block */)arg1;
- (long long)loadMaterial:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)cameraPosition;
- (void)switchCamera;
- (void)switchCameraToPosition:(long long)arg1;
- (void)switchCameraToPositionAfterTemplateSwitched:(long long)arg1;
- (void)_switchCameraToPosition:(long long)arg1 isTemplateSwitched:(BOOL)arg2;
- (long long)flashMode;
- (void)setFlashlightMode:(long long)arg1;
- (long long)torchMode;
- (void)setTorchMode:(long long)arg1;
- (double)defaultZoomFactor;
- (double)videoZoomFactor;
- (void)setVideoZoomFactor:(double)arg1;
- (void)resetZoomFactor;
- (void)setFocusPointOfInterest:(CGPoint)arg1;
- (double)maxExposureISO;
- (double)minExposureISO;
- (double)exposureISO;
- (void)setExposureISO:(double)arg1;
- (void)resetExposureISO;
- (void)calculateExposureValueWithCompletionHandler:(id /* block */)arg1;
- (id)capFunSessionRenderView;
- (void)startUpCameraSessionWithTemplateItem:(id)arg1 shouldUseSpecifiedCameraPosition:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)_startCamSessionPreviewingWithIsUseFrontCamera:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)startUpCameraSessionWithoutCameraWithCompletionHandler:(id /* block */)arg1;
- (void)_startAssetPreviewingWithCompletionHandler:(id /* block */)arg1;
- (void)cleanUpCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_createMiaojianSession;
- (void)_destroyMiaojianSession;
- (void)_clearEffectDatas;
- (void)pausePreviewingWithShouldPresentBlankFrame:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)resumePreviewingWithCompletionHandler:(id /* block */)arg1;
- (id)startRecordingWithOutputFilePath:(id)arg1 exportSettings:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)stopRecordingWithCompletionHandler:(id /* block */)arg1;
- (id)cancelRecordingWithCompletionHandler:(id /* block */)arg1;
- (void)exportPhotoWithShouldTeardownSession:(BOOL)arg1 useRenderAspectRatio:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)exportPhotoWithShouldTeardownSession:(BOOL)arg1 useRenderAspectRatio:(BOOL)arg2 useRenderDimensionLevel:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)beginUseAssetInputWithAssetInfo:(id)arg1 outputFilePath:(id)arg2 recordingSettings:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)beginUseCameraInputWithCompletionHandler:(id /* block */)arg1;
- (void)capturePhotoThenUseAsInputWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startExportingVideoWithCompletionHandler:(id /* block */)arg1;
- (void)startExportingVideoWithShouldCloseSession:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelExportingVideoWithCompletionHandler:(id /* block */)arg1;
- (void)beginAdjustSpatialDescWithCompletionHandler:(id /* block */)arg1;
- (void)endAdjustSpatialWithDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAIGCResultWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)_audioDeviceType;
- (void)configAudioSession;
- (void)restoreInputDeviceInMid;
- (void)chooseInputDeviceForBuiltInMic:(BOOL)arg1;
- (void)createCaptureSesssionIfGranted:(unsigned long long)arg1 frontCamera:(BOOL)arg2;
- (id)generateDefaultMJRecordingSettings;
- (id)generateMJRecordingSettingsWithBitRate:(int)arg1 audioBitrate:(float)arg2 orientation:(long long)arg3;
- (id)getKeyFrameInterval;
- (void)sendMaasCamSessionWithTouches:(id)arg1 event:(id)arg2 states:(unsigned long long)arg3;
- (void)setLocationInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeSegmentationDescWithCompletionHandler:(id /* block */)arg1;
- (void)setSegmentationDescWithAssetInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setSegmentationDescWithBlurIntensity:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)camoSessionDidPresentFirstFrame:(id)arg1;
- (void)camoSession:(id)arg1 didPresentFirstFrameAfterSwitchTemplate:(id)arg2;
- (void)camoSessionDidFinishSwitchCamera:(id)arg1;
- (void)camoSession:(id)arg1 needRequestAIGC:(id)arg2;
- (void)camoSessionOnAIGCProcessStarted:(id)arg1;
- (void)camoSessionOnAIGCProcessSucceed:(id)arg1;
- (void)camoSession:(id)arg1 onAIGCProcessFailed:(id)arg2;
- (void)camoSession:(id)arg1 recordingDidFail:(id)arg2;
- (void)camoSession:(id)arg1 recordingTimeDidChange:(struct)arg2 maxRecordingDuration:(struct)arg3;
- (void)activeAudioModule;
- (void)deactiveAudioModule;
- (void)releaseAudioModule;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)createCDNBridgeService;
- (void)destroyCDNBridgeService;
- (void)createAIGCCgiBridgeService;
- (void)destroyAIGCCgiBridgeService;
- (void)_registerAIGCNotification;
- (void)notifyAIGCTaskDidCompleted;
- (void)MJCdnUploadManager:(id)arg1 uploadTaskDidComplete:(id)arg2;
- (void)MJCdnDownloadManager:(id)arg1 downloadTaskDidComplete:(id)arg2;
- (void)cdnBridgeService:(id)arg1 beginDownload:(id)arg2;
- (void)cdnBridgeService:(id)arg1 cancelDownload:(id)arg2;
- (void)cdnBridgeService:(id)arg1 beginUpload:(id)arg2;
- (void)cdnBridgeService:(id)arg1 cancelUpload:(id)arg2;
- (void)MJShootAIGCCgiManager:(id)arg1 submitDidFinishWithResponse:(id)arg2 error:(id)arg3;
- (void)MJShootAIGCCgiManager:(id)arg1 queryDidFinishWithResponse:(id)arg2 error:(id)arg3;
- (void)MJShootAIGCCgiManager:(id)arg1 cancelDidFinishWithTaskID:(id)arg2 error:(id)arg3;
- (void)aigcBridgeService:(id)arg1 didReceiveSubmitRequest:(id)arg2;
- (void)aigcBridgeService:(id)arg1 didReceiveQueryForTaskInfo:(id)arg2;
- (void)aigcBridgeService:(id)arg1 didReceiveCancelForTaskInfo:(id)arg2;
- (BOOL)isCurrentTemplateHasAIGCFeature;
- (BOOL)isCurrentTemplateEnabledAIGCAynsc;
- (void)saveAsyncAIGCDraftToPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openAsyncAIGCDraftFromPath:(id)arg1 videoOutputFilePath:(id)arg2 recordingSettings:(id)arg3 auditCaptureSettings:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithWithConfiguration:(id)arg1 publisherContext:(id)arg2;
- (id)initWithWithConfiguration:(id)arg1 publisherContext:(id)arg2 composingDraft:(id)arg3;
- (id)createFinderCameraOptionBy:(id)arg1;
- (id)shootMusicReportInfo;
- (void)prefetchEffectDataIfNeeded;
- (void)fetchUserLocationWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isFromFollowShooting;
- (id)getFromTemplateID;
- (id)generateTemplateCGIParams;
- (id)templateCGIParamsWithFromTemplateID:(id)arg1;
- (id)createTemplatePanelViewModel;
- (void)setPublisherContext:(id)arg1;
- (void)setAppliedMusicInfo:(id)arg1;
- (void)setShouldOpenMusicPanelForFavMusicEntry:(BOOL)arg1;
- (id)appliedMusicInfo;
- (BOOL)shouldOpenMusicPanelForFavMusicEntry;
- (id)cameraSession;
- (void)setCameraSession:(id)arg1;
- (id)preAudioSessionDataSource;
- (void)setPreAudioSessionDataSource:(id)arg1;
- (id)cameraTemplateReportObj;
- (void)setCameraTemplateReportObj:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)optionObj;
- (void)setOptionObj:(id)arg1;
- (unsigned long long)captureScene;
- (long long)faceGender;
- (void)setFaceGender:(long long)arg1;
- (unsigned long long)fillInLightMode;
- (void)setFillInLightMode:(unsigned long long)arg1;
- (unsigned long long)countdownTimerMode;
- (void)setCountdownTimerMode:(unsigned long long)arg1;
- (unsigned long long)recordingTimerMode;
- (void)setRecordingTimerMode:(unsigned long long)arg1;
- (BOOL)fillinLightIsOnInAutoMode;
- (void)setFillinLightIsOnInAutoMode:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)cameraMode;
- (void)setCameraMode:(unsigned long long)arg1;
- (BOOL)isPickerEditingEnabled;
- (void)setIsPickerEditingEnabled:(BOOL)arg1;
- (id)templateFollowFeedId;
- (void)setTemplateFollowFeedId:(id)arg1;
- (id)movieTitle;
- (void)setMovieTitle:(id)arg1;
- (double)videoClipStartTimeForFinderRedPackageEntry;
- (void)setVideoClipStartTimeForFinderRedPackageEntry:(double)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (BOOL)isDuetShootingEntry;
- (void)setIsDuetShootingEntry:(BOOL)arg1;
- (BOOL)isMJMovieComposingAssetPickingFinished;
- (void)setIsMJMovieComposingAssetPickingFinished:(BOOL)arg1;
- (unsigned long long)lastSelectedEffectType;
- (void)setLastSelectedEffectType:(unsigned long long)arg1;
- (id)filterInspectorViewModel;
- (id)beautyInspectorViewModel;
- (id)makeupInspectorViewModel;
- (id)faceEffectInspectorViewModel;
- (id)templatePanelViewModel;
- (id)musicPickingVM;
- (void)setShootMusicReportInfo:(id)arg1;
- (id)lyricCachedMusicDescByID;
- (void)setLyricCachedMusicDescByID:(id)arg1;
- (id)publisherSessionMetrics;
- (void)setPublisherSessionMetrics:(id)arg1;
- (id)publisherContext;
- (unsigned long long)startPreviewingTimestamp;
- (void)setStartPreviewingTimestamp:(unsigned long long)arg1;
- (unsigned long long)startRecordingTimestamp;
- (void)setStartRecordingTimestamp:(unsigned long long)arg1;
- (id)videoFetcher;
- (void)setVideoFetcher:(id)arg1;
- (BOOL)isInPickerEditingMode;
- (void)setIsInPickerEditingMode:(BOOL)arg1;
- (BOOL)isInMovieComposingMode;
- (void)setIsInMovieComposingMode:(BOOL)arg1;
- (unsigned long long)composingFlow;
- (void)setComposingFlow:(unsigned long long)arg1;
- (id)assetClassifyHelper;
- (void)setAssetClassifyHelper:(id)arg1;
- (unsigned long long)albumPickerEnterScene;
- (void)setAlbumPickerEnterScene:(unsigned long long)arg1;
- (id)initializeParams;
- (void)setInitializeParams:(id)arg1;
- (id)currentShootingTemplateItem;
- (void)setCurrentShootingTemplateItem:(id)arg1;
- (BOOL)isEmptyTemplateFirstLoaded;
- (void)setIsEmptyTemplateFirstLoaded:(BOOL)arg1;
- (BOOL)shouldLandOnEmptyTemplate;
- (void)setShouldLandOnEmptyTemplate:(BOOL)arg1;
- (double)aigcStartTime;
- (void)setAigcStartTime:(double)arg1;
- (double)aigcEndTime;
- (void)setAigcEndTime:(double)arg1;
- (unsigned long long)aigcContentResult;
- (void)setAigcContentResult:(unsigned long long)arg1;
- (id)aigcOptions;
- (void)setAigcOptions:(id)arg1;
- (id)cdnBridgeService;
- (void)setCdnBridgeService:(id)arg1;
- (id)aigcCGIBridgeService;
- (void)setAigcCGIBridgeService:(id)arg1;
- (BOOL)isCurrentAIGCTemplateGenAsyncEnabledFromServer;
- (void)setIsCurrentAIGCTemplateGenAsyncEnabledFromServer:(BOOL)arg1;
- (BOOL)shouldHideMoreTemplateEntry;
- (void)setShouldHideMoreTemplateEntry:(BOOL)arg1;
- (BOOL)shouldHideNoneTemplateShootEntry;
- (void)setShouldHideNoneTemplateShootEntry:(BOOL)arg1;
- (BOOL)shouldHideAlbumEntrance;
- (void)setShouldHideAlbumEntrance:(BOOL)arg1;
- (BOOL)isInitializeStartPreviewingProcessing;
- (void)setIsInitializeStartPreviewingProcessing:(BOOL)arg1;
- (BOOL)isReceivedBeginQuickReplyMsg;
- (void)setIsReceivedBeginQuickReplyMsg:(BOOL)arg1;
- (double)maximumRecordingDurationForCurrentTemplate;
- (void)setMaximumRecordingDurationForCurrentTemplate:(double)arg1;
- (BOOL)isCamoSessionStarted;
- (void)setIsCamoSessionStarted:(BOOL)arg1;
- (BOOL)isRecordingVideo;
- (void)setIsRecordingVideo:(BOOL)arg1;
- (id)recordingID;
- (void)setRecordingID:(id)arg1;
- (unsigned long long)recordingFinishedType;
- (void)setRecordingFinishedType:(unsigned long long)arg1;
- (id)currentReverseCameraTaskID;
- (void)setCurrentReverseCameraTaskID:(id)arg1;
- (unsigned long long)reverseCameraResult;
- (void)setReverseCameraResult:(unsigned long long)arg1;
- (BOOL)isUsingFrontCameraRecord;
- (void)setIsUsingFrontCameraRecord:(BOOL)arg1;
- (id)phAssetForAssetGenerate;
- (void)setPhAssetForAssetGenerate:(id)arg1;
- (unsigned long long)templatePanelState;
- (void)setTemplatePanelState:(unsigned long long)arg1;
- (BOOL)shouldEnableOSTInRedPacket;
- (void)setShouldEnableOSTInRedPacket:(BOOL)arg1;
- (id)auditDirPath;
- (unsigned long long)bizScene;
- (id)cdnUploadProcessor;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (BOOL)isCameraSwitchedByUser;
- (void)setIsCameraSwitchedByUser:(BOOL)arg1;
- (unsigned long long)backgroundType;
- (void)setBackgroundType:(unsigned long long)arg1;
- (id)backgroundAssetInfo;
- (void)setBackgroundAssetInfo:(id)arg1;
- (id)bgmAdjustViewModel;
- (void)setBgmAdjustViewModel:(id)arg1;
- (id)configuration;
- (id)composingDraft;
- (id)followTemplateLoadingState;
- (void)setFollowTemplateLoadingState:(id)arg1;
- (id)userLocation;
- (void)setUserLocation:(id)arg1;
- (void).cxx_destruct;
@end
