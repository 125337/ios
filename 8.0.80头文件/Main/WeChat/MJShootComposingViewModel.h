@interface MJShootComposingViewModel : MMObject <WCAudioModuleDelegate>
{
    BOOL _shouldOpenMusicPanelForFavMusicEntry; // +0x8
    BOOL _fillinLightIsOnInAutoMode; // +0x9
    BOOL _isPickerEditingEnabled; // +0xa
    BOOL _isDuetShootingEntry; // +0xb
    BOOL _isMJMovieComposingAssetPickingFinished; // +0xc
    BOOL _isRecordingOSTEnabled; // +0xd
    BOOL _isInPickerEditingMode; // +0xe
    BOOL _isInMovieComposingMode; // +0xf
    BOOL _isInFinderMJSetMode; // +0x10
    BOOL _isInLiteAppCreationMode; // +0x11
    BOOL _shootContentWrapEffectEnabledInMovie; // +0x12
    BOOL _isEmptyTemplateFirstLoaded; // +0x13
    BOOL _shouldShowLongWaitButtonForAIGCAsync; // +0x14
    BOOL _useExplicitAIGCImportForCurrentPicker; // +0x15
    BOOL _shouldHideMoreTemplateEntry; // +0x16
    BOOL _shouldHideNoneTemplateShootEntry; // +0x17
    BOOL _shouldHideAlbumEntrance; // +0x18
    BOOL _isInitializeStartPreviewingProcessing; // +0x19
    BOOL _isReceivedBeginQuickReplyMsg; // +0x1a
    BOOL _isCamoSessionStarted; // +0x1b
    BOOL _isRecordingVideo; // +0x1c
    BOOL _isUsingFrontCameraRecord; // +0x1d
    BOOL _shouldEnableOSTInRedPacket; // +0x1e
    BOOL _isCameraSwitchedByUser; // +0x1f
    BOOL _hasCapturedMovieEffectEntryConfig; // +0x20
    unsigned int _aigcMaxWaitingTime; // +0x24
    float _bgmVolume; // +0x28
    MJTemplateCamoSession * _cameraSession; // +0x30
    AVAudioSessionDataSourceDescription * _preAudioSessionDataSource; // +0x38
    MJCameraTemplateReportObject * _cameraTemplateReportObj; // +0x40
    id <MJShootComposingViewModelDelegate> _delegate; // +0x48
    MMImagePickerManagerOptionObj * _optionObj; // +0x50
    unsigned long long _captureScene; // +0x58
    long long _faceGender; // +0x60
    unsigned long long _fillInLightMode; // +0x68
    unsigned long long _countdownTimerMode; // +0x70
    unsigned long long _recordingTimerMode; // +0x78
    NSString * _userName; // +0x80
    unsigned long long _cameraMode; // +0x88
    NSString * _templateFollowFeedId; // +0x90
    NSString * _movieTitle; // +0x98
    double _videoClipStartTimeForFinderRedPackageEntry; // +0xa0
    RecommendedMusicInfo * _patMusicInfo; // +0xa8
    unsigned long long _lastSelectedEffectType; // +0xb0
    MJShootFilterInspectorViewModel * _filterInspectorViewModel; // +0xb8
    MJShootBeautyInspectorViewModel * _beautyInspectorViewModel; // +0xc0
    MJShootMakeupInspectorViewModel * _makeupInspectorViewModel; // +0xc8
    MJShootFaceEffectInspectorViewModel * _faceEffectInspectorViewModel; // +0xd0
    MJShootComposingTemplatePanelViewModel * _templatePanelViewModel; // +0xd8
    MJShootingMusicPickingViewModel * _musicPickingVM; // +0xe0
    FinderMusicReportInfo * _shootMusicReportInfo; // +0xe8
    NSMutableDictionary * _lyricCachedMusicDescByID; // +0xf0
    OMJPublisherSessionMetrics * _publisherSessionMetrics; // +0xf8
    MJPublisherContext * _publisherContext; // +0x100
    OMJCamOptionResult * _camOptionResult; // +0x108
    NSMutableSet * _exportInputStrs; // +0x110
    NSString * _exportOutputStr; // +0x118
    NSMutableSet * _displayedTemplateListItemIDs; // +0x120
    unsigned long long _startPreviewingTimestamp; // +0x128
    unsigned long long _startRecordingTimestamp; // +0x130
    WCFinderFeedVideoFetcher * _videoFetcher; // +0x138
    unsigned long long _composingFlow; // +0x140
    MJMovieComposingAssetsClassifyHelper * _assetClassifyHelper; // +0x148
    unsigned long long _albumPickerEnterScene; // +0x150
    WCShortVideoToolBarInitParams * _initializeParams; // +0x158
    NSString * _movieComposingFollowWrapTemplateID; // +0x160
    MJMovieComposingEffectState * _movieEffectState; // +0x168
    MMCameraTemplateItem * _currentShootingTemplateItem; // +0x170
    MMCameraTemplateItem * _lastMovieComposingShootTemplateTemplateItem; // +0x178
    OMJAssetInfo * _lastMovieComposingShootTemplateOriginalAssetInfo; // +0x180
    unsigned long long _pendingMovieComposingShootTemplateToastType; // +0x188
    double _aigcStartTime; // +0x190
    double _aigcEndTime; // +0x198
    double _aigcTransitionMidTime; // +0x1a0
    unsigned long long _aigcContentResult; // +0x1a8
    NSString * _aigcErrorStringFromServer; // +0x1b0
    MJAITemplateAssetOptions * _aigcOptions; // +0x1b8
    OMJCDNBridgeService * _cdnBridgeService; // +0x1c0
    OMJAIGCBridgeService * _aigcCGIBridgeService; // +0x1c8
    unsigned long long _aigcRequestConditionState; // +0x1d0
    MJShootAIGCImportRequest * _aigcImportRequest; // +0x1d8
    OMJAIGCQueryResponse * _aigcQueryResponse; // +0x1e0
    OMJAIGCSubmitRequest * _aigcSubmitRequest; // +0x1e8
    double _maximumRecordingDurationForCurrentTemplate; // +0x1f0
    NSString * _recordingID; // +0x1f8
    unsigned long long _recordingFinishedType; // +0x200
    NSString * _currentReverseCameraTaskID; // +0x208
    unsigned long long _reverseCameraResult; // +0x210
    MMAssetForPHAssetFramework * _phAssetForAssetGenerate; // +0x218
    unsigned long long _templatePanelState; // +0x220
    NSString * _auditDirPath; // +0x228
    unsigned long long _bizScene; // +0x230
    MJShootCDNUploadProcessor * _cdnUploadProcessor; // +0x238
    OMJCaptureSession * _captureSession; // +0x240
    unsigned long long _backgroundType; // +0x248
    MMAssetInfo * _backgroundAssetInfo; // +0x250
    MJComposingMusicVolumePanelViewModel * _musicVolumeViewModel; // +0x258
    MJShootComposingConfiguration * _configuration; // +0x260
    MJShootComposingDraft * _composingDraft; // +0x268
    MJShootFollowTemplateLoadingState * _followTemplateLoadingState; // +0x270
    MJShootComposingFaceManagerConfig * _faceManagerConfig; // +0x278
    NSString * _fromObjectID; // +0x280
    unsigned long long _playId; // +0x288
    MJShootReferenceVideoConfig * _referenceVideoConfig; // +0x290
    FinderUserFaceIDInfo * _faceIdInfo; // +0x298
    OMCGeographicInfo * _userLocation; // +0x2a0
}
- (BOOL)isTemplateLoadedWithItem:(id)arg1;
- (BOOL)isTemplateLoadedWithTemplateID:(id)arg1 templateDescVersion:(unsigned long long)arg2;
- (id)getTemplateInfoWithItem:(id)arg1;
- (void)preloadTemplateWithItem:(id)arg1 completion:(id /* block */)arg2;
- (void)startDownloadingWithTemplateItem:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)startDownloadingWithTemplateID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
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
- (void)registerLocalMusicToCamoWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)registerLocalPatMusicForSetupParamsIfNeeded:(id)arg1;
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
- (void)syncFaceIdInfoFromService;
- (unsigned long long)getFaceIDState;
- (void)updateFaceInfoFromServer;
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
- (id)_buildCamPreviewSettings;
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
- (void)beginUseAssetInputWithAssetInfos:(id)arg1 timelineConfig:(id)arg2 outputFilePath:(id)arg3 recordingSettings:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)beginUseCameraInputWithCompletionHandler:(id /* block */)arg1;
- (void)capturePhotoThenUseAsInputWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_buildAuditCaptureSettingsForAssetInput;
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
- (id)calcRecordingSettingsForAssetGeneration;
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
- (void)camoSession:(id)arg1 explicitAIGCAssetsDidRender:(id)arg2;
- (void)camoSession:(id)arg1 explicitAIGCRequestDidComplete:(id)arg2;
- (void)camoSession:(id)arg1 explicitAIGCRequestID:(id)arg2 didFailWithError:(id)arg3;
- (void)camoSessionOnAIGCProcessStarted:(id)arg1;
- (void)camoSessionOnAIGCProcessSucceed:(id)arg1;
- (void)camoSession:(id)arg1 onAIGCRequestConditionNotMet:(id)arg2;
- (void)camoSession:(id)arg1 onAIGCProcessSucceedWithTransitionMidTime:(struct)arg2;
- (void)camoSession:(id)arg1 onAIGCProcessFailed:(id)arg2;
- (void)camoSession:(id)arg1 recordingDidFail:(id)arg2;
- (void)camoSession:(id)arg1 recordingTimeDidChange:(struct)arg2 maxRecordingDuration:(struct)arg3;
- (void)activeAudioModule;
- (void)deactiveAudioModule;
- (void)releaseAudioModule;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (BOOL)isTemplateReeditFollowShootScene;
- (void)cacheAIGCResultFromQueryResponse:(id)arg1;
- (BOOL)canPresentMovieComposingForAIGCNewTimeline;
- (void)reeditEntryParamsForDidFinishClipWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)startImportedAIGCIfNeeded;
- (void)cancelImportedAIGC;
- (void)cancelImportedAIGCWithCompletion:(id /* block */)arg1;
- (void)buildAIGCTemplateReeditParamsWithCompletion:(id /* block */)arg1;
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
- (void)aigcBridgeService:(id)arg1 didReceiveCancelForTaskInfo:(id)arg2 cancelInfo:(id)arg3;
- (int)_mapCancelReasonToCGIType:(unsigned long long)arg1;
- (BOOL)isCurrentTemplateHasAIGCFeature;
- (BOOL)isCurrentTemplateEnabledAIGCAynsc;
- (BOOL)isCurrentTemplateFaceIDAIGC;
- (void)saveAsyncAIGCDraftToPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openAsyncAIGCDraftFromPath:(id)arg1 videoOutputFilePath:(id)arg2 recordingSettings:(id)arg3 auditCaptureSettings:(id)arg4 completionHandler:(id /* block */)arg5;
- (BOOL)shouldRejectVideoPublishForLowFaceCoverageRequiredWithInfo:(id)arg1;
- (void)setInitializeParams:(id)arg1;
- (void)prepareMovieEffectInputWithFinishInfo:(id)arg1 isAssetGenerated:(BOOL)arg2;
- (id)initWithConfiguration:(id)arg1 publisherContext:(id)arg2;
- (id)initWithConfiguration:(id)arg1 publisherContext:(id)arg2 composingDraft:(id)arg3;
- (id)createFinderCameraOptionBy:(id)arg1;
- (id)shootMusicReportInfo;
- (void)prefetchEffectDataIfNeeded;
- (void)fetchUserLocationWithCompletionHandler:(id /* block */)arg1;
- (void)setCurrentShootingTemplateItem:(id)arg1;
- (BOOL)isFromFollowShooting;
- (id)getFromTemplateID;
- (unsigned long long)getCurrentTemplateType;
- (id)generateTemplateCGIParams;
- (id)templateCGIParamsWithFromTemplateID:(id)arg1;
- (id)createTemplatePanelViewModel;
- (void)setReferenceVideoConfig:(id)arg1;
- (void)setAppliedMusicInfo:(id)arg1;
- (void)setShouldOpenMusicPanelForFavMusicEntry:(BOOL)arg1;
- (id)appliedMusicInfo;
- (id)genCommonReportDict;
- (void)configureMD5InfoForTemplateInfo:(id)arg1;
- (void)configureLayerRenderInfosForTemplateInfo:(id)arg1;
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
- (BOOL)isRecordingOSTEnabled;
- (void)setIsRecordingOSTEnabled:(BOOL)arg1;
- (id)musicPickingVM;
- (void)setShootMusicReportInfo:(id)arg1;
- (id)lyricCachedMusicDescByID;
- (void)setLyricCachedMusicDescByID:(id)arg1;
- (id)publisherSessionMetrics;
- (void)setPublisherSessionMetrics:(id)arg1;
- (id)publisherContext;
- (id)camOptionResult;
- (void)setCamOptionResult:(id)arg1;
- (id)exportInputStrs;
- (void)setExportInputStrs:(id)arg1;
- (id)exportOutputStr;
- (void)setExportOutputStr:(id)arg1;
- (id)displayedTemplateListItemIDs;
- (void)setDisplayedTemplateListItemIDs:(id)arg1;
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
- (BOOL)isInFinderMJSetMode;
- (void)setIsInFinderMJSetMode:(BOOL)arg1;
- (BOOL)isInLiteAppCreationMode;
- (void)setIsInLiteAppCreationMode:(BOOL)arg1;
- (unsigned long long)composingFlow;
- (void)setComposingFlow:(unsigned long long)arg1;
- (id)assetClassifyHelper;
- (void)setAssetClassifyHelper:(id)arg1;
- (unsigned long long)albumPickerEnterScene;
- (void)setAlbumPickerEnterScene:(unsigned long long)arg1;
- (id)initializeParams;
- (BOOL)shootContentWrapEffectEnabledInMovie;
- (id)movieComposingFollowWrapTemplateID;
- (id)movieEffectState;
- (void)setMovieEffectState:(id)arg1;
- (id)currentShootingTemplateItem;
- (id)lastMovieComposingShootTemplateTemplateItem;
- (void)setLastMovieComposingShootTemplateTemplateItem:(id)arg1;
- (id)lastMovieComposingShootTemplateOriginalAssetInfo;
- (void)setLastMovieComposingShootTemplateOriginalAssetInfo:(id)arg1;
- (unsigned long long)pendingMovieComposingShootTemplateToastType;
- (void)setPendingMovieComposingShootTemplateToastType:(unsigned long long)arg1;
- (BOOL)isEmptyTemplateFirstLoaded;
- (void)setIsEmptyTemplateFirstLoaded:(BOOL)arg1;
- (double)aigcStartTime;
- (void)setAigcStartTime:(double)arg1;
- (double)aigcEndTime;
- (void)setAigcEndTime:(double)arg1;
- (double)aigcTransitionMidTime;
- (void)setAigcTransitionMidTime:(double)arg1;
- (unsigned int)aigcMaxWaitingTime;
- (void)setAigcMaxWaitingTime:(unsigned int)arg1;
- (unsigned long long)aigcContentResult;
- (void)setAigcContentResult:(unsigned long long)arg1;
- (id)aigcErrorStringFromServer;
- (void)setAigcErrorStringFromServer:(id)arg1;
- (id)aigcOptions;
- (void)setAigcOptions:(id)arg1;
- (id)cdnBridgeService;
- (void)setCdnBridgeService:(id)arg1;
- (id)aigcCGIBridgeService;
- (void)setAigcCGIBridgeService:(id)arg1;
- (BOOL)shouldShowLongWaitButtonForAIGCAsync;
- (void)setShouldShowLongWaitButtonForAIGCAsync:(BOOL)arg1;
- (unsigned long long)aigcRequestConditionState;
- (void)setAigcRequestConditionState:(unsigned long long)arg1;
- (id)aigcImportRequest;
- (void)setAigcImportRequest:(id)arg1;
- (BOOL)useExplicitAIGCImportForCurrentPicker;
- (void)setUseExplicitAIGCImportForCurrentPicker:(BOOL)arg1;
- (id)aigcQueryResponse;
- (void)setAigcQueryResponse:(id)arg1;
- (id)aigcSubmitRequest;
- (void)setAigcSubmitRequest:(id)arg1;
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
- (id)musicVolumeViewModel;
- (void)setMusicVolumeViewModel:(id)arg1;
- (float)bgmVolume;
- (void)setBgmVolume:(float)arg1;
- (id)configuration;
- (id)composingDraft;
- (id)followTemplateLoadingState;
- (void)setFollowTemplateLoadingState:(id)arg1;
- (id)faceManagerConfig;
- (void)setFaceManagerConfig:(id)arg1;
- (id)fromObjectID;
- (void)setFromObjectID:(id)arg1;
- (unsigned long long)playId;
- (void)setPlayId:(unsigned long long)arg1;
- (id)referenceVideoConfig;
- (id)faceIdInfo;
- (void)setFaceIdInfo:(id)arg1;
- (BOOL)hasCapturedMovieEffectEntryConfig;
- (void)setHasCapturedMovieEffectEntryConfig:(BOOL)arg1;
- (id)userLocation;
- (void)setUserLocation:(id)arg1;
- (void).cxx_destruct;
@end
