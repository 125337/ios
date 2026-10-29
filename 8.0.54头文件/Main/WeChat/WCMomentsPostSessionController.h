@interface WCMomentsPostSessionController : NSObject <MMImagePickerManagerDelegate, WCVideoProducerViewControllerDelegate>
{
    WCMomentsPostReportSession * _postReportSession; // +0x8
    MMUIViewController<WCCommitViewAnimationDelegate> * _hostViewController; // +0x10
    WCMomentsTemplateShareInfo * _currentShareInfo; // +0x18
}
+ (long long)minDurationForVideoAsset;
+ (BOOL)willSelectHybridAssetsIfAdd:(id)arg1 with:(id)arg2;
+ (BOOL)willSelectMultiVideosIfAdd:(id)arg1 with:(id)arg2;
+ (BOOL)willExceedSumAssetsCountIfAdd:(id)arg1 with:(id)arg2;
+ (BOOL)willExceedSumDurationIfAdd:(id)arg1 with:(id)arg2;
+ (BOOL)isLessThanMinDurationFor:(id)arg1 with:(id)arg2;
+ (BOOL)isAssetInfo:(id)arg1 exceedSightDurationForPickerScene:(int)arg2;
+ (BOOL)showAlertWithText:(id)arg1;
+ (id)createVideoProducerVMWithAssetList:(id)arg1 createSameInfo:(id)arg2 postReportSession:(id)arg3 activityEventType:(unsigned int)arg4;
+ (id)safeCompositionAttrFromAssetInfo:(id)arg1;
+ (unsigned long long)_convertSightSceneFromPickerScene:(int)arg1;
- (id)initWithHostViewController:(id)arg1 postReportSession:(id)arg2;
- (void)showAssetPickerFromSourceType:(long long)arg1 withShareInfo:(id)arg2 showCamera:(BOOL)arg3;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (BOOL)_prepareAssetsForPost:(id)arg1 withAssetPickerState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_prepareCompositeTask:(id)arg1 withAsyncEnabled:(BOOL)arg2 fromAssetPicker:(id)arg3;
- (void)_syncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_asyncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_prepareVideoProducerWithAssetList:(id)arg1 withCurrentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_prepareVideoProducerVMWithAssetList:(id)arg1 currentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_startVideoProducerVCWithVM:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_onPickNewSightDraft:(id)arg1 withError:(id)arg2 logNote:(id)arg3 fromEntrance:(long long)arg4 isAsyncComposite:(BOOL)arg5;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(BOOL)arg2;
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
- (void)onImagePickerManagerDidAppear;
- (void)onImagePickerManagerStartPreview;
- (void)onImagePickerManagerStartEditing;
- (void)onImagePickerManagerStartExportingWithAssetId:(id)arg1;
- (void)onImagePickerManagerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)clearPostReportSession;
- (void)cancelAndClearPostReportSession;
- (id)postReportSession;
- (void)setPostReportSession:(id)arg1;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (id)currentShareInfo;
- (void)setCurrentShareInfo:(id)arg1;
- (void).cxx_destruct;
@end

