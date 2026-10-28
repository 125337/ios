@interface WCCommentImageHelper : NSObject <MMImagePickerManagerDelegate>
{
    UIViewController * _viewController; // +0x8
    id <WCCommentImageHelperDelegate> _helperDelegate; // +0x10
}
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)selectPhotoFromImagePicker;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)helperDelegate;
- (void)setHelperDelegate:(id)arg1;
- (void).cxx_destruct;
@end
