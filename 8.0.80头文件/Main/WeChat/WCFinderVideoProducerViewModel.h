@interface WCFinderVideoProducerViewModel : NSObject <WCAudioModuleProxyDelegate>
{
    id /* block */ _templateComparatorBlock; // +0x8
    UIImage * _firstAssetThumbImage; // +0x10
    OMJMusicInfo * _currentRenderingMusicInfo; // +0x18
    BOOL _delaysCreation; // +0x20
    BOOL _shouldStartCreationAfterPresented; // +0x21
    BOOL _isStartAssetClipping; // +0x22
    BOOL _isStopAssetClipping; // +0x23
    BOOL _shouldShowNewBGMPanel; // +0x24
    BOOL _canRecreateWhileLoading; // +0x25
    BOOL _fetchExtRecommendMusicEnabled; // +0x26
    BOOL _isLocalReplacementInProgress; // +0x27
    BOOL _hasLocalReplacementRollbackFailure; // +0x28
    BOOL _isLocalReplacementCleanupRequested; // +0x29
    BOOL _localReplacementPreservesNoMusic; // +0x2a
    BOOL _isStartingPlayingVideo; // +0x2b
    BOOL _isStoppingPlayingVideo; // +0x2c
    BOOL _replacementInputAssetsCommitted; // +0x2d
    WCFinderVideoProducerOptions * _options; // +0x30
    id <WCFinderVideoProducerDataProxy> _dataProxy; // +0x38
    WCMomentsPostReportSession * _postReportSession; // +0x40
    WCFinderVideoProducerExportSettingsLoader * _exportSettingsLoader; // +0x48
    NSString * _initialTemplateID; // +0x50
    NSString * _initialMusicID; // +0x58
    NSString * _initialFeedMusicID; // +0x60
    NSString * _initialAIModelType; // +0x68
    long long _delayCreationState; // +0x70
    MJVideoTemplate * _changingTemplate; // +0x78
    OMJMusicInfo * _changingMusic; // +0x80
    OMJTemplateInfo * _currentRenderingTemplateInfo; // +0x88
    id <WCFinderVideoProducerViewModelDelegate> _delegate; // +0x90
    MJTemplateMovieSession * _sessionAssistant; // +0x98
    NSString * _localReplacementGenerationID; // +0xa0
    id /* block */ _pendingLocalReplacementCleanupCompletion; // +0xa8
    MJTemplateMovieSession * _localReplacementSessionPendingCleanup; // +0xb0
    WCFinderVideoProducerCandidateAssetContext * _localReplacementCandidateContextPendingCleanup; // +0xb8
    id /* block */ _localReplacementCompletion; // +0xc0
    WCFinderVideoProducerReportSession * _finderReportSession; // +0xc8
    WCFinderVideoProducerDataManager * _dataManager; // +0xd0
    WCFinderVideoProducerFlavors * _flavors; // +0xd8
    BeatTemplateTaskResult * _serverAIBeatTemplateResult; // +0xe0
    NSArray * _serverAIMusicInfoList; // +0xe8
    NSSet * _serverAIRecommendMusicSIDSet; // +0xf0
    MJServerAIComposingTask * _serverAIComposingTask; // +0xf8
    MJServerAIComposingMaterialUploader * _serverAIComposingMaterialUploader; // +0x100
    MJServerAIComposingComposer * _serverAIComposingComposer; // +0x108
    NSString * _serverAITaskGenerationID; // +0x110
    NSString * _serverAIReportTaskID; // +0x118
    unsigned long long _serverAIReportServerStartTimeMs; // +0x120
    unsigned long long _serverAIReportServerTimeConsuming; // +0x128
    unsigned long long _serverAIReportClientRenderStartTimeMs; // +0x130
    unsigned long long _serverAIReportClientRenderTimeConsuming; // +0x138
    unsigned long long _serverAIReportClientRenderRet; // +0x140
    MJAnalyticsMovieSession * _serverAIReportRecommendationAnalytics; // +0x148
    MJServerAITemplateComposingSession * _sessionAssistantServerAI; // +0x150
    MJServerAITemplateComposingSession * _pendingSessionAssistantServerAI; // +0x158
    unsigned long long _serverAIComposingPlaybackRequestID; // +0x160
    NSString * _templateRecommendDebugText; // +0x168
}
+ (void)cleanUpAbandonedLocalReplacementSession:(id)arg1 dataManager:(id)arg2 candidateContext:(id)arg3 completion:(id /* block */)arg4;
- (id)oneClickFilmReportContext;
- (void)resetServerAIComposingReportMetrics;
- (void)beginServerAIComposingClientRenderReport;
- (void)finishServerAIComposingClientRenderReportWithSuccess:(BOOL)arg1;
- (BOOL)isNewAITemplateComposingEnabled;
- (BOOL)isAllPictureOrLivePhotoAssets:(id)arg1;
- (BOOL)isSimpleDefaultTemplate:(id)arg1;
- (BOOL)isNewAITemplateComposingMusic:(id)arg1;
- (long long)creationRouteForTrigger:(long long)arg1 template:(id)arg2 musicInfo:(id)arg3;
- (id)serverAIComposingInitialTemplate;
- (BOOL)shouldUseServerAIComposingInitialCreation;
- (BOOL)shouldUseServerAIComposingPlayRoute;
- (BOOL)shouldDeferPlayUntilServerAIComposingSessionReady;
- (id)currentAssetAdjustmentSourceSessionGenerationID;
- (double)mappedServerAIComposingProgress:(double)arg1 stageText:(id)arg2;
- (double)mappedServerAIComposingComposerProgress:(double)arg1;
- (void)updateServerAIBeatTemplateResult:(id)arg1;
- (id)serverAIRecommendBGMList;
- (BOOL)hasValidServerAIDefaultTemplate;
- (id)serverAIBGMInfoForMusic:(id)arg1;
- (id)serverAIMusicInfosForTemplate:(id)arg1;
- (id)defaultServerAIMusicInfoForTemplate:(id)arg1;
- (id)targetMusicInfoForTemplateChange:(id)arg1 preferredMusicID:(id)arg2;
- (void)composeInitialServerAIResult:(id)arg1 defaultMusicInfo:(id)arg2 progressBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)startServerAIComposingInitialCreationForTemplate:(id)arg1 progressBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)startServerAIComposingTaskForTemplate:(id)arg1 progressBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)regenerateServerAIComposingWithOrderedAssetInfoList:(id)arg1 expectedTemplateID:(id)arg2 generationID:(id)arg3 progressBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)currentServerAIReplacementContext;
- (BOOL)isCurrentServerAIReplacementContext:(id)arg1;
- (BOOL)isServerAIReplacementCandidateMusicValid:(id)arg1;
- (void)startServerAIReplacementUploadWithContext:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)startServerAIReplacementTaskWithMaterialList:(id)arg1 context:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)startServerAIReplacementComposeWithContext:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)switchToServerAIReplacementCandidateWithContext:(id)arg1;
- (void)rollbackServerAIReplacementContext:(id)arg1 causeError:(id)arg2;
- (void)finishServerAIReplacementContext:(id)arg1 result:(long long)arg2 error:(id)arg3;
- (id)consumeServerAIComposingTaskIDForReport;
- (unsigned long long)serverAIComposingServerTimeConsumingForReport;
- (unsigned long long)serverAIComposingClientRenderTimeConsumingForReport;
- (unsigned long long)serverAIComposingClientRenderRetForReport;
- (id)serverAIComposingMaterialInfoForReport;
- (unsigned long long)invalidateServerAIComposingPlaybackRequests;
- (void)restartServerAIComposingPlayWithTimeRange:(id)arg1 completion:(id /* block */)arg2;
- (void)performServerAIComposingStartWithRequestID:(unsigned long long)arg1 session:(id)arg2 timeRange:(id)arg3 completion:(id /* block */)arg4;
- (void)startServerAIComposingPlayWithCompletionBlock:(id /* block */)arg1;
- (void)startServerAIComposingPlayWithTimeRange:(struct)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelServerAIComposingAssetClipperPlaybackRequests;
- (void)stopServerAIComposingPlayWithCompletionBlock:(id /* block */)arg1;
- (void)updateServerAIComposingSession:(id)arg1 completion:(id /* block */)arg2;
- (void)updateServerAIComposingSession:(id)arg1 waitsForMusicStatus:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)applyCurrentMusicStatusToServerAIComposingSession;
- (void)clearServerAIComposingSession;
- (void)clearServerAIComposingSessionAndRestoreLocalState;
- (id)serverAIComposingStoryClipSegmentsForAssetClipper;
- (BOOL)applyServerAIComposingStoryClipSegmentOrderWithSegmentIDs:(id)arg1;
- (void)commitServerAIComposingAssetReorderTimelineMutationWithCompletionBlock:(id /* block */)arg1;
- (void)beginServerAIComposingAssetClipSkimmingWithSegmentID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)skimServerAIComposingAssetClipWithSegmentID:(id)arg1 toTimeInMedia:(struct)arg2;
- (void)finishServerAIComposingAssetClipSkimmingWithSegmentID:(id)arg1 startTimeInMedia:(struct)arg2 completionBlock:(id /* block */)arg3;
- (void)restoreServerAIComposingAssetClipTimeRangesForSegmentIDs:(id)arg1 timeRanges:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)updateServerAIComposingMusicStatusWithBGMEnabled:(BOOL)arg1 OSTEnabled:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)serverAIComposingPreviewRenderView;
- (double)serverAIComposingPreviewRenderRatio;
- (struct)serverAIComposingDuration;
- (void)cancelServerAIComposingTask;
- (void)exportServerAIComposingWithVideoTemplate:(id)arg1 atIndex:(long long)arg2 exportSettings:(id)arg3 exportPath:(id)arg4 spentProgress:(double)arg5 progressBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7;
- (id)serverAIRecommendMusicSIDSetIfNeeded;
- (id)initWithAssetInfoList:(id)arg1 options:(id)arg2;
- (id)initWithAssetInfoList:(id)arg1 options:(id)arg2 finderReportSession:(id)arg3;
- (id)initWithAssetInfoList:(id)arg1 options:(id)arg2 postReportSession:(id)arg3;
- (id)initWithAssetInfoList:(id)arg1 options:(id)arg2 postReportSession:(id)arg3 finderReportSession:(id)arg4;
- (void)dealloc;
- (void)_initData;
- (void)_initInitialTemplateMetadata;
- (id)findTemplateForID:(id)arg1;
- (void)filterLocalResourceWithCompleteBlock:(id /* block */)arg1;
- (void)prepareWithStartupBlock:(id /* block */)arg1;
- (void)createVideoWithCompleteBlock:(id /* block */)arg1 updateBlock:(id /* block */)arg2 progressBlock:(id /* block */)arg3;
- (void)_startServerAIInitialCreationWithRecommendationBootstrapForTemplate:(id)arg1 templateID:(id)arg2 musicIDs:(id)arg3 assetInfos:(id)arg4 completeBlock:(id /* block */)arg5 updateBlock:(id /* block */)arg6 progressBlock:(id /* block */)arg7;
- (void)_prepareLocalSessionIfNeededWithCompletion:(id /* block */)arg1;
- (void)_destroyLocalSessionIfNeededWithCompletion:(id /* block */)arg1;
- (id)_currentReadableLocalMovieSession;
- (id)_currentLocalTemplateInfo;
- (id)_currentLocalMusicInfo;
- (id)_joinedStringsForTemplateRecommendDebug:(id)arg1;
- (id)currentTemplateRecommendDebugText;
- (BOOL)_shouldTreatStartPlayingErrorAsSuccess:(id)arg1;
- (BOOL)_isDummyTemplateMusicError:(id)arg1;
- (BOOL)_hasServerAIComposingContext;
- (void)_fetchRecommendMusicsFromCurrentLocalSessionForTemplateID:(id)arg1 allowRetryAfterServerAITransition:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)_startOrRestartLocalCreationWithVideoTemplate:(id)arg1 musicID:(id)arg2 timeRange:(struct)arg3 options:(id)arg4 outroInfo:(id)arg5 progressHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (void)_startOrRestartLocalCreationWithMusicID:(id)arg1 templateID:(id)arg2 AIModelType:(id)arg3 timeRange:(struct)arg4 options:(id)arg5 outroInfo:(id)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (void)_ensureLocalSessionRecommendationContextWithCompletion:(id /* block */)arg1;
- (void)loadMoreRecommendTemplatesWithCompletionBlock:(id /* block */)arg1;
- (void)exportTemplate:(id)arg1 atIndex:(long long)arg2 withProgressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)cleanUpWithCompletionBlock:(id /* block */)arg1;
- (void)startPlayWithCompletionBlock:(id /* block */)arg1;
- (void)startPlayingSegmentWithId:(id)arg1 forTimeRange:(struct)arg2 completion:(id /* block */)arg3;
- (void)stopPlayWithCompletionBlock:(id /* block */)arg1;
- (BOOL)isPlayingVideo;
- (void)changeTemplateWithTemplate:(id)arg1 musicID:(id)arg2 progressBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)updateVideoProducerOptionsToEnableOST:(BOOL)arg1 enableBGM:(BOOL)arg2 enableLyrics:(BOOL)arg3;
- (void)updatePreloadConfigs:(id)arg1;
- (void)updateVideoProducerFlavorsToEnableAudioModule:(BOOL)arg1;
- (void)updateVideoProducerFlavorsToMuteAllPreview:(BOOL)arg1;
- (void)updateVideoProducerFlavorsToEnablePreviewOST:(BOOL)arg1;
- (void)updateVideoProducerFlavorsToEnablePreviewBGM:(BOOL)arg1;
- (void)updateVideoProducerFlavorsToEnableExternalPlayback:(BOOL)arg1;
- (void)_onMusicBarVCShowed;
- (void)_onBGMPanelVCShowed;
- (void)handleMusicBarShowed;
- (id)_getTemplateOperationCtxFromBelonger:(long long)arg1;
- (void)didProvideTemplate:(id)arg1 fromBelonger:(long long)arg2;
- (void)didShowTemplate:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)didSelectTemplate:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)didStartPlayingSelectedTemplateWithDuration:(struct)arg1 fromBelonger:(long long)arg2;
- (void)didStopPlayingSelectedTemplateFromBelonger:(long long)arg1;
- (void)didSwitchBGM:(BOOL)arg1 fromBelonger:(long long)arg2;
- (void)didSwitchOST:(BOOL)arg1 fromBelonger:(long long)arg2;
- (void)didCheckJumpToMJAppRegular:(long long)arg1;
- (void)didClickLaunchMJApp;
- (void)didLaunchMJApp;
- (void)didShowMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectMusic:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)didStartPlayingSelectedMusicFromBelonger:(long long)arg1;
- (void)didFetchExtRecommendMusicWithRequestID:(unsigned long long)arg1;
- (void)didEnterSearchingMusic;
- (void)didExitSearchingMusic;
- (void)didSearchMusicByKey:(id)arg1;
- (void)didShowMusicSearchResult:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectMusicSearchResult:(id)arg1 atIndex:(long long)arg2;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didStopPlayingMusicSearchResult;
- (void)didStartEditingSegmentWithTemplateInfo:(id)arg1;
- (void)didStopEditingSegment;
- (void)didFinishEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didCancelEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didExportWithTemplateInfo:(id)arg1 musicInfo:(id)arg2;
- (id)_getRecommendSceneStr;
- (struct)_generateTimeRangeForPlaying;
- (struct)_generateTimeRangeForExporting;
- (id)_generateExportOptions;
- (id)_generatePreviewOptionsForTemplateWithId:(id)arg1;
- (id)_generateMutedPreviewOptionsForTemplateWithId:(id)arg1;
- (void)_prepareMovieOptions:(id)arg1 forTemplateWithId:(id)arg2;
- (void)_applyMovieOptions;
- (void)_preloadTemplatesStartWithId:(id)arg1;
- (void)_preloadMusicsStartWithId:(id)arg1;
- (void)_loadExportSettingsWithVideoTemplate:(id)arg1 withProgressBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)onAudioModuleAbilityChanged:(BOOL)arg1;
- (id)currentRenderingMusicInfo;
- (void)setCurrentRenderingMusicInfo:(id)arg1;
- (id)sessionKey;
- (id)previewThumbImage;
- (void)didCommitReplacementInputAssets;
- (double)previewRenderRatio;
- (id)previewRenderView;
- (id)currentTemplateInfo;
- (id)currentMusicInfo;
- (struct)renderingVideoDuration;
- (id)actionRecorder;
- (void)finishVideoProducerReportSession;
- (id)_maasSession;
- (void)_prepareWithNewAIComposingStartupBlock:(id /* block */)arg1;
- (void)_createVideoWithNewAIComposing:(id)arg1 completeBlock:(id /* block */)arg2 updateBlock:(id /* block */)arg3 progressBlock:(id /* block */)arg4;
- (void)_loadMoreRecommendTemplatesWithNewAIComposing:(id /* block */)arg1;
- (void)_exportTemplateWithNewAIComposing:(id)arg1 atIndex:(long long)arg2 exportFilePath:(id)arg3 progressBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (void)_stopPlayWithNewAIComposing:(id /* block */)arg1;
- (void)composeServerAITemplate:(id)arg1 taskResult:(id)arg2 musicInfo:(id)arg3 bgmInfo:(id)arg4 tracksCreationProgress:(BOOL)arg5 progressBlock:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)_changeTemplateWithNewAIComposing:(id)arg1 musicID:(id)arg2 progressBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (BOOL)isChangingTemplate:(id)arg1;
- (void)changeMusicInfo:(id)arg1 progressBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_changeMusicInfoWithNewAIComposing:(id)arg1 progressBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (BOOL)isChangingMusic:(id)arg1;
- (id)localReplacementErrorWithUnderlyingError:(id)arg1;
- (id)copyLocalReplacementMovieOptions:(id)arg1;
- (BOOL)isLocalReplacementGenerationIDCurrent:(id)arg1;
- (id)localReplacementSnapshotWithExpectedTemplateID:(id)arg1 expectedMusicID:(id)arg2 error:(id *)arg3;
- (id)validateLocalReplacementSession:(id)arg1 snapshot:(id)arg2 expectedMovieOptions:(id)arg3 expectedAssetList:(id)arg4;
- (void)startLocalReplacementSessionWithSnapshot:(id)arg1 assetList:(id)arg2 disableMusicRecommendation:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)destroyLocalReplacementSession:(id)arg1 completion:(id /* block */)arg2;
- (void)finishLocalReplacementWithResultType:(long long)arg1 error:(id)arg2 generationID:(id)arg3 completion:(id /* block */)arg4;
- (void)markLocalReplacementFailClosedForStaleTeardownSession:(id)arg1 error:(id)arg2;
- (void)finishLocalReplacementFailClosedWithSnapshot:(id)arg1 activeSession:(id)arg2 resultError:(id)arg3 generationID:(id)arg4 completion:(id /* block */)arg5;
- (void)finishLocalReplacementTeardownFailureWithSnapshot:(id)arg1 uncertainSession:(id)arg2 candidateContext:(id)arg3 teardownError:(id)arg4 generationID:(id)arg5 completion:(id /* block */)arg6;
- (void)finishLocalReplacementRollbackFailureWithSnapshot:(id)arg1 rollbackSession:(id)arg2 candidateError:(id)arg3 rollbackError:(id)arg4 generationID:(id)arg5 completion:(id /* block */)arg6;
- (void)restoreLocalReplacementSnapshot:(id)arg1 candidateContext:(id)arg2 candidateError:(id)arg3 generationID:(id)arg4 completion:(id /* block */)arg5;
- (void)finishLocalReplacementBeforeTeardownWithSnapshot:(id)arg1 candidateContext:(id)arg2 error:(id)arg3 generationID:(id)arg4 completion:(id /* block */)arg5;
- (void)destroyStaleLocalReplacementSession:(id)arg1 candidateContext:(id)arg2;
- (void)destroyLocalReplacementSession:(id)arg1 beforeRestoringSnapshot:(id)arg2 candidateContext:(id)arg3 candidateError:(id)arg4 generationID:(id)arg5 completion:(id /* block */)arg6;
- (void)commitLocalReplacementCandidateSession:(id)arg1 snapshot:(id)arg2 candidateContext:(id)arg3 generationID:(id)arg4 completion:(id /* block */)arg5;
- (void)startLocalReplacementCandidateWithSnapshot:(id)arg1 candidateContext:(id)arg2 generationID:(id)arg3 completion:(id /* block */)arg4;
- (void)teardownLocalReplacementOriginalSessionWithSnapshot:(id)arg1 candidateContext:(id)arg2 generationID:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)regenerateLocalSessionWithOrderedCandidateAssetInfoList:(id)arg1 expectedTemplateID:(id)arg2 expectedMusicID:(id)arg3 generationID:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)canStartAssetClipping;
- (BOOL)startAssetClippingWithCompletionBlock:(id /* block */)arg1;
- (BOOL)canStopAssetClipping;
- (BOOL)stopAssetClippingWithCompletionBlock:(id /* block */)arg1;
- (id)getAllAssetClipSegment;
- (BOOL)canSeekAssetSegment;
- (id)seekAssetSegmentWithId:(id)arg1 toTimeInClip:(struct)arg2;
- (void)fetchExtRecommendMusicsFromTemplateIdIfNeeded:(id)arg1;
- (void)_fetchExtRecommendMusicsWithNewAIComposing:(id)arg1;
- (void)_applyMovieOptionsWithNewAIComposing;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)dataProxy;
- (void)setDataProxy:(id)arg1;
- (id)postReportSession;
- (void)setPostReportSession:(id)arg1;
- (id)exportSettingsLoader;
- (void)setExportSettingsLoader:(id)arg1;
- (id)initialTemplateID;
- (id)initialMusicID;
- (id)initialFeedMusicID;
- (id)initialAIModelType;
- (BOOL)delaysCreation;
- (BOOL)shouldStartCreationAfterPresented;
- (void)setShouldStartCreationAfterPresented:(BOOL)arg1;
- (long long)delayCreationState;
- (void)setDelayCreationState:(long long)arg1;
- (id)changingTemplate;
- (void)setChangingTemplate:(id)arg1;
- (id)changingMusic;
- (void)setChangingMusic:(id)arg1;
- (id)currentRenderingTemplateInfo;
- (void)setCurrentRenderingTemplateInfo:(id)arg1;
- (BOOL)isStartAssetClipping;
- (void)setIsStartAssetClipping:(BOOL)arg1;
- (BOOL)isStopAssetClipping;
- (void)setIsStopAssetClipping:(BOOL)arg1;
- (BOOL)shouldShowNewBGMPanel;
- (BOOL)canRecreateWhileLoading;
- (BOOL)fetchExtRecommendMusicEnabled;
- (void)setFetchExtRecommendMusicEnabled:(BOOL)arg1;
- (BOOL)isLocalReplacementInProgress;
- (void)setIsLocalReplacementInProgress:(BOOL)arg1;
- (BOOL)hasLocalReplacementRollbackFailure;
- (void)setHasLocalReplacementRollbackFailure:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sessionAssistant;
- (void)setSessionAssistant:(id)arg1;
- (id)localReplacementGenerationID;
- (void)setLocalReplacementGenerationID:(id)arg1;
- (BOOL)isLocalReplacementCleanupRequested;
- (void)setIsLocalReplacementCleanupRequested:(BOOL)arg1;
- (id /* block */)pendingLocalReplacementCleanupCompletion;
- (void)setPendingLocalReplacementCleanupCompletion:(id /* block */)arg1;
- (id)localReplacementSessionPendingCleanup;
- (void)setLocalReplacementSessionPendingCleanup:(id)arg1;
- (id)localReplacementCandidateContextPendingCleanup;
- (void)setLocalReplacementCandidateContextPendingCleanup:(id)arg1;
- (id /* block */)localReplacementCompletion;
- (void)setLocalReplacementCompletion:(id /* block */)arg1;
- (BOOL)localReplacementPreservesNoMusic;
- (void)setLocalReplacementPreservesNoMusic:(BOOL)arg1;
- (id)finderReportSession;
- (void)setFinderReportSession:(id)arg1;
- (id)dataManager;
- (void)setDataManager:(id)arg1;
- (id)flavors;
- (void)setFlavors:(id)arg1;
- (BOOL)isStartingPlayingVideo;
- (void)setIsStartingPlayingVideo:(BOOL)arg1;
- (BOOL)isStoppingPlayingVideo;
- (void)setIsStoppingPlayingVideo:(BOOL)arg1;
- (id)serverAIBeatTemplateResult;
- (void)setServerAIBeatTemplateResult:(id)arg1;
- (id)serverAIMusicInfoList;
- (void)setServerAIMusicInfoList:(id)arg1;
- (id)serverAIRecommendMusicSIDSet;
- (void)setServerAIRecommendMusicSIDSet:(id)arg1;
- (id)serverAIComposingTask;
- (void)setServerAIComposingTask:(id)arg1;
- (id)serverAIComposingMaterialUploader;
- (void)setServerAIComposingMaterialUploader:(id)arg1;
- (id)serverAIComposingComposer;
- (void)setServerAIComposingComposer:(id)arg1;
- (id)serverAITaskGenerationID;
- (void)setServerAITaskGenerationID:(id)arg1;
- (id)serverAIReportTaskID;
- (void)setServerAIReportTaskID:(id)arg1;
- (unsigned long long)serverAIReportServerStartTimeMs;
- (void)setServerAIReportServerStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)serverAIReportServerTimeConsuming;
- (void)setServerAIReportServerTimeConsuming:(unsigned long long)arg1;
- (unsigned long long)serverAIReportClientRenderStartTimeMs;
- (void)setServerAIReportClientRenderStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)serverAIReportClientRenderTimeConsuming;
- (void)setServerAIReportClientRenderTimeConsuming:(unsigned long long)arg1;
- (unsigned long long)serverAIReportClientRenderRet;
- (void)setServerAIReportClientRenderRet:(unsigned long long)arg1;
- (id)serverAIReportRecommendationAnalytics;
- (void)setServerAIReportRecommendationAnalytics:(id)arg1;
- (BOOL)replacementInputAssetsCommitted;
- (void)setReplacementInputAssetsCommitted:(BOOL)arg1;
- (id)sessionAssistantServerAI;
- (void)setSessionAssistantServerAI:(id)arg1;
- (id)pendingSessionAssistantServerAI;
- (void)setPendingSessionAssistantServerAI:(id)arg1;
- (unsigned long long)serverAIComposingPlaybackRequestID;
- (void)setServerAIComposingPlaybackRequestID:(unsigned long long)arg1;
- (id)templateRecommendDebugText;
- (void)setTemplateRecommendDebugText:(id)arg1;
- (void).cxx_destruct;
@end
