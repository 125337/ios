@interface CircleToSearchCameraViewController : MMSightCameraViewController <MMImagePickerManagerDelegate>
{
    id <CircleToSearchCameraViewControllerDelegate> _m_delegate; // +0x70
}
+ (id)getImagePickerOptionWithDelegate:(id)arg1;
- (id)initWithCameraMode:(unsigned long long)arg1 scene:(int)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidPresent:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)hidesStatusBar;
- (void)closeAfterDone;
- (void)showImagePicker;
- (id)toolbarBtnOrder;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
