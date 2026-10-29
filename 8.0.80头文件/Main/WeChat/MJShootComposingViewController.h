@interface MJShootComposingViewController : MMUIViewController <MJShootComposingViewDelegate, MJShootComposingViewControllerReeditProtocol, MJShootPreviewViewControllerDelegate, MJShootSimplePreviewViewControllerDelegate>
{
    BOOL _isLandscapeEnabled; // +0x70
    BOOL _isEditing; // +0x71
    BOOL _isDuoInterfaceOrientationLockRequested; // +0x72
    unsigned long long _shortVideoToolbarUIStyle; // +0x78
    FinderVideoTemplateInfo * _templateInfo; // +0x80
    unsigned long long _finderEventId; // +0x88
    NSString * _shortURLForPreviewingTemplate; // +0x90
    MJShootComposingView * _composingView; // +0x98
    id /* block */ _startEditingAction; // +0xa0
    id /* block */ _endEditingAction; // +0xa8
    unsigned long long _authScene; // +0xb0
    NSMutableArray * _wxToMaasMusicIds; // +0xb8
    id <MJShootComposingViewControllerDelegate> _delegate; // +0xc0
    MJShootComposingViewModel * _viewModel; // +0xc8
    MJSCPickerEditingMediator * _pickerEdtingMediator; // +0xd0
    MMTipsViewController * _draftTipsVC; // +0xd8
    MJPublisherPickerComposingButtonManager * _pickerComposingButtonManager; // +0xe0
    MMShortVideoParamModel * _reportModel; // +0xe8
    unsigned long long _enterTime; // +0xf0
    NSString * _traceId; // +0xf8
    MMImagePickerManagerOptionObj * _optionObj; // +0x100
    UIViewController<MJShootPreviewViewControllerProtocol> * _previewViewController; // +0x108
    MJMovieComposingReeditCoordinator * _templateReeditCoordinator; // +0x110
}
- (void)handleCloseActionInShootComposingView:(id)arg1;
- (void)didFinishPickingAssetWithDataItem:(id)arg1;
- (void)shootComposingView:(id)arg1 didFinishCapturePhotoForRedPacketWithResultMedieType:(long long)arg2;
- (void)didEnableAIGCAsyncGenerationInShootComposingView:(id)arg1;
- (void)shootComposingView:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(BOOL)arg4 editImageAttr:(id)arg5;
- (void)shootComposingView:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingView:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)shootComposingView:(id)arg1 didFinishUploadRedPacketCDNWithResponseInfo:(id)arg2;
- (void)shootComposingView:(id)arg1 onPickedAssetAIGCRequestConditionNotMet:(id)arg2;
- (void)shootComposingView:(id)arg1 didTapTemplateItemEntry:(id)arg2;
- (void)onStartRecord;
- (void)onStartEditing;
- (void)onEndEditing;
- (void)onCancelEditing;
- (void)onStartExportingWithAssetId:(id)arg1;
- (void)onEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onShortVideoShootBtnClicked:(BOOL)arg1;
- (void)didClickAlbumPickerEntryForMovieInView:(id)arg1;
- (void)didClickAlbumPickerEntryForShootInView:(id)arg1;
- (void)didClickAlbumPickerEntryForShootBGInView:(id)arg1;
- (void)didClickAlbumPickerEntryForLocalBGMInView:(id)arg1;
- (void)prepareInteractedVideoPickerShowingForLocalBGMInView:(id)arg1 completion:(id /* block */)arg2;
- (void)didDismissInteractedVideoPickerForLocalBGMInView:(id)arg1;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostSession:(id)arg1;
- (void)onWCEditVideoViewControllerDraftWithPostSession:(id)arg1;
- (void)_handleShortVideoWithPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)_closeAfterTakenVideo;
- (void)initRotation;
- (long long)_safeGetCurrentDeviceOrientation;
- (long long)currentEnterSceneForTemplateReedit;
- (long long)currentSourceEnterSceneForTemplateReedit;
- (void)applyTemplateReeditEnterScene:(long long)arg1 sourceEnterScene:(long long)arg2;
- (void)openTemplateReeditCreationPageWithEntryParams:(id)arg1;
- (void)applyTemplateReeditResultWithEntryParams:(id)arg1 resourceRefreshTransaction:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissMovieComposingForReedit:(id)arg1 completion:(id /* block */)arg2;
- (void)reopenMovieComposingForTemplateReeditWithEntryParams:(id)arg1 completion:(id /* block */)arg2;
- (id)currentPresentedMovieComposingViewController;
- (BOOL)isReadyToPresentMovieComposingForTemplateReedit;
- (void)presentMovieComposingForTemplateReeditWhenHierarchyReadyWithEntryParams:(id)arg1 delegate:(id)arg2 retryCount:(long long)arg3 completion:(id /* block */)arg4;
- (void)presentMovieComposingForTemplateReeditWithEntryParams:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 extraData:(id)arg4;
- (void)prepareLocalBGMExternalVideoPickerWithCompletion:(id /* block */)arg1;
- (void)prepareAlbumPickerShowingForMovie;
- (void)prepareAlbumPickerShowingForShoot;
- (void)prepareAlbumPickerShowingForShootBG;
- (void)prepareAlbumPickerShowingForLocalBGM;
- (void)prepareInteractedVideoPickerShowingForLocalBGMWithCompletion:(id /* block */)arg1;
- (void)finishInteractedVideoPickerForLocalBGM;
- (void)_enterMiaoJianFinderComposingPublish;
- (void)mediatorNotifyDidCancelPickerAndExitShootComposing;
- (void)mediatorNotifyDidCancelPickerFromMovieScene;
- (void)mediatorNotifyDidCancelPickerFromShootScene;
- (void)mediatorNotifyDidCancelPickerFromShootBGScene;
- (void)mediatorNotifyDidCancelPickerFromLocalBGMScene;
- (void)mediatorNotifyDidFinishPickEditingWithEditImageAttr:(id)arg1;
- (void)mediatorNotifyDidFinishPickEditingWithActionFlow:(id)arg1;
- (void)mediatorNotifyDidFinishPickEditingSightWithInfo:(id)arg1;
- (void)mediatorNotifyDidFinishPickingAssetWithPostSession:(id)arg1;
- (void)mediatorNotifyDidFinishPickMovieAssetInfos:(id)arg1 picker:(id)arg2;
- (void)mediatorNotifyDidFinishPickImageAssetInfos:(id)arg1 picker:(id)arg2;
- (void)mediatorNotifyDidFinishPickShootAssetInfos:(id)arg1 picker:(id)arg2;
- (void)_didFinishPickShootAssetInfosWrapper:(id)arg1;
- (void)_reportStartAssetsWithCount:(long long)arg1 imageCount:(long long)arg2 videoCount:(long long)arg3;
- (long long)currentCamOSTMode;
- (id)generateAIGCMetadataIfNeeded;
- (void)_didFinishPickShootAssetInfos:(id)arg1 picker:(id)arg2;
- (void)prepareAIGCImportWithAssetInfos:(id)arg1 picker:(id)arg2;
- (void)_didFinishPickShootMultiAssetInfos:(id)arg1 picker:(id)arg2;
- (void)_handleBuildResult:(id)arg1 assetInfos:(id)arg2 templateItem:(id)arg3 picker:(id)arg4;
- (id)_buildRecordingSettingsForAssetGeneration;
- (void)_fetchLivePhotoTimesForAssets:(id)arg1 slotDurations:(id)arg2 completion:(id /* block */)arg3;
- (id)_buildMJAssetInfosFrom:(id)arg1 livePhotoTimeByIDs:(id)arg2 slotDurations:(id)arg3 templateItem:(id)arg4;
- (struct)_slotDurationAtIndex:(long long)arg1 slotDurations:(id)arg2;
- (BOOL)_isValidLivePhotoForAsset:(id)arg1 slotDuration:(struct)arg2;
- (id)_selectAssetForGenerateFrom:(id)arg1;
- (void)_collectMultiAssetsMetadataIfNeeded:(id)arg1;
- (void)_handleUseAssetInputDidCompletionWithError:(id)arg1 recordingSettings:(id)arg2 picker:(id)arg3;
- (void)mediatorNotifyDidFinishPickLocalBGMAssetInfos:(id)arg1 picker:(id)arg2;
- (void)mediatorNotifyDidFinishPickShootBGAssetInfos:(id)arg1 picker:(id)arg2;
- (void)shootPreviewViewController:(id)arg1 didFinishExportWithInfo:(id)arg2;
- (void)shootPreviewViewController:(id)arg1 didFinishClipWithInfo:(id)arg2;
- (void)didEnableAIGCAsyncGenerationInShootPreviewViewController:(id)arg1;
- (void)didRecevieAIResultFromServerTimeoutInShootPreviewViewController:(id)arg1;
- (void)shootSimplePreviewViewController:(id)arg1 didFinishWithResponseInfo:(id)arg2;
- (void)shootSimplePreviewViewController:(id)arg1 didCancelWithResponseInfo:(id)arg2;
- (void)registerNotifications;
- (void)unregisterNotifications;
- (void)didFinishTemplateComposing:(id)arg1;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (void)onApplicationDidBecomeActiveNotification:(id)arg1;
- (void)onSystemApplicationDidBecomeActiveNotification:(id)arg1;
- (void)handleShootTemplatePreloadNotification:(id)arg1;
- (void)finderReportEnterPage;
- (void)finderReportLeavePage;
- (id)getReportExtInfoDismissState:(BOOL)arg1 eventCode:(long long)arg2;
- (void)handleAIGCAsyncGenerationEnabledActionWithDraftType:(unsigned long long)arg1;
- (void)onMJAIGCDraftDidSaveSucceed:(id)arg1;
- (void)onMJAIGCDraftDidSaveFailed;
- (void)uploadCoverImageToFinderCDNWithFilePath:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)requestCameraAuthorities;
- (void)requestAuthForCamera:(unsigned long long)arg1 statusForCamera:(unsigned int)arg2 statusForMicrophone:(unsigned int)arg3;
- (void)requestAuthForMicrophone:(unsigned long long)arg1 statusForCamera:(unsigned int)arg2 statusForMicrophone:(unsigned int)arg3;
- (void)onCameraAuthoritiesGranted;
- (void)onCameraAuthoritiesUngranted;
- (void)closeShootComposing;
- (void)closeShootComposingAndNotifyDelegate;
- (void)closeShootComposingWithCompletion:(id /* block */)arg1;
- (void)closeShootComposingOnCamoSessionUnstartedWithCompletion:(id /* block */)arg1;
- (void)closeShootComposingOnCamoSessionStartedWithCompletion:(id /* block */)arg1;
- (void)_postShootComposingVCDidDismissNotification;
- (void)_initParams;
- (void)_closeShootComposingReport;
- (unsigned long long)getUsedAuthScene;
- (BOOL)shouldAutorotate;
- (BOOL)prefersInterfaceOrientationLocked;
- (void)refreshDuoInterfaceOrientationLock;
- (BOOL)hidesStatusBar;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)registerYReportSdk;
- (BOOL)isLandscapeEnabled;
- (void)setIsLandscapeEnabled:(BOOL)arg1;
- (unsigned long long)shortVideoToolbarUIStyle;
- (void)setShortVideoToolbarUIStyle:(unsigned long long)arg1;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (unsigned long long)finderEventId;
- (void)setFinderEventId:(unsigned long long)arg1;
- (id)shortURLForPreviewingTemplate;
- (void)setShortURLForPreviewingTemplate:(id)arg1;
- (id)composingView;
- (void)setComposingView:(id)arg1;
- (id /* block */)startEditingAction;
- (void)setStartEditingAction:(id /* block */)arg1;
- (id /* block */)endEditingAction;
- (void)setEndEditingAction:(id /* block */)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (id)wxToMaasMusicIds;
- (void)setWxToMaasMusicIds:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (id)pickerEdtingMediator;
- (id)draftTipsVC;
- (void)setDraftTipsVC:(id)arg1;
- (id)pickerComposingButtonManager;
- (void)setPickerComposingButtonManager:(id)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (BOOL)isDuoInterfaceOrientationLockRequested;
- (void)setIsDuoInterfaceOrientationLockRequested:(BOOL)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)optionObj;
- (void)setOptionObj:(id)arg1;
- (id)previewViewController;
- (void)setPreviewViewController:(id)arg1;
- (id)templateReeditCoordinator;
- (void)setTemplateReeditCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
