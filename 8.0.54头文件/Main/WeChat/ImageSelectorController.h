@interface ImageSelectorController : MMObject <WCVideoProducerViewControllerDelegate, ILocationMgrExt, WCSelectorViewDelegate, WCSelectorViewDataSource, WCActionSheetDelegate, WCMultiImageScannerDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate>
{
    NSMutableArray * _arrImages; // +0x8
    WCSelectorView * _selectorView; // +0x10
    UINavigationController * _navigationController; // +0x18
    id <SelectorControllerDelegate> _delegate; // +0x20
    BOOL _bChoosed; // +0x28
    CGSize _imgSize; // +0x30
    BOOL _shouldOptimizeThumb; // +0x40
    BOOL _isSupportVideo; // +0x41
    BOOL _canPostLivePhotos; // +0x42
    BOOL _isFromWCList; // +0x43
    BOOL _forbidShowMJTemplate; // +0x44
    int _pickerScene; // +0x48
    unsigned long long _imageMaxCount; // +0x50
    SightDraft * _sightDraft; // +0x58
    unsigned long long _type; // +0x60
    NSString * _sessionID; // +0x68
}
- (id)init;
- (void)dealloc;
- (unsigned long long)numbersOfViews;
- (id)viewAtIndex:(unsigned long long)arg1;
- (void)setArrImages:(id)arg1;
- (void)setSightDraft:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type:(unsigned long long)arg1;
- (CGSize)sizeForViews;
- (void)didSelectViewAtIndex:(unsigned long long)arg1;
- (void)moveItemAtIndexPath:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)dragToDeleteViewAtIndex:(long long)arg1;
- (void)onDeleteViewAtIndex:(unsigned long long)arg1;
- (void)_onDeleteAllView;
- (id)postReportSession;
- (void)showImagePicker:(long long)arg1;
- (void)showImagePicker:(long long)arg1 showsCameraButtonInPicker:(BOOL)arg2 showsCameraButtonAtBottom:(BOOL)arg3;
- (BOOL)canShowMJTemplate;
- (void)showImagePickerForReselectingImageAtIndex:(unsigned long long)arg1;
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
- (id)assetPickerController:(id)arg1 willChangeUserActionCheckTo:(BOOL)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didChangeUserActionCheckTo:(BOOL)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)_onAssetPickerDidChangeAssetSelection:(id)arg1 withCurrentState:(id)arg2;
- (id)assetPickerController:(id)arg1 willEditVideoAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didEditVideoAsset:(id)arg2 byEditAttr:(id)arg3 withCurrentState:(id)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportWcSelectImageEvent:(unsigned int)arg1;
- (void)showActionSheet:(id)arg1;
- (void)onAddViews:(id)arg1;
- (void)onDeleteItemAtIndex:(unsigned long long)arg1;
- (void)onDeleteAllItem;
- (void)willDeleteItemAtIndex:(unsigned long long)arg1;
- (void)willDeleteAllItems;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)_onPickNewSightDraft:(id)arg1 withError:(id)arg2 logNote:(id)arg3;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onImagePickerManagerOpenCamera;
- (void)onImagePickerManagerStartEditing;
- (void)onImagePickerManagerCancelEditing;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)onImagePickerManagerStartPreview;
- (void)onImagePickerManagerCancelPreview;
- (void)onImagePickerManagerDidCancelSightCamera;
- (void)onImagePickerManagerDidTakeMedia;
- (void)onImagePickerManagerDidAppear;
- (void)onImagePickerManagerStartExportingWithAssetId:(id)arg1;
- (void)onImagePickerManagerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraViewControllerDidTakeMedia;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightCameraViewControllerCancelEditing;
- (void)onSightCameraViewControllerDidOpenCamera;
- (void)onSightCameraViewControllerStartExportingWithAssetId:(id)arg1;
- (void)onSightCameraViewControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (id)getViewController;
- (BOOL)shouldShowDeleteView;
- (id)arrImages;
- (id)selectorView;
- (void)setSelectorView:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bChoosed;
- (void)setBChoosed:(BOOL)arg1;
- (CGSize)imgSize;
- (void)setImgSize:(CGSize)arg1;
- (unsigned long long)imageMaxCount;
- (void)setImageMaxCount:(unsigned long long)arg1;
- (id)sightDraft;
- (BOOL)shouldOptimizeThumb;
- (void)setShouldOptimizeThumb:(BOOL)arg1;
- (unsigned long long)type;
- (BOOL)isSupportVideo;
- (void)setIsSupportVideo:(BOOL)arg1;
- (BOOL)canPostLivePhotos;
- (void)setCanPostLivePhotos:(BOOL)arg1;
- (BOOL)isFromWCList;
- (void)setIsFromWCList:(BOOL)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (int)pickerScene;
- (void)setPickerScene:(int)arg1;
- (BOOL)forbidShowMJTemplate;
- (void)setForbidShowMJTemplate:(BOOL)arg1;
- (void).cxx_destruct;
@end

