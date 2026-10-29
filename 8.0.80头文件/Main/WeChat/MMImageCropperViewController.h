@interface MMImageCropperViewController : MMUIViewController <UIScrollViewDelegate, EditImageInitialViewDelegate>
{
    EditImageIntialView * _editImageInitialView; // +0x70
    BOOL _useTimelineHeaderSystemNavigationBar; // +0x78
    BOOL _keepImgScale; // +0x79
    id <MMImageCropperDelegate> _delegate; // +0x80
    UIImage * _originalImage; // +0x88
    long long _cropperViewStyle; // +0x90
    CGSize _resultImageSize; // +0x98
    CGSize _rectRatioSize; // +0xa8
}
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 andScene:(long long)arg2;
- (id)initWithImage:(id)arg1 andScene:(long long)arg2 keepImgScale:(BOOL)arg3;
- (BOOL)shouldInteractivePop;
- (void)setUseTimelineHeaderSystemNavigationBar:(BOOL)arg1;
- (BOOL)shouldShowTimelineHeaderSystemNavigationBar;
- (void)viewDidLoad;
- (void)initView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (long long)preferredStatusBarStyle;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)getDisplayImage:(id /* block */)arg1;
- (void)getOriginalImage:(id /* block */)arg1;
- (id)currentViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)resultImageSize;
- (void)setResultImageSize:(CGSize)arg1;
- (CGSize)rectRatioSize;
- (void)setRectRatioSize:(CGSize)arg1;
- (BOOL)useTimelineHeaderSystemNavigationBar;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (long long)cropperViewStyle;
- (void)setCropperViewStyle:(long long)arg1;
- (BOOL)keepImgScale;
- (void)setKeepImgScale:(BOOL)arg1;
- (void).cxx_destruct;
@end
