@interface ImageController : MMObject <MMSightCameraViewControllerDelegate, WCActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, ImagePreviewDelegate, ImageBrowseDelegate, MMImagePickerManagerDelegate>
{
    id <ImageControllerDelegate> m_delegate; // +0x8
    CaptureVideoInfo * m_oVideoInfo; // +0x10
    UINavigationController * m_oVideoPicker; // +0x18
    MMLoadingView * m_loadingView; // +0x20
    BOOL m_isJustReturnMMAsset; // +0x28
    BOOL _m_supportHeif; // +0x29
    BOOL _isInPageSheetMode; // +0x2a
    BOOL _isSending; // +0x2b
    unsigned long long _scene; // +0x30
}
+ (long long)maxImageCountForScene:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;
- (void)initLoadingView;
- (id)getViewController;
- (void)showImagePicker:(long long)arg1;
- (void)showImagePicker:(long long)arg1 useSightCamera:(BOOL)arg2 sightCameraMode:(unsigned long long)arg3;
- (void)OpenMediaBrowser;
- (void)OpenCameraController;
- (void)SendImageWithURL:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)handleVideo:(id)arg1;
- (void)alertCancelSendVideo;
- (void)alertDidSendVideo;
- (void)alertViewClickedWithIsSend:(BOOL)arg1;
- (void)didSelectMMAsset:(id)arg1 finish:(BOOL)arg2 fromImagePicker:(id)arg3;
- (long long)maxImageCount;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(BOOL)arg3 ImageInfo:(id)arg4 fromImagePicker:(id)arg5;
- (void)didSelectImage:(id)arg1 fromImagePicker:(id)arg2;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 fromImagePicker:(id)arg3;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 imageInfo:(id)arg3 fromImagePicker:(id)arg4;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(BOOL)arg3 fromImagePicker:(id)arg4;
- (id /* block */)willFinishPickingAsset;
- (void)didSelectAsset:(id)arg1 Finish:(BOOL)arg2 fromImagePicker:(id)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)processPickAssetInfo:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)Reset;
- (void)downloadFailInImageBrowse;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (id)chatUserNameForSightStatistics;
- (id /* block */)onShortVideoWillTaken;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (id /* block */)onSightPictureWillTaken;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)dismissImagePicker;
- (void)checkBigFileTransferWithInfos:(id)arg1 picker:(id)arg2;
- (void)handleSendAssetWithInfos:(id)arg1 picker:(id)arg2;
- (void)startSerialSendWithInfos:(id)arg1 picker:(id)arg2;
- (double)videoDurationForDeferFetchAsset:(id)arg1 info:(id)arg2;
- (void)precomputeVideoInfosWithInfos:(id)arg1 completion:(id /* block */)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_oVideoInfo;
- (void)setM_oVideoInfo:(id)arg1;
- (id)m_oVideoPicker;
- (void)setM_oVideoPicker:(id)arg1;
- (BOOL)m_isJustReturnMMAsset;
- (void)setM_isJustReturnMMAsset:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)m_supportHeif;
- (void)setM_supportHeif:(BOOL)arg1;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (BOOL)isSending;
- (void)setIsSending:(BOOL)arg1;
- (void).cxx_destruct;
@end
