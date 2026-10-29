@interface TakeOrSelectHeadImageLogic : MMObject <MMSightCameraViewControllerDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    UIViewController * m_viewController; // +0x8
    id <TakeOrSelectHeadImageLogicDelegate> m_delegate; // +0x10
}
- (id)getViewController;
- (id)getNavigationController;
- (void)showImagePikcer:(long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)showGetHeadImage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
@end

