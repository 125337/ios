@interface WCVideoProducerViewModel : NSObject <WCAudioModuleProxyDelegate>
{
    id /* block */ _templateComparatorBlock; // +0x8
    UIImage * _firstAssetThumbImage; // +0x10
    BOOL _delaysCreation; // +0x18
    BOOL _shouldStartCreationAfterPresented; // +0x19
    BOOL _isStartAssetClipping; // +0x1a
    BOOL _isStopAssetClipping; // +0x1b
    BOOL _shouldShowNewBGMPanel; // +0x1c
    BOOL _canRecreateWhileLoading; // +0x1d
    BOOL _fetchExtRecommendMusicEnabled; // +0x1e
    BOOL _isStartingPlayingVideo; // +0x1f
    BOOL _isStoppingPlayingVideo; // +0x20
    WCVideoProducerOptions * _options; // +0x28
    id <WCVideoProducerDataProxy> _dataProxy; // +0x30
    WCMomentsPostReportSession * _postReportSession; // +0x38
    WCVideoProducerExportSettingsLoader * _exportSettingsLoader; // +0x40
    NSString * _initialTemplateID; // +0x48
    NSString * _initialMusicID; // +0x50
    NSString * _initialFeedMusicID; // +0x58
    NSString * _initialAIModelType; // +0x60
    long long _delayCreationState; // +0x68
    MJVideoTemplate * _changingTemplate; // +0x70
    OMJMusicInfo * _changingMusic; // +0x78
    OMJMusicInfo * _currentRenderingMusicInfo; // +0x80
    OMJTemplateInfo * _currentRenderingTemplateInfo; // +0x88
    id <WCVideoProducerViewModelDelegate> _delegate; // +0x90
    WCVideoProducerDataManager * _dataManager; // +0x98
    WCVideoProducerFlavors * _flavors; // +0xa0
    MJTemplateMovieSession * _sessionAssistant; // +0xa8
}
- (id)initWithAssetInfoList:(id)arg1 options:(id)arg2;
- (id)initWithAssetInfoList:(id)arg1 options:(id)arg2 postReportSession:(id)arg3;
- (void)dealloc;
- (void)_initData;
- (void)_initInitialTemplateMetadata;
- (id)findTemplateForID:(id)arg1;
- (void)filterLocalResourceWithCompleteBlock:(id /* block */)arg1;
- (void)prepareWithStartupBlock:(id /* block */)arg1;
- (void)createVideoWithCompleteBlock:(id /* block */)arg1 updateBlock:(id /* block */)arg2 progressBlock:(id /* block */)arg3;
- (void)loadMoreRecommendTemplatesWithCompletionBlock:(id /* block */)arg1;
- (void)exportTemplate:(id)arg1 atIndex:(long long)arg2 withProgressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)cleanUpWithCompletionBlock:(id /* block */)arg1;
- (void)startPlayWithCompletionBlock:(id /* block */)arg1;
- (void)startPlayingSegmentWithId:(id)arg1 forTimeRange:(struct)arg2 completion:(id /* block */)arg3;
- (void)stopPlayWithCompletionBlock:(id /* block */)arg1;
- (BOOL)isPlayingVideo;
- (void)changeTemplateWithTemplate:(id)arg1 musicID:(id)arg2 progressBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (BOOL)isChangingTemplate:(id)arg1;
- (void)changeMusicInfo:(id)arg1 progressBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (BOOL)isChangingMusic:(id)arg1;
- (BOOL)canStartAssetClipping;
- (BOOL)startAssetClippingWithCompletionBlock:(id /* block */)arg1;
- (BOOL)canStopAssetClipping;
- (BOOL)stopAssetClippingWithCompletionBlock:(id /* block */)arg1;
- (id)getAllAssetClipSegment;
- (BOOL)canSeekAssetSegment;
- (id)seekAssetSegmentWithId:(id)arg1 toTimeInClip:(struct)arg2;
- (void)fetchExtRecommendMusicsFromTemplateIdIfNeeded:(id)arg1;
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
- (void)_prepareMovieOptions:(id)arg1 forTemplateWithId:(id)arg2;
- (void)_applyMovieOptions;
- (void)_preloadTemplatesStartWithId:(id)arg1;
- (void)_preloadMusicsStartWithId:(id)arg1;
- (void)_loadExportSettingsWithVideoTemplate:(id)arg1 withProgressBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)onAudioModuleAbilityChanged:(BOOL)arg1;
- (id)sessionKey;
- (id)previewThumbImage;
- (double)previewRenderRatio;
- (id)previewRenderView;
- (id)currentTemplateInfo;
- (id)currentMusicInfo;
- (struct)renderingVideoDuration;
- (id)actionRecorder;
- (id)_maasSession;
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
- (id)currentRenderingMusicInfo;
- (void)setCurrentRenderingMusicInfo:(id)arg1;
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
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataManager;
- (void)setDataManager:(id)arg1;
- (id)flavors;
- (void)setFlavors:(id)arg1;
- (id)sessionAssistant;
- (void)setSessionAssistant:(id)arg1;
- (BOOL)isStartingPlayingVideo;
- (void)setIsStartingPlayingVideo:(BOOL)arg1;
- (BOOL)isStoppingPlayingVideo;
- (void)setIsStoppingPlayingVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end
