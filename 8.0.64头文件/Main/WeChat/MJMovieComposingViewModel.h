@interface MJMovieComposingViewModel : NSObject <MJMovieComposingContext>
{
    BOOL _isFromShootRecordInterrupted; // +0x8
    BOOL _hasShownVoiceInspectorInTextInputNarration; // +0x9
    BOOL _isFromDraft; // +0xa
    BOOL _isMovieTitleSuggestionEnabled; // +0xb
    BOOL _shouldEnableHDRPlayback; // +0xc
    BOOL _shouldEnableHDRExport; // +0xd
    BOOL _isPendingCancelExporting; // +0xe
    BOOL _shouldSaveDraft; // +0xf
    int _totalExportFrameCount; // +0x10
    OMCComposingSession * _composingSession; // +0x18
    MJTimelineViewModel * _timelineViewModel; // +0x20
    MJPlaybackViewModel * _playbackViewModel; // +0x28
    MJMovieComposingConfiguration * _configuration; // +0x30
    NSNumber * _shootCoverImageStartTime; // +0x38
    MJMovieComposingDraft * _composingDraft; // +0x40
    MJMovieComposingDraftManager * _draftManager; // +0x48
    MJMaterialCache * _materialCache; // +0x50
    MJAudioFileManager * _audioFileManager; // +0x58
    MJVoiceInputManager * _voiceInputManager; // +0x60
    MJSpeechManager * _speechManager; // +0x68
    MJVocalAdjustmentCache * _vocalAdjustmentCache; // +0x70
    OMJPublisherSessionMetrics * _publisherSessionMetrics; // +0x78
    MJPublisherContext * _publisherContext; // +0x80
    MMBGMSelectedMusicResult * _appliedMusicInfo; // +0x88
    MJAssetAnalysisReportInfo * _realShotReportInfo; // +0x90
    MJCaptionReporter * _captionReporter; // +0x98
    FinderMusicReportInfo * _shootMusicReportInfo; // +0xa0
    FinderMusicReportInfo * _editMusicReportInfo; // +0xa8
    OMJAssetInfo * _originAssetInfo; // +0xb0
    NSArray * _originAssetInfos; // +0xb8
    NSArray * _originAssets; // +0xc0
    NSMutableDictionary * _userAssetsByID; // +0xc8
    OMJAspectRatio * _originAspectRatio; // +0xd0
    MJMovieComposingAssetsClassifyHelper * _assetClassifyHelper; // +0xd8
    NSData * _assetClassifyResult; // +0xe0
    OMJMusicInfo * _followMusicInfo; // +0xe8
    MJComposingBGMAdjustViewModel * _bgmAdjustViewModel; // +0xf0
    MJMovieTemplateInfo * _movieTemplateInfo; // +0xf8
    UBBooleanSignal * _isManuallyCancelExportSupported; // +0x100
    MJMovieComposingVideoSavedInfo * _videoSavedInfo; // +0x108
    MJAudioOutputSettings * _audioOutputSettings; // +0x110
    long long _movieTitleSuggestionMinWordCount; // +0x118
    long long _movieTitleWordCountLimit; // +0x120
    OMCExportSession * _exportSession; // +0x128
    NSMapTable * _locationsBySegmentID; // +0x130
    MJLocationItem * _userLocationItem; // +0x138
    NSMapTable * _initialScaleFactorsBySegmentID; // +0x140
    unsigned long long _startExportingTimestamp; // +0x148
    VideoEncodeTask * _exportingTask; // +0x150
}
+ (int)reportInfoSourceScenefromMusicType:(unsigned long long)arg1;
+ (int)reportInfoSourceScenefromTabIndex:(unsigned long long)arg1;
+ (unsigned long long)_calcEstimatedVideoSizeWithDuration:(double)arg1 exportSettings:(id)arg2;
+ (BOOL)_calcDiskSpaceAbleToSupportBackingExportWithVideoExportSize:(unsigned long long)arg1;
- (BOOL)calcShouldSaveDraft;
- (void)updateAndSaveDraftIfNeeded;
- (void)removeDraftIfNeeded;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3 originAssetInfo:(id)arg4;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3 originAssetInfos:(id)arg4;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3 originAssets:(id)arg4;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 composingDraft:(id)arg3 draftManager:(id)arg4;
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
- (BOOL)_checkIfAspectRatioMutated;
- (void)_doMaasSDKBackExportingIfNeededWithOutputFilePath:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_calcComposingSourceVideoPHAsset;
- (id)firstVideoFilePath;
- (BOOL)shouldExitDirectly;
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
- (id)composingSession;
- (id)timelineViewModel;
- (id)playbackViewModel;
- (id)configuration;
- (id)shootCoverImageStartTime;
- (void)setShootCoverImageStartTime:(id)arg1;
- (BOOL)isFromShootRecordInterrupted;
- (void)setIsFromShootRecordInterrupted:(BOOL)arg1;
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
- (void)setPublisherContext:(id)arg1;
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
- (id)bgmAdjustViewModel;
- (void)setBgmAdjustViewModel:(id)arg1;
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
- (BOOL)shouldSaveDraft;
- (void)setShouldSaveDraft:(BOOL)arg1;
- (void).cxx_destruct;
@end
