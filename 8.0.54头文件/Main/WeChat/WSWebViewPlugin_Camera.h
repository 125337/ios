@interface WSWebViewPlugin_Camera : WSWebViewPluginBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, _TtP6WeChat41WCImageSearchCameraViewControllerDelegate_, MMSightCameraViewControllerDelegate>
{
     searchEntity; // +0x8
     isInitiativeSearch; // +0x10
}
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)didPickImage:(id)arg1;
- (id)getImagePickerOption;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)nativeImageSearchWithSource:(unsigned long long)arg1;
- (void)openCameraForImageSearch;
- (id)init;
- (void).cxx_destruct;
@end

