@interface MJShootComposingViewController : MMUIViewController <MJShootComposingViewDelegate, MJShootPreviewViewControllerDelegate>
{
    BOOL _isLandscapeEnabled; // +0x68
    BOOL _isEditing; // +0x69
    unsigned long long _shortVideoToolbarUIStyle; // +0x70
    FinderVideoTemplateInfo * _templateInfo; // +0x78
    unsigned long long _finderEventId; // +0x80
    NSString * _shortURLForPreviewingTemplate; // +0x88
    MJShootComposingView * _composingView; // +0x90
    id /* block */ _startEditingAction; // +0x98
    id /* block */ _endEditingAction; // +0xa0
    unsigned long long _authScene; // +0xa8
    NSMutableArray * _wxToMaasMusicIds; // +0xb0
    id <MJShootComposingViewControllerDelegate> _delegate; // +0xb8
    MJShootComposingViewModel * _viewModel; // +0xc0
    MJSCPickerEditingMediator * _pickerEdtingMediator; // +0xc8
    MMTipsViewController * _draftTipsVC; // +0xd0
    MJPublisherPickerComposingButtonManager * _pickerComposingButtonManager; // +0xd8
    MMShortVideoParamModel * _reportModel; // +0xe0
    unsigned long long _enterTime; // +0xe8
    NSString * _traceId; // +0xf0
    MMImagePickerManagerOptionObj * _optionObj; // +0xf8
}
- (void)handleCloseActionInShootComposingView:(id)arg1;
- (void)didFinishPickingAssetWithDataItem:(id)arg1;
- (void)shootComposingView:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(BOOL)arg4 editImageAttr:(id)arg5;
- (void)shootComposingView:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingView:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)onStartRecord;
- (void)onStartEditing;
- (void)onEndEditing;
- (void)onCancelEditing;
- (void)onStartExportingWithAssetId:(id)arg1;
- (void)onEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onShortVideoShootBtnClicked:(BOOL)arg1;
- (void)didClickAlbumPickerEntryForMovieInView:(id)arg1;
- (void)didClickAlbumPickerEntryForShootInView:(id)arg1;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostSession:(id)arg1;
- (void)onWCEditVideoViewControllerDraftWithPostSession:(id)arg1;
- (void)_handleShortVideoWithPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)_closeAfterTakenVideo;
- (void)initRotation;
- (long long)_safeGetCurrentDeviceOrientation;
- (void)prepareAlbumPickerShowingForMovie;
- (void)prepareAlbumPickerShowingForShoot;
- (void)_enterMiaoJianFinderComposingPublish;
- (void)mediatorNotifyDidCancelPickerAndExitShootComposing;
- (void)mediatorNotifyDidCancelPickerFromMovieScene;
- (void)mediatorNotifyDidCancelPickerFromShootScene;
- (void)mediatorNotifyDidFinishPickEditingWithEditImageAttr:(id)arg1;
- (void)mediatorNotifyDidFinishPickEditingWithActionFlow:(id)arg1;
- (void)mediatorNotifyDidFinishPickEditingSightWithInfo:(id)arg1;
- (void)mediatorNotifyDidFinishPickingAssetWithPostSession:(id)arg1;
- (void)mediatorNotifyDidFinishPickMovieAssetInfos:(id)arg1 picker:(id)arg2;
- (void)mediatorNotifyDidFinishPickShootAssetInfos:(id)arg1 picker:(id)arg2;
- (void)shootPreviewViewController:(id)arg1 didFinishExportWithInfo:(id)arg2;
- (void)shootPreviewViewController:(id)arg1 didFinishClipWithInfo:(id)arg2;
- (void)didRecevieAIResultFromServerTimeoutInShootPreviewViewController:(id)arg1;
- (void)registerNotifications;
- (void)unregisterNotifications;
- (void)didFinishTemplateComposing:(id)arg1;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (void)onApplicationDidBecomeActiveNotification:(id)arg1;
- (void)finderReportEnterPage;
- (void)finderReportLeavePage;
- (id)getReportExtInfoDismissState:(BOOL)arg1 eventCode:(long long)arg2;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidPresent:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)requestCameraAuthorities;
- (void)requestAuthForCamera:(unsigned long long)arg1 statusForCamera:(unsigned int)arg2 statusForMicrophone:(unsigned int)arg3;
- (void)requestAuthForMicrophone:(unsigned long long)arg1 statusForCamera:(unsigned int)arg2 statusForMicrophone:(unsigned int)arg3;
- (void)onCameraAuthoritiesGranted;
- (void)onCameraAuthoritiesUngranted;
- (void)closeShootComposing;
- (void)closeShootComposingOnCamoSessionUnstarted;
- (void)closeShootComposingOnCamoSessionStarted;
- (void)_postShootComposingVCDidDismissNotification;
- (void)_initParams;
- (void)_closeShootComposingReport;
- (unsigned long long)getUsedAuthScene;
- (BOOL)shouldAutorotate;
- (BOOL)hidesStatusBar;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractiveDismiss;
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
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)optionObj;
- (void)setOptionObj:(id)arg1;
- (void).cxx_destruct;
@end

