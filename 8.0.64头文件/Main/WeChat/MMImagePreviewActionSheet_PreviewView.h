@interface MMImagePreviewActionSheet_PreviewView : UIView
{
    BOOL _isDisplayOriginImage; // +0x8
    id <MMImagePreviewActionSheet_PreviewViewDelegate> _delegate; // +0x10
    MMImagePreviewActionSheet_ImageView * _imageScrollView; // +0x18
    ImageBrowseButton * _operateButton; // +0x20
    MMLoadingView * _loadingView; // +0x28
    MMImagePreviewInfo * _info; // +0x30
    CGSize _containerSize; // +0x38
}
- (id)initWithImagePreviewInfo:(id)arg1;
- (void)showInView:(id)arg1;
- (void)setContainerSize:(CGSize)arg1;
- (id)currentImage;
- (void)layoutSubviews;
- (BOOL)isLandScape;
- (void)layoutUI;
- (CGRect)imageDisplayFrame;
- (void)updateButtonTitle:(id)arg1;
- (void)updateImage:(id)arg1 isOrigin:(BOOL)arg2;
- (void)onClickOperateButton;
- (void)startLoading;
- (void)stopLoading;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDisplayOriginImage;
- (id)imageScrollView;
- (void)setImageScrollView:(id)arg1;
- (id)operateButton;
- (void)setOperateButton:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (CGSize)containerSize;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end
