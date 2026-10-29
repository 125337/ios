@interface TextStateMediaPicker : NSObject <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate>
{
    UIViewController * _hostViewController; // +0x8
    id /* block */ _imageCompletion; // +0x10
    id /* block */ _videoCompletion; // +0x18
    id /* block */ _livePhotoCompletion; // +0x20
}
+ (id)sharedPicker;
+ (void)pickFromAlbumInViewController:(id)arg1 enableLivePhoto:(BOOL)arg2 imageCompletion:(id /* block */)arg3 videoCompletion:(id /* block */)arg4 livePhotoCompletion:(id /* block */)arg5;
+ (void)pickFromCameraInViewController:(id)arg1 imageCompletion:(id /* block */)arg2 videoCompletion:(id /* block */)arg3;
- (void)showImagePickerWithCamera:(BOOL)arg1 enableLivePhoto:(BOOL)arg2;
- (void)handleDidFinishPickingSightWithInfo:(id)arg1;
- (void)callImageCompletionWithResult:(id)arg1 error:(id)arg2;
- (void)callVideoCompletionWithResult:(id)arg1 error:(id)arg2;
- (void)callLivePhotoCompletionWithResult:(id)arg1 error:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)createImagePickResult:(id)arg1 source:(long long)arg2;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (id /* block */)imageCompletion;
- (void)setImageCompletion:(id /* block */)arg1;
- (id /* block */)videoCompletion;
- (void)setVideoCompletion:(id /* block */)arg1;
- (id /* block */)livePhotoCompletion;
- (void)setLivePhotoCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
