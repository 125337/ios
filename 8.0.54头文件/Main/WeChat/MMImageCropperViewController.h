@interface MMImageCropperViewController : MMUIViewController <UIScrollViewDelegate, EditImageInitialViewDelegate>
{
    EditImageIntialView * _editImageInitialView; // +0x68
    id <MMImageCropperDelegate> _delegate; // +0x70
    UIImage * _originalImage; // +0x78
    long long _cropperViewStyle; // +0x80
    CGSize _rectRatioSize; // +0x88
}
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 andScene:(long long)arg2;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)initView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)getDisplayImage:(id /* block */)arg1;
- (void)getOriginalImage:(id /* block */)arg1;
- (id)currentViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)rectRatioSize;
- (void)setRectRatioSize:(CGSize)arg1;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (long long)cropperViewStyle;
- (void)setCropperViewStyle:(long long)arg1;
- (void).cxx_destruct;
@end

