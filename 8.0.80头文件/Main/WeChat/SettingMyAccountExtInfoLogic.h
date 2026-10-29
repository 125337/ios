@interface SettingMyAccountExtInfoLogic : MMObject <SettingLastHeadImgViewControllerDelegate, MMSightCameraViewControllerDelegate, WCActionSheetDelegate, MessageObserverDelegate, MMImagePickerManagerDelegate>
{
    id <settingMyAccountExtInfoLogicDelegate> m_delegate; // +0x8
    UIViewController * m_viewController; // +0x10
    CUsrInfo * m_usrInfo; // +0x18
    unsigned int m_uiUploadHeadEventID; // +0x20
    unsigned long long m_actionSheetSessionId; // +0x28
    UIImage * _lastImage; // +0x30
    BOOL _showOnlyPhotoLibrary; // +0x38
    BOOL _showCameraAndPhotoLibraryOnly; // +0x39
    NSString * _botUserName; // +0x40
}
- (id)getViewController;
- (id)getNavigationController;
- (void)showImagePicker:(long long)arg1;
- (void)handleImage:(id)arg1;
- (void)onCamera;
- (void)onPhotoLibrary;
- (void)onPhotoSave;
- (void)onPhotoLast;
- (void)onCancel;
- (void)reportAction:(unsigned int)arg1;
- (void)onSelectLastImage:(id)arg1;
- (void)showChangeImg:(id)arg1;
- (id)lastImagePath;
- (id)loadLastImage;
- (void)saveLastImage;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)resetViewControllerAndDelegate;
- (void)reload;
- (void)dealloc;
- (void)dismissPhotoPicker;
- (void)onImagePickerManagerStartEditing;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)reportEnterEdit:(int)arg1;
- (void)reportFinishEdit:(int)arg1;
- (id)m_usrInfo;
- (void)setM_usrInfo:(id)arg1;
- (BOOL)showOnlyPhotoLibrary;
- (void)setShowOnlyPhotoLibrary:(BOOL)arg1;
- (BOOL)showCameraAndPhotoLibraryOnly;
- (void)setShowCameraAndPhotoLibraryOnly:(BOOL)arg1;
- (id)botUserName;
- (void)setBotUserName:(id)arg1;
- (void).cxx_destruct;
@end
