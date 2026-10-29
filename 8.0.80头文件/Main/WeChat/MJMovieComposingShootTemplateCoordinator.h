@interface MJMovieComposingShootTemplateCoordinator : NSObject <OMJCamoSessionDelegate>
{
    BOOL _hasEditingBeforeEnteringPreview; // +0x8
    BOOL _shouldRestoreOriginalAssetOnExit; // +0x9
    BOOL _shouldExportOnExit; // +0xa
    BOOL _wasPlayingBeforeSwitch; // +0xb
    BOOL _hasAppliedNonEmptyTemplate; // +0xc
    BOOL _isExportingEffectVideo; // +0xd
    long long _state; // +0x10
    NSString * _currentEffectOutputFilePath; // +0x18
    MJMovieComposingShootTemplatePreviewViewModel * _templatePanelViewModel; // +0x20
    MJTemplateCamoSession * _camoSession; // +0x28
    MMCameraTemplateItem * _initialSelectedTemplateItem; // +0x30
    MJCamCommonResourcesQuery * _commonResourcesQuery; // +0x38
    MJMovieComposingViewController * _hostViewController; // +0x40
    NSString * _operationID; // +0x48
    NSString * _applyToken; // +0x50
    MJMovieComposingPendingTemplateState * _pendingTemplateState; // +0x58
    NSArray * _recordedAssetInfos; // +0x60
    MMCameraTemplateItem * _templateItemToRestoreAfterDetail; // +0x68
    struct _resumeTime; // +0x70
}
- (id)initWithViewController:(id)arg1;
- (void)prepareEnterShootTemplatePreviewModeWithCompletion:(id /* block */)arg1;
- (void)continueEnterShootTemplatePreviewModeWithCompletion:(id /* block */)arg1;
- (void)handleManualTemplateTap:(id)arg1;
- (BOOL)automaticallyApplyFollowTemplateItem:(id)arg1 completion:(id /* block */)arg2;
- (void)applyTemplateItem:(id)arg1 completion:(id /* block */)arg2;
- (void)applyTemplateItem:(id)arg1 shouldAffectExitResult:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)hasPendingTemplateApplication;
- (void)clearPendingTemplateApplication;
- (void)invalidateTemplateApplications;
- (void)applyPendingTemplateAfterItem:(id)arg1 succeeded:(BOOL)arg2 shouldAffectExitResult:(BOOL)arg3;
- (void)applyPendingTemplateIfReady;
- (void)startApplyingTemplateItem:(id)arg1 shouldAffectExitResult:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)hasShootTemplateSelectionChanged;
- (BOOL)hasShootTemplateResourceChanged;
- (void)cancelShootTemplatePreviewModeWithCompletion:(id /* block */)arg1;
- (void)exitShootTemplatePreviewModeWithCompletion:(id /* block */)arg1;
- (void)cancelCurrentOperationIfNeeded;
- (BOOL)interruptExportForApplicationWillResignActive;
- (void)teardownCamoSessionForDetailWithCompletion:(id /* block */)arg1;
- (void)rebuildCamoSessionAfterDetailWithCompletion:(id /* block */)arg1;
- (void)handleCamoSessionStartedForRebuildWithOperationID:(id)arg1 error:(id)arg2 itemToRestore:(id)arg3 completion:(id /* block */)arg4;
- (void)handleDefaultTemplatePreparedForRebuildWithOperationID:(id)arg1 error:(id)arg2 itemToRestore:(id)arg3 completion:(id /* block */)arg4;
- (void)stopPlaybackForEnterWithHost:(id)arg1 operationID:(id)arg2 completion:(id /* block */)arg3;
- (void)closeAndUnbindPlaybackForEnterWithHost:(id)arg1 operationID:(id)arg2 completion:(id /* block */)arg3;
- (void)continueEnterShootTemplateAfterPlaybackClosedWithOperationID:(id)arg1 completion:(id /* block */)arg2;
- (void)handleMovieSessionTeardownForEnterWithOperationID:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)handleCamoSessionStartedForEnterWithOperationID:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)handleDefaultTemplatePreparedForEnterWithOperationID:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)recoverMovieSessionAfterEnterFailureWithOperationID:(id)arg1 code:(long long)arg2 fallbackDescription:(id)arg3 sourceError:(id)arg4 completion:(id /* block */)arg5;
- (void)camoSession:(id)arg1 didPresentFirstFrameAfterSwitchTemplate:(id)arg2;
- (void)teardownMovieSessionWithOperationID:(id)arg1 completion:(id /* block */)arg2;
- (void)startCamoSessionWithOperationID:(id)arg1 completion:(id /* block */)arg2;
- (void)exportShootTemplateAndDestroyCamoWithOperationID:(id)arg1 completion:(id /* block */)arg2;
- (void)destroyCamoSessionWithCompletion:(id /* block */)arg1;
- (void)startupMovieSessionWithOperationID:(id)arg1 completion:(id /* block */)arg2;
- (id)prepareTemplatePanelViewModelIfNeeded;
- (void)ensureTemplateLoaded:(id)arg1 requestID:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareDefaultEmptyTemplatePreviewWithOperationID:(id)arg1 completion:(id /* block */)arg2;
- (void)clearTemplateWithApplyToken:(id)arg1 shouldAffectExitResult:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)beginUseTemplateItem:(id)arg1 applyToken:(id)arg2 shouldAffectExitResult:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)performTemplateUpdateWithApplyToken:(id)arg1 updateBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)pausePreviewingWithApplyToken:(id)arg1 templateItem:(id)arg2 shouldAffectExitResult:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)beginUseAssetInputWithApplyToken:(id)arg1 templateItem:(id)arg2 shouldAffectExitResult:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)assetInfosForTemplateItem:(id)arg1;
- (id)timelineConfigForTemplateItem:(id)arg1 assetInfos:(id)arg2;
- (BOOL)templateItemSupportsMultiMaterial:(id)arg1;
- (struct)timelineDurationForAssetInfo:(id)arg1;
- (BOOL)isValidTimelineDuration:(struct)arg1;
- (BOOL)isTemplateItem:(id)arg1 sameSelectionAs:(id)arg2;
- (BOOL)isTemplateItem:(id)arg1 sameResourceAs:(id)arg2;
- (void)cachePlaybackState;
- (id)buildCamPreviewSettings;
- (id)buildRecordingSettings;
- (id)createEffectOutputFilePath;
- (void)reopenPlaybackWithHost:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isValidOperation:(id)arg1 expectedState:(long long)arg2;
- (BOOL)isValidApplyToken:(id)arg1;
- (void)transitionToState:(long long)arg1 reason:(id)arg2;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (id)errorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 cleanupError:(id)arg4 recoveryError:(id)arg5;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)currentEffectOutputFilePath;
- (void)setCurrentEffectOutputFilePath:(id)arg1;
- (id)templatePanelViewModel;
- (void)setTemplatePanelViewModel:(id)arg1;
- (id)camoSession;
- (void)setCamoSession:(id)arg1;
- (id)initialSelectedTemplateItem;
- (void)setInitialSelectedTemplateItem:(id)arg1;
- (BOOL)hasEditingBeforeEnteringPreview;
- (void)setHasEditingBeforeEnteringPreview:(BOOL)arg1;
- (BOOL)shouldRestoreOriginalAssetOnExit;
- (void)setShouldRestoreOriginalAssetOnExit:(BOOL)arg1;
- (BOOL)shouldExportOnExit;
- (void)setShouldExportOnExit:(BOOL)arg1;
- (id)commonResourcesQuery;
- (void)setCommonResourcesQuery:(id)arg1;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (id)operationID;
- (void)setOperationID:(id)arg1;
- (id)applyToken;
- (void)setApplyToken:(id)arg1;
- (id)pendingTemplateState;
- (void)setPendingTemplateState:(id)arg1;
- (id)recordedAssetInfos;
- (void)setRecordedAssetInfos:(id)arg1;
- (id)templateItemToRestoreAfterDetail;
- (void)setTemplateItemToRestoreAfterDetail:(id)arg1;
- (struct)resumeTime;
- (void)setResumeTime:(struct)arg1;
- (BOOL)wasPlayingBeforeSwitch;
- (void)setWasPlayingBeforeSwitch:(BOOL)arg1;
- (BOOL)hasAppliedNonEmptyTemplate;
- (void)setHasAppliedNonEmptyTemplate:(BOOL)arg1;
- (BOOL)isExportingEffectVideo;
- (void)setIsExportingEffectVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end
