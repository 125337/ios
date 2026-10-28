@interface MMImagePickerManager : MMObject <MMImagePickerControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, ImageBrowseDelegate>
{
    BOOL _statusBarHidden; // +0x8
    id <MMImagePickerManagerDelegate> m_delegate; // +0x10
    MMImagePickerManagerOptionObj * _optionObj; // +0x18
    NSMutableArray * _tempImagePool; // +0x20
}
+ (void)showWithOptionObj:(id)arg1 inViewController:(id)arg2;
+ (id)getImagePickerFromPhotoLibraryWithOptionObj:(id)arg1 withManager:(id)arg2;
+ (id)getImagePickerFromCameraWithOptionObj:(id)arg1 withManager:(id)arg2;
+ (id)getImagePickerControllerWithOptionObj:(id)arg1;
+ (BOOL)isCaptureByImagePicker:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)doActionsAfterTakenFromImagePicker:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)statusBarShowOniOS10;
- (void)MMImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)MMImagePickerController:(id)arg1 didFailToPickAssets:(id)arg2;
- (void)MMImagePickerController:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)MMImagePickerControllerDidCancel:(id)arg1;
- (void)MMImagePickerControllerDidSkip:(id)arg1;
- (void)MMImagePickerControllerDidPopOrDismiss:(id)arg1;
- (void)MMVideoPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)MMVideoPickerController:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMVideoPickerController:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (void)MMVideoPickerController:(id)arg1 didFinishSelectingFinderDataItem:(id)arg2;
- (void)MMImagePickerControllerDidCancelEditImage:(id)arg1;
- (void)MMImagePickerControllerDidCancelEditVideo:(id)arg1;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
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
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)onImagePickerControllerClickFooterViewButton;
- (void)onImagePickerControllerOpenCamera;
- (void)onImagePickerControllerOpenFinderCamera:(id)arg1;
- (void)onImagePickerControllerStartEditing;
- (void)onImagePickerControllerCancelEditing;
- (void)onImagePickerControllerStartPreview;
- (void)onImagePickerControllerCancelPreview;
- (void)onImagePickerControllerDidCancelSightCamera;
- (void)onImagePickerControllerDidTakeMedia;
- (void)onImagePickerControllerDidAppear;
- (void)onImagePickerControllerDidDisappear;
- (void)onImagePickerControllerStartExportingWithAssetId:(id)arg1;
- (void)onImagePickerControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)didSelectImage:(id)arg1 fromImagePicker:(id)arg2;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 fromImagePicker:(id)arg3;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 imageInfo:(id)arg3 fromImagePicker:(id)arg4;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(BOOL)arg3 fromImagePicker:(id)arg4;
- (void)onNextStepWithPublishSelectAssetsDataItem:(id)arg1;
- (void)onCancel;
- (void)onImagePickerControllerClickPostFinderLongVideoWithPostSession:(id)arg1;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerController:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (void)customBottomComposingButtonEnabledStateDidChange:(BOOL)arg1;
- (id)customBottomComposingButtonForAssetPreviewing:(BOOL)arg1;
- (void)showWithOptionObj:(id)arg1 inViewController:(id)arg2 delegate:(id)arg3;
- (id)getImagePickerControllerWithOptionObj:(id)arg1 delegate:(id)arg2;
- (id)init;
- (id)optionObj;
- (void)addMonoServiceWithObj:(id)arg1 inView:(id)arg2;
- (void)OnShowWillFinished;
- (void)OnShowDidFinished;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setOptionObj:(id)arg1;
- (id)tempImagePool;
- (void)setTempImagePool:(id)arg1;
- (BOOL)statusBarHidden;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end
