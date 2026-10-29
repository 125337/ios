@interface WCImageSearchCameraViewController : MMSightCameraViewController <MMImagePickerManagerDelegate>
{
     searchDelegate; // +0x8
}
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)searchDelegate;
- (void)setSearchDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidPresent:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)hidesStatusBar;
- (void)closeAfterDone;
- (void)showImagePicker;
- (id)toolbarBtnOrder;
- (id)initWithCameraMode:(unsigned long long)arg1 scene:(int)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end

