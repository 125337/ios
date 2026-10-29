@interface MJComposingCreationCamPreviewSession : NSObject <MMLiteAppHalfScreenStatusChangeListener>
{
    BOOL _fancyTextEnabled; // +0x8
    BOOL _templateSettingEnabled; // +0x9
    BOOL _finished; // +0xa
    BOOL _playbackResumeSuppressedByApplicationLifecycle; // +0xb
    BOOL _canonicalWritebackPending; // +0xc
    BOOL _canonicalWritebackInFlight; // +0xd
    BOOL _canonicalNeedsPackaging; // +0xe
    BOOL _reeditHandoffInProgress; // +0xf
    unsigned int _sourceLiteAppUUID; // +0x10
    MJMovieComposingReeditParams * _reeditEntryParams; // +0x18
    MJComposingCreationCamParams * _params; // +0x20
    OMJRenderView * _renderView; // +0x28
    MJPlaybackViewModel * _playbackViewModel; // +0x30
    MJComposingCreationCamPreviewSession * _retainedSelf; // +0x38
    MJComposingCreationCamPreviewController * _previewVC; // +0x40
    id /* block */ _resolveBlock; // +0x48
    NSString * _currentUploadTaskId; // +0x50
    NSString * _currentZipPath; // +0x58
    NSString * _templateId; // +0x60
    MJMovieComposingSession * _movieComposingSession; // +0x68
    OMCComposingSession * _composingSession; // +0x70
    OMCExportSession * _exportSession; // +0x78
    NSArray * _originAssetInfos; // +0x80
    NSArray * _aigcAssetInfos; // +0x88
    UIViewController * _reeditFromViewController; // +0x90
    long long _previousEnterScene; // +0x98
    UIViewController * _creationPageViewController; // +0xa0
    MMLiteAppViewController * _sourceLiteAppViewController; // +0xa8
    NSString * _sourceLiteAppID; // +0xb0
    NSString * _currentCanonicalJSONPath; // +0xb8
    NSString * _liteAppSourceCanonicalJSONReference; // +0xc0
    NSString * _liteAppSourceCanonicalJSONPath; // +0xc8
    NSString * _canonicalSessionRoot; // +0xd0
    unsigned long long _canonicalWritebackQueuedCount; // +0xd8
    NSError * _canonicalWritebackLastError; // +0xe0
    NSMutableArray * _canonicalWritebackWaiters; // +0xe8
    NSString * _reeditWorkspaceRoot; // +0xf0
    NSString * _reeditSourceZipPath; // +0xf8
    NSString * _reeditUnpackedRoot; // +0x100
    NSString * _reeditOutputZipPath; // +0x108
    NSString * _localRegisteredTemplateID; // +0x110
    unsigned long long _localRegisteredTemplateVersion; // +0x118
    MJComposingCreationReeditResourceRefreshTransaction * _pendingResourceRefreshTransaction; // +0x120
    id /* block */ _pendingResourceRefreshCommitBlock; // +0x128
    id /* block */ _pendingResourceRefreshRollbackBlock; // +0x130
}
+ (id)startWithParams:(id)arg1 fromVC:(id)arg2 resolveBlock:(id /* block */)arg3;
- (id)initInternal;
- (void)registerNotifications;
- (void)dealloc;
- (void)cleanupFinishState;
- (void)finishPendingResourceRefreshForDownstreamError:(id)arg1 completion:(id /* block */)arg2;
- (id)timeline;
- (void)fancyTextTimelineChangeDidFinalize;
- (id)resolvedCurrentCanonicalJSONPathWithError:(id *)arg1;
- (void)synchronizeCanonicalJSONIfNeededWithCompletion:(id /* block */)arg1;
- (void)startNextCanonicalJSONWritebackIfNeeded;
- (id)applyCanonicalJSONExportAtPath:(id)arg1 sourceCanonicalJSONPath:(id)arg2;
- (void)finishCanonicalWritebackWaitersIfNeeded;
- (BOOL)publishCanonicalJSONPathToSourceLiteApp:(id)arg1 error:(id *)arg2;
- (id)reeditDismissTargetViewController;
- (id)resolvedReeditHostViewController;
- (id)resolvedReeditTemplateName;
- (unsigned long long)resolvedCamTemplateDescVersion;
- (void)applyTemplateReeditResultWithEntryParams:(id)arg1 resourceRefreshTransaction:(id)arg2 completion:(id /* block */)arg3;
- (void)finishWithCancel:(BOOL)arg1;
- (void)finishWithReedit;
- (id)reeditEntryParamsWithTemplateURL:(id)arg1 templateDescFileMD5:(id)arg2 dirty:(BOOL)arg3;
- (void)dismissReeditPresentationForHandoffWithCompletion:(id /* block */)arg1;
- (void)finishSuccessfulReeditHandoff;
- (void)handoffReeditEntryParams:(id)arg1 resourceRefreshTransaction:(id)arg2 completion:(id /* block */)arg3;
- (void)uploadDirtyReeditPackageWithCompletion:(id /* block */)arg1;
- (void)completeTemplateReeditWithCompletion:(id /* block */)arg1;
- (void)continueTemplateReeditWithCompletion:(id /* block */)arg1;
- (void)openLiteAppEditPageWithCompletion:(id /* block */)arg1;
- (void)openLiteAppEditPageAfterCanonicalWithCompletion:(id /* block */)arg1;
- (void)openTemplatePublishSettingWithCompletion:(id /* block */)arg1;
- (void)onHeightChanged:(int)arg1 withBaseHeight:(int)arg2;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 extraData:(id)arg4;
- (void)preparePreviewWithCompletion:(id /* block */)arg1;
- (void)prepareCreationPreviewWithCompletion:(id /* block */)arg1;
- (void)prepareReeditPreviewWithCompletion:(id /* block */)arg1;
- (void)prepareReeditResourceAndRegisterWithNextStep:(id /* block */)arg1;
- (void)registerOrRefreshReeditTemplateWithTemplateId:(id)arg1 zipPath:(id)arg2 nextStep:(id /* block */)arg3;
- (void)registerTemplateWithTemplateId:(id)arg1 zipPath:(id)arg2 nextStep:(id /* block */)arg3;
- (void)resolveTemplateJsonWithCompletion:(id /* block */)arg1;
- (void)prepareCreationResourceWithTemplateJsonFullFilePath:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareCreationResourceAndRegisterWithTemplateJsonFullFilePath:(id)arg1 nextStep:(id /* block */)arg2;
- (void)prepareCreationResourceAndRefreshWithTemplateJsonFullFilePath:(id)arg1 nextStep:(id /* block */)arg2;
- (void)startMaasSessionWithCompletion:(id /* block */)arg1;
- (void)ensureTemplateLoadedBeforeStartingWithCompletion:(id /* block */)arg1;
- (void)doStartMaasSessionWithCompletion:(id /* block */)arg1;
- (void)prepareTimelineResourcesAndCreateTimeline:(id /* block */)arg1;
- (void)createTimelineWithCompletion:(id /* block */)arg1;
- (void)continueCreateTimelineWithAssetLocalPaths:(id)arg1 downloadDirectory:(id)arg2 completion:(id /* block */)arg3;
- (void)buildTimelineAssetsWithOriginLocalPaths:(id)arg1 effectLocalPaths:(id)arg2 completion:(id /* block */)arg3;
- (void)doCreateTimelineWithOriginAssets:(id)arg1 aigcAssets:(id)arg2 completion:(id /* block */)arg3;
- (void)uploadResourceAndPublishWithCompletion:(id /* block */)arg1;
- (void)uploadResourceAndPublishWithTrunkCanonicalWithCompletion:(id /* block */)arg1;
- (void)uploadResourceAndPublishAfterCanonicalWithCompletion:(id /* block */)arg1;
- (void)uploadResourceAndPublishWithTemplateJsonFullFilePath:(id)arg1 completion:(id /* block */)arg2;
- (id)_generateAIGCMetadata;
- (void)exportVideoWithProgressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)teardownTimeline;
- (void)rebuildTimelineWithCompletion:(id /* block */)arg1;
- (void)setupAndStartPlaybackWithCompletion:(id /* block */)arg1;
- (void)stopPlayback;
- (void)stopPlaybackForApplicationLifecycle;
- (void)resumePlayback;
- (void)resumePlaybackForUserAction;
- (void)onMusicPanelDidOpen:(id)arg1;
- (void)onMusicPanelDidClose:(id)arg1;
- (void)teardownPlayback;
- (void)handleTimelineRecreation;
- (void)recreateTimelineAfterEditWithCompletion:(id /* block */)arg1;
- (void)recreateCreationTimelineAfterEditWithCompletion:(id /* block */)arg1;
- (void)recreateReeditTimelineAfterEditWithCompletion:(id /* block */)arg1;
- (id)_omjMusicInfoFromParams;
- (id)reeditEntryParams;
- (id)params;
- (void)setParams:(id)arg1;
- (BOOL)fancyTextEnabled;
- (void)setFancyTextEnabled:(BOOL)arg1;
- (BOOL)templateSettingEnabled;
- (void)setTemplateSettingEnabled:(BOOL)arg1;
- (BOOL)isFinished;
- (void)setFinished:(BOOL)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (id)playbackViewModel;
- (void)setPlaybackViewModel:(id)arg1;
- (id)retainedSelf;
- (void)setRetainedSelf:(id)arg1;
- (id)previewVC;
- (void)setPreviewVC:(id)arg1;
- (id /* block */)resolveBlock;
- (void)setResolveBlock:(id /* block */)arg1;
- (id)currentUploadTaskId;
- (void)setCurrentUploadTaskId:(id)arg1;
- (id)currentZipPath;
- (void)setCurrentZipPath:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)movieComposingSession;
- (void)setMovieComposingSession:(id)arg1;
- (id)composingSession;
- (void)setComposingSession:(id)arg1;
- (id)exportSession;
- (void)setExportSession:(id)arg1;
- (BOOL)playbackResumeSuppressedByApplicationLifecycle;
- (void)setPlaybackResumeSuppressedByApplicationLifecycle:(BOOL)arg1;
- (id)originAssetInfos;
- (void)setOriginAssetInfos:(id)arg1;
- (id)aigcAssetInfos;
- (void)setAigcAssetInfos:(id)arg1;
- (id)reeditFromViewController;
- (void)setReeditFromViewController:(id)arg1;
- (long long)previousEnterScene;
- (void)setPreviousEnterScene:(long long)arg1;
- (id)creationPageViewController;
- (void)setCreationPageViewController:(id)arg1;
- (id)sourceLiteAppViewController;
- (void)setSourceLiteAppViewController:(id)arg1;
- (id)sourceLiteAppID;
- (void)setSourceLiteAppID:(id)arg1;
- (unsigned int)sourceLiteAppUUID;
- (void)setSourceLiteAppUUID:(unsigned int)arg1;
- (id)currentCanonicalJSONPath;
- (void)setCurrentCanonicalJSONPath:(id)arg1;
- (id)liteAppSourceCanonicalJSONReference;
- (void)setLiteAppSourceCanonicalJSONReference:(id)arg1;
- (id)liteAppSourceCanonicalJSONPath;
- (void)setLiteAppSourceCanonicalJSONPath:(id)arg1;
- (id)canonicalSessionRoot;
- (void)setCanonicalSessionRoot:(id)arg1;
- (BOOL)canonicalWritebackPending;
- (void)setCanonicalWritebackPending:(BOOL)arg1;
- (unsigned long long)canonicalWritebackQueuedCount;
- (void)setCanonicalWritebackQueuedCount:(unsigned long long)arg1;
- (BOOL)canonicalWritebackInFlight;
- (void)setCanonicalWritebackInFlight:(BOOL)arg1;
- (id)canonicalWritebackLastError;
- (void)setCanonicalWritebackLastError:(id)arg1;
- (id)canonicalWritebackWaiters;
- (void)setCanonicalWritebackWaiters:(id)arg1;
- (BOOL)canonicalNeedsPackaging;
- (void)setCanonicalNeedsPackaging:(BOOL)arg1;
- (id)reeditWorkspaceRoot;
- (void)setReeditWorkspaceRoot:(id)arg1;
- (id)reeditSourceZipPath;
- (void)setReeditSourceZipPath:(id)arg1;
- (id)reeditUnpackedRoot;
- (void)setReeditUnpackedRoot:(id)arg1;
- (id)reeditOutputZipPath;
- (void)setReeditOutputZipPath:(id)arg1;
- (id)localRegisteredTemplateID;
- (void)setLocalRegisteredTemplateID:(id)arg1;
- (unsigned long long)localRegisteredTemplateVersion;
- (void)setLocalRegisteredTemplateVersion:(unsigned long long)arg1;
- (BOOL)reeditHandoffInProgress;
- (void)setReeditHandoffInProgress:(BOOL)arg1;
- (id)pendingResourceRefreshTransaction;
- (void)setPendingResourceRefreshTransaction:(id)arg1;
- (id /* block */)pendingResourceRefreshCommitBlock;
- (void)setPendingResourceRefreshCommitBlock:(id /* block */)arg1;
- (id /* block */)pendingResourceRefreshRollbackBlock;
- (void)setPendingResourceRefreshRollbackBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
