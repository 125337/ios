@interface SettingMyAccountExtInfoLogic : MMObject <SettingLastHeadImgViewControllerDelegate, MMSightCameraViewControllerDelegate, WCActionSheetDelegate, MessageObserverDelegate, MMImagePickerManagerDelegate>
{
    id <settingMyAccountExtInfoLogicDelegate> m_delegate; // +0x8
    UIViewController * m_viewController; // +0x10
    CUsrInfo * m_usrInfo; // +0x18
    unsigned int m_uiUploadHeadEventID; // +0x20
    UIImage * _lastImage; // +0x28
}
- (id)getViewController;
- (id)getNavigationController;
- (void)showImagePicker:(long long)arg1;
- (void)handleImage:(id)arg1;
- (void)onCamera;
- (void)onPhotoLibrary;
- (void)onPhotoSave;
- (void)onPhotoLast;
- (void)onSelectLastImage:(id)arg1;
- (void)showChangeImg:(id)arg1;
- (id)lastImagePath;
- (id)loadLastImage;
- (void)saveLastImage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)resetViewControllerAndDelegate;
- (void)reload;
- (void)dealloc;
- (void)dismissPhotoPicker;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (id)m_usrInfo;
- (void)setM_usrInfo:(id)arg1;
- (void).cxx_destruct;
@end
