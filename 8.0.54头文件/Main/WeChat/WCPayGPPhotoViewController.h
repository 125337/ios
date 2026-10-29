@interface WCPayGPPhotoViewController : WCDragToCloseViewController <ImageScrollViewDelegate, WCActionSheetDelegate>
{
    id <WCPayGPPhotoViewControllerDelegate> _delegate; // +0x68
    UIImage * _originImage; // +0x70
    ImageScrollView * _imageView; // +0x78
    UIImageView * _animateImageView; // +0x80
    UIView * _maskView; // +0x88
    CGRect _originRect; // +0x90
}
- (id)initWithDelegate:(id)arg1 image:(id)arg2 originRect:(CGRect)arg3;
- (BOOL)useTransparentNavibar;
- (BOOL)hidesStatusBar;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupView;
- (void)animateShowImage;
- (void)dismissPhotoView;
- (void)dismissPhotoViewWithAnimation;
- (void)onSingleTap:(id)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onFullScreenItemDragToClose;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (CGRect)originRect;
- (void)setOriginRect:(CGRect)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)animateImageView;
- (void)setAnimateImageView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (void).cxx_destruct;
@end

