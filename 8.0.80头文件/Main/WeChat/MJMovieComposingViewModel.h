@interface MJMovieComposingViewModel : NSObject <MJMovieComposingContext>
{
    BOOL _isMovieGlobalFilterEnabled; // +0x8
    BOOL _isFromShootRecordInterrupted; // +0x9
    BOOL _hasSelectedShootTemplateReportInfo; // +0xa
    BOOL _hasShownVoiceInspectorInTextInputNarration; // +0xb
    BOOL _isFromDraft; // +0xc
    BOOL _isMusicPanelBGMOn; // +0xd
    BOOL _isMovieTitleSuggestionEnabled; // +0xe
    BOOL _isAIGCNewTimeline; // +0xf
    BOOL _shouldEnableHDRPlayback; // +0x10
    BOOL _shouldEnableHDRExport; // +0x11
    BOOL _isPendingCancelExporting; // +0x12
    BOOL _shouldSaveDraft; // +0x13
    float _bgmVolume; // +0x14
    float _ostVolume; // +0x18
    int _totalExportFrameCount; // +0x1c
    MJGlobalFilterViewModel * _globalFilterEditor; // +0x20
    OMCComposingSession * _composingSession; // +0x28
    MJTimelineViewModel * _timelineViewModel; // +0x30
    MJPlaybackViewModel * _playbackViewModel; // +0x38
    MJMovieComposingConfiguration * _configuration; // +0x40
    NSNumber * _shootCoverImageStartTime; // +0x48
    MMCameraTemplateItem * _recordingShootTemplateItem; // +0x50
    MMCameraTemplateItem * _selectedShootTemplateItem; // +0x58
    unsigned long long _selectedShootTemplatePosition; // +0x60
    unsigned long long _selectedShootTemplatePanelType; // +0x68
    MJMovieComposingEffectState * _effectState; // +0x70
    MJPublisherEffectReporter * _effectReporter; // +0x78
    OMJCamOptionResult * _shootTemplateCamOptionResult; // +0x80
    unsigned long long _shootTemplateToastType; // +0x88
    MJMovieComposingDraft * _composingDraft; // +0x90
    MJMovieComposingDraftManager * _draftManager; // +0x98
    MJMaterialCache * _materialCache; // +0xa0
    MJAudioFileManager * _audioFileManager; // +0xa8
    MJVoiceInputManager * _voiceInputManager; // +0xb0
    MJSpeechManager * _speechManager; // +0xb8
    MJVocalAdjustmentCache * _vocalAdjustmentCache; // +0xc0
    OMJPublisherSessionMetrics * _publisherSessionMetrics; // +0xc8
    MJPublisherContext * _publisherContext; // +0xd0
    MMBGMSelectedMusicResult * _appliedMusicInfo; // +0xd8
    MJAssetAnalysisReportInfo * _realShotReportInfo; // +0xe0
    MJCaptionReporter * _captionReporter; // +0xe8
    FinderMusicReportInfo * _shootMusicReportInfo; // +0xf0
    FinderMusicReportInfo * _editMusicReportInfo; // +0xf8
    OMJAssetInfo * _originAssetInfo; // +0x100
    NSArray * _originAssetInfos; // +0x108
    NSArray * _originAssets; // +0x110
    NSMutableDictionary * _userAssetsByID; // +0x118
    OMJAspectRatio * _originAspectRatio; // +0x120
    MJMovieComposingAssetsClassifyHelper * _assetClassifyHelper; // +0x128
    NSData * _assetClassifyResult; // +0x130
    OMJMusicInfo * _followMusicInfo; // +0x138
    MJComposingMusicVolumePanelViewModel * _musicVolumeViewModel; // +0x140
    MJMovieTemplateInfo * _movieTemplateInfo; // +0x148
    UBBooleanSignal * _isManuallyCancelExportSupported; // +0x150
    MJMovieComposingVideoSavedInfo * _videoSavedInfo; // +0x158
    MJAudioOutputSettings * _audioOutputSettings; // +0x160
    long long _movieTitleSuggestionMinWordCount; // +0x168
    long long _movieTitleWordCountLimit; // +0x170
    MJMovieComposingReeditParams * _reeditEntryParams; // +0x178
    MJShootComposingDraft * _aigcDraft; // +0x180
    OMCExportSession * _exportSession; // +0x188
    NSMapTable * _locationsBySegmentID; // +0x190
    MJLocationItem * _userLocationItem; // +0x198
    NSMapTable * _initialScaleFactorsBySegmentID; // +0x1a0
    unsigned long long _startExportingTimestamp; // +0x1a8
    VideoEncodeTask * _exportingTask; // +0x1b0
    NSString * _shootTemplateApplyConfirmationBaselineAssetID; // +0x1b8
}
+ (int)reportInfoSourceScenefromMusicType:(unsigned long long)arg1;
+ (int)reportInfoSourceSceneFromMusicData:(id)arg1 atTabIndex:(unsigned long long)arg2;
+ (int)reportInfoSourceScenefromTabIndex:(unsigned long long)arg1;
+ (unsigned long long)_calcEstimatedVideoSizeWithDuration:(double)arg1 exportSettings:(id)arg2;
+ (BOOL)_calcDiskSpaceAbleToSupportBackingExportWithVideoExportSize:(unsigned long long)arg1;
- (BOOL)calcShouldSaveDraft;
- (void)autoSaveDraftIfNeeded;
- (void)updateAndSaveDraftIfNeeded;
- (void)saveFinalizedDraftIfNeeded;
- (void)removeDraftIfNeeded;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3 originAssetInfo:(id)arg4 publisherContext:(id)arg5;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3 originAssetInfos:(id)arg4 publisherContext:(id)arg5;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3 originAssets:(id)arg4 publisherContext:(id)arg5;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 composingDraft:(id)arg3 draftManager:(id)arg4 publisherContext:(id)arg5;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 aigcDraft:(id)arg3 publisherContext:(id)arg4;
- (id)createActionPanelViewModel;
- (void)dealloc;
- (id)audioFileManager;
- (id)voiceInputManager;
- (id)speechManager;
- (BOOL)isRecording;
- (id)shootMusicReportInfo;
- (id)editMusicReportInfo;
- (void)startExportingSynchronizedWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)startExportingForPostWithProgressHandler:(id /* block */)arg1 exportCompletionHandler:(id /* block */)arg2 asyncCompositionTaskHandler:(id /* block */)arg3;
- (void)_doExportingWithOutputFilePath:(id)arg1 isForPost:(BOOL)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_skipExportingWithVideoSavedInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fillChecksumTypeAndMetadataForExportSettings:(id)arg1 encodeParams:(id)arg2;
- (void)_doExportingWithOutputFilePath:(id)arg1 encodeParams:(id)arg2 exportSettings:(id)arg3 isForPost:(BOOL)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)cancelExportingWithCompletion:(id /* block */)arg1;
- (void)_skipExportingIfNeededWithOutputFilePath:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_skipExportingIfNeededWithOriginAssetInfo:(id)arg1 outputFilePath:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_skipExportingIfNeededWithOriginAssets:(id)arg1 outputFilePath:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_skipExportingIfNeededWithOriginAssetInfos:(id)arg1 outputFilePath:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_skipExportingIfNeededWithAIGCDraft:(id)arg1 outputFilePath:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)calcIfAspectRatioMutated;
- (BOOL)_checkIfAspectRatioMutated;
- (BOOL)hasEditingForShootTemplateApplyConfirmation;
- (id)shootTemplateApplyConfirmationOriginAssetID;
- (void)_doMaasSDKBackExportingIfNeededWithOutputFilePath:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_calcComposingSourceVideoPHAsset;
- (id)firstVideoFilePath;
- (BOOL)shouldExitDirectly;
- (id)effectReporter;
- (id)effectState;
- (BOOL)shouldShowShootTemplateEntry;
- (BOOL)hasShootTemplateOriginAsset;
- (unsigned long long)shootTemplateOriginAssetCount;
- (unsigned long long)shootTemplateTimelineAssetCount;
- (void)undoWithCompletion:(id /* block */)arg1;
- (void)redoWithCompletion:(id /* block */)arg1;
- (void)takeSnapshotWithTitle:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 valueFormatter:(id)arg4;
- (BOOL)canUndo;
- (BOOL)canRedo;
- (id)locationItemForSegment:(id)arg1;
- (void)requestLocationItemForSegment:(id)arg1 completionHandler:(id /* block */)arg2;
- (float)initialScaleFactorForSegmentWithID:(id)arg1;
- (void)registerInitialScaleFactor:(float)arg1 forSegmentWithID:(id)arg2;
- (BOOL)shouldShowSafeAreaTips;
- (id)mediaFilePathOfStorylineFirstSegment;
- (BOOL)checkIfStorylineEditedWithMediaFilePath:(id)arg1;
- (id)correctedShootCoverImageStartTime;
- (void)updateDraftWithNarrationType:(unsigned long long)arg1;
- (id)getCaptionReportData;
- (BOOL)calcComposingIsFromRealShootContent;
- (id)getTimelineJsonString;
- (id)getTimelineData;
- (BOOL)shouldEnableMaasSDKBackExporting;
- (BOOL)shouldSkipExportWithSavedVideoInfo:(id)arg1;
- (void)_skipExportingIfNeededWithCamOptionResult:(id)arg1 templateItem:(id)arg2 outputFilePath:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)_completeShootTemplateMD5Info:(id)arg1 camOptionResult:(id)arg2 userInfo:(id)arg3;
- (void)_completeShootTemplateLayerRenderInfos:(id)arg1 camOptionResult:(id)arg2;
- (void)completeShootTemplatePublishInfoToUserInfo:(id)arg1;
- (void)_completeShootTemplateInfoToUserInfoIfNeeded:(id)arg1 templateItem:(id)arg2 camOptionResult:(id)arg3;
- (id)_shootTemplatePublishUserInfoWithTemplateItem:(id)arg1 camOptionResult:(id)arg2;
- (BOOL)isMovieGlobalFilterEnabled;
- (id)globalFilterEditor;
- (void)setGlobalFilterEditor:(id)arg1;
- (id)composingSession;
- (void)setComposingSession:(id)arg1;
- (id)timelineViewModel;
- (void)setTimelineViewModel:(id)arg1;
- (id)playbackViewModel;
- (void)setPlaybackViewModel:(id)arg1;
- (id)configuration;
- (id)shootCoverImageStartTime;
- (void)setShootCoverImageStartTime:(id)arg1;
- (BOOL)isFromShootRecordInterrupted;
- (void)setIsFromShootRecordInterrupted:(BOOL)arg1;
- (id)recordingShootTemplateItem;
- (void)setRecordingShootTemplateItem:(id)arg1;
- (id)selectedShootTemplateItem;
- (void)setSelectedShootTemplateItem:(id)arg1;
- (unsigned long long)selectedShootTemplatePosition;
- (void)setSelectedShootTemplatePosition:(unsigned long long)arg1;
- (unsigned long long)selectedShootTemplatePanelType;
- (void)setSelectedShootTemplatePanelType:(unsigned long long)arg1;
- (BOOL)hasSelectedShootTemplateReportInfo;
- (void)setHasSelectedShootTemplateReportInfo:(BOOL)arg1;
- (void)setEffectState:(id)arg1;
- (void)setEffectReporter:(id)arg1;
- (id)shootTemplateCamOptionResult;
- (void)setShootTemplateCamOptionResult:(id)arg1;
- (unsigned long long)shootTemplateToastType;
- (void)setShootTemplateToastType:(unsigned long long)arg1;
- (id)composingDraft;
- (void)setComposingDraft:(id)arg1;
- (id)draftManager;
- (id)materialCache;
- (void)setMaterialCache:(id)arg1;
- (void)setAudioFileManager:(id)arg1;
- (void)setVoiceInputManager:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (id)vocalAdjustmentCache;
- (void)setVocalAdjustmentCache:(id)arg1;
- (BOOL)hasShownVoiceInspectorInTextInputNarration;
- (void)setHasShownVoiceInspectorInTextInputNarration:(BOOL)arg1;
- (id)publisherSessionMetrics;
- (void)setPublisherSessionMetrics:(id)arg1;
- (id)publisherContext;
- (id)appliedMusicInfo;
- (void)setAppliedMusicInfo:(id)arg1;
- (id)realShotReportInfo;
- (void)setRealShotReportInfo:(id)arg1;
- (id)captionReporter;
- (void)setCaptionReporter:(id)arg1;
- (BOOL)isFromDraft;
- (void)setIsFromDraft:(BOOL)arg1;
- (void)setShootMusicReportInfo:(id)arg1;
- (void)setEditMusicReportInfo:(id)arg1;
- (id)originAssetInfo;
- (void)setOriginAssetInfo:(id)arg1;
- (id)originAssetInfos;
- (void)setOriginAssetInfos:(id)arg1;
- (id)originAssets;
- (void)setOriginAssets:(id)arg1;
- (id)userAssetsByID;
- (void)setUserAssetsByID:(id)arg1;
- (id)originAspectRatio;
- (id)assetClassifyHelper;
- (void)setAssetClassifyHelper:(id)arg1;
- (id)assetClassifyResult;
- (void)setAssetClassifyResult:(id)arg1;
- (id)followMusicInfo;
- (void)setFollowMusicInfo:(id)arg1;
- (id)musicVolumeViewModel;
- (void)setMusicVolumeViewModel:(id)arg1;
- (float)bgmVolume;
- (void)setBgmVolume:(float)arg1;
- (float)ostVolume;
- (void)setOstVolume:(float)arg1;
- (BOOL)isMusicPanelBGMOn;
- (void)setIsMusicPanelBGMOn:(BOOL)arg1;
- (id)movieTemplateInfo;
- (void)setMovieTemplateInfo:(id)arg1;
- (id)isManuallyCancelExportSupported;
- (id)videoSavedInfo;
- (void)setVideoSavedInfo:(id)arg1;
- (id)audioOutputSettings;
- (void)setAudioOutputSettings:(id)arg1;
- (BOOL)isMovieTitleSuggestionEnabled;
- (long long)movieTitleSuggestionMinWordCount;
- (long long)movieTitleWordCountLimit;
- (BOOL)isAIGCNewTimeline;
- (void)setIsAIGCNewTimeline:(BOOL)arg1;
- (id)reeditEntryParams;
- (void)setReeditEntryParams:(id)arg1;
- (id)aigcDraft;
- (void)setAigcDraft:(id)arg1;
- (BOOL)shouldEnableHDRPlayback;
- (void)setShouldEnableHDRPlayback:(BOOL)arg1;
- (BOOL)shouldEnableHDRExport;
- (void)setShouldEnableHDRExport:(BOOL)arg1;
- (id)exportSession;
- (int)totalExportFrameCount;
- (void)setTotalExportFrameCount:(int)arg1;
- (id)locationsBySegmentID;
- (void)setLocationsBySegmentID:(id)arg1;
- (id)userLocationItem;
- (void)setUserLocationItem:(id)arg1;
- (id)initialScaleFactorsBySegmentID;
- (void)setInitialScaleFactorsBySegmentID:(id)arg1;
- (BOOL)isPendingCancelExporting;
- (void)setIsPendingCancelExporting:(BOOL)arg1;
- (unsigned long long)startExportingTimestamp;
- (void)setStartExportingTimestamp:(unsigned long long)arg1;
- (id)exportingTask;
- (void)setExportingTask:(id)arg1;
- (id)shootTemplateApplyConfirmationBaselineAssetID;
- (void)setShootTemplateApplyConfirmationBaselineAssetID:(id)arg1;
- (BOOL)shouldSaveDraft;
- (void)setShouldSaveDraft:(BOOL)arg1;
- (void).cxx_destruct;
@end
