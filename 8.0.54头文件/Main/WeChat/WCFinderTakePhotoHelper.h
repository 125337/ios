@interface WCFinderTakePhotoHelper : NSObject <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate>
{
    UIViewController * _vc; // +0x8
    id /* block */ _complete; // +0x10
}
+ (id)show:(id)arg1 toVC:(id)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setBlock:(id /* block */)arg1;
- (void)_onPickerSelectedImage:(id)arg1;
- (void)_onPickerCancel;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)close;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)onShortVideoTakenFailedToSaveToLibrary:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (void).cxx_destruct;
@end

