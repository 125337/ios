@interface MMFinderLiveCompleteViewReplaySettingsCoverPickingLogic : NSObject <WCActionSheetDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate>
{
    MMFinderLiveCompleteViewReplaySettingsCoverPickingRequest * _currentRequest; // +0x8
}
- (void)showCoverPickingActionSheetInView:(id)arg1 pickerHostingVc:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (BOOL)isFrontCamera;
- (void)showCameraPickerWithHostingVc:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)showAlbumPickerWithHostingVc:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)currentRequest;
- (void)setCurrentRequest:(id)arg1;
- (void).cxx_destruct;
@end

