@interface WCTimelinePoster : NSObject <WCActionSheetDelegate, MMImagePickerManagerDelegate, WCCommitViewAnimationDelegate, MMTipsViewControllerDelegate, WCVideoProducerViewControllerDelegate, WCPlainTextTipFullScreenViewDelegate>
{
    BOOL _pendingTextPostIsPrivate; // +0x8
    BOOL _isPrivatePost; // +0x9
    BOOL _lockPrivateVisibility; // +0xa
    MMUIViewController<WCCommitViewAnimationDelegate> * _viewController; // +0x10
    id <WCCommitHookDelegate> _commitDelegate; // +0x18
    WCPlainTextTipFullScreenView * _plainTextTipView; // +0x20
    long long _snsPopupBtnValue; // +0x28
    WCMomentsPostReportSession * _postReportSession; // +0x30
    WCDataItem * _cacheDateItem; // +0x38
    UIView * _animationView; // +0x40
}
+ (void)setSharedCommitDelegate:(id)arg1;
+ (id)sharedCommitDelegate;
+ (void)onPostBegin:(id)arg1 dataItem:(id)arg2;
+ (void)onPostRequest:(id)arg1 ExtFlag:(unsigned int)arg2;
+ (void)onPostFinish:(id)arg1;
+ (void)onPostDeleted:(id)arg1;
+ (void)onVisiblityChanged:(id)arg1 visiblityOp:(id)arg2;
+ (void)onPinChanged:(id)arg1 isPined:(BOOL)arg2;
- (void)showUploadOptionFromViewController:(id)arg1 postReportSession:(id)arg2;
- (void)showUploadOptionFromViewController:(id)arg1 postReportSession:(id)arg2 isPrivatePost:(BOOL)arg3;
- (void)showTextPostFromViewController:(id)arg1 postReportSession:(id)arg2 isPrivatePost:(BOOL)arg3;
- (void)_recoverTextDraftAndPresent:(id)arg1 postReportSession:(id)arg2;
- (void)_presentTextCommitViewControllerWithPostReportSession:(id)arg1;
- (void)_showPublishActionSheetFromViewController:(id)arg1 sender:(id)arg2 postReportSession:(id)arg3;
- (void)configDataReportForPrivatePostActionSheet:(id)arg1;
- (void)_applyPrivatePostTitleStyle:(id)arg1;
- (void)addCameraButtonToActionSheet:(id)arg1;
- (void)showPostGuideFromViewController:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)acceptPostGuide;
- (void)acceptPostGuideFromViewController:(id)arg1 postReportSession:(id)arg2;
- (void)recoverDraftAndOpenCommitViewControllerWithEnhanceDraftController:(id)arg1 postReportSession:(id)arg2;
- (void)showPhotoAlertFromViewController:(id)arg1 sender:(id)arg2 postReportSession:(id)arg3;
- (void)onIKnowItBtnClicked;
- (id)recoverPostReportSessionFromTrashWithPostCycleId:(id)arg1 postReportSession:(id)arg2;
- (void)reportLastDraft;
- (void)addSpringItemToActionSheetIfNeeded:(id)arg1;
- (void)showImagePicker:(long long)arg1;
- (void)showImagePicker:(long long)arg1 showsCameraButtonInPicker:(BOOL)arg2 showsCameraButtonAtBottom:(BOOL)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)generatePostReportSessionForEntrance:(long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)_onPickNewSightDraft:(id)arg1 withError:(id)arg2 logNote:(id)arg3 fromEntrance:(long long)arg4 isAsyncComposite:(BOOL)arg5;
- (id)getViewController;
- (void)clearPostReportSession;
- (void)cancelAndClearPostReportSession;
- (void)openCommitViewControllerWithShowLocation:(BOOL)arg1 arrImage:(id)arg2 postReportSession:(id)arg3;
- (void)openCommitViewControllerWithSightDraft:(id)arg1 postReportSession:(id)arg2;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)clearAnimationProperties;
- (void)onSightCameraCancel:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraViewControllerDidTakeMedia;
- (void)onSightCameraViewControllerStartExportingWithAssetId:(id)arg1;
- (void)onSightCameraViewControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onSightCameraViewControllerStartEditing;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (BOOL)_prepareAssetsForPost:(id)arg1 withAssetPickerState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_prepareCompositeTask:(id)arg1 withAsyncEnabled:(BOOL)arg2 fromAssetPicker:(id)arg3;
- (void)_syncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_asyncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_prepareVideoProducerWithAssetList:(id)arg1 withCurrentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_prepareVideoProducerVMWithAssetList:(id)arg1 currentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_startVideoProducerVCWithVM:(id)arg1 fromAssetPicker:(id)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(BOOL)arg2;
- (void)_onRecordImagePickerAppear;
- (id)assetPickerController:(id)arg1 willChangeUserActionCheckTo:(BOOL)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didChangeUserActionCheckTo:(BOOL)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willEditVideoAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didEditVideoAsset:(id)arg2 byEditAttr:(id)arg3 withCurrentState:(id)arg4;
- (id)_onAssetPickerDidChangeAssetSelection:(id)arg1 withCurrentState:(id)arg2;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)commitDelegate;
- (void)setCommitDelegate:(id)arg1;
- (id)plainTextTipView;
- (void)setPlainTextTipView:(id)arg1;
- (BOOL)pendingTextPostIsPrivate;
- (void)setPendingTextPostIsPrivate:(BOOL)arg1;
- (BOOL)isPrivatePost;
- (void)setIsPrivatePost:(BOOL)arg1;
- (BOOL)lockPrivateVisibility;
- (void)setLockPrivateVisibility:(BOOL)arg1;
- (long long)snsPopupBtnValue;
- (void)setSnsPopupBtnValue:(long long)arg1;
- (id)postReportSession;
- (void)setPostReportSession:(id)arg1;
- (id)cacheDateItem;
- (void)setCacheDateItem:(id)arg1;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (void).cxx_destruct;
@end
