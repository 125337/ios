@interface GKImageCropViewController : UIViewController
{
    UIImage * _croppedImage; // +0x8
    BOOL resizeableCropArea; // +0x10
    UIImage * sourceImage; // +0x18
    id <GKImageCropControllerDelegate> delegate; // +0x20
    GKImageCropView * imageCropView; // +0x28
    UIToolbar * toolbar; // +0x30
    UIButton * cancelButton; // +0x38
    UIButton * useButton; // +0x40
    CGSize cropSize; // +0x48
}
- (void)_actionCancel;
- (void)_actionUse;
- (void)_setupNavigationBar;
- (void)_setupCropView;
- (void)_setupCancelButton;
- (void)_setupUseButton;
- (id)_toolbarBackgroundImage;
- (void)_setupToolbar;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)sourceImage;
- (void)setSourceImage:(id)arg1;
- (CGSize)cropSize;
- (void)setCropSize:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageCropView;
- (void)setImageCropView:(id)arg1;
- (id)toolbar;
- (void)setToolbar:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)useButton;
- (void)setUseButton:(id)arg1;
- (BOOL)resizeableCropArea;
- (void)setResizeableCropArea:(BOOL)arg1;
- (void).cxx_destruct;
@end

