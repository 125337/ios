@interface GKImagePicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, GKImageCropControllerDelegate>
{
    BOOL resizeableCropArea; // +0x8
    id <GKImagePickerDelegate> delegate; // +0x10
    UIImagePickerController * _imagePickerController; // +0x18
    CGSize cropSize; // +0x20
}
- (id)init;
- (void)_hideController;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imageCropController:(id)arg1 didFinishWithCroppedImage:(id)arg2;
- (CGSize)cropSize;
- (void)setCropSize:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)resizeableCropArea;
- (void)setResizeableCropArea:(BOOL)arg1;
- (id)imagePickerController;
- (void)setImagePickerController:(id)arg1;
- (void).cxx_destruct;
@end

